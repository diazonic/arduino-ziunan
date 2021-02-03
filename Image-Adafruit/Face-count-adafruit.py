import cv2
import base64
from Adafruit_IO import Client, Data
a = cv2.imread('people.jpg')
aio = Client('')

model_face = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
demo_face = model_face.detectMultiScale(a,1.1,15)
count_face = 1
for (x,y,w,h) in demo_face:#15 times looping
	cv2.rectangle(a, (x, y), (x + h, y + w), (255, 100, 0), 5)
	crop_face = a[y:y+h,x:x+w]
	path = 'Cropped_Images/Person'+str(count_face)+'.jpg'
	cv2.imwrite(path,crop_face)
	cv2.imshow('Cropped Face Image',crop_face)

	with open(path, "rb") as imageFile:
		en_file = base64.b64encode(imageFile.read()).decode('utf-8')

	data = Data(value=en_file)
	aio.create_data('image-value', data)

	cv2.putText(a, str(count_face), (x, y), cv2.FONT_HERSHEY_COMPLEX,1, (255, 255, 255), 3)
	cv2.imshow('Output', a)

	data_count = Data(value=count_face)
	aio.create_data('face-value', data_count)
	count_face = count_face + 1
	cv2.waitKey(2000)
cv2.waitKey(3000)
cv2.destroyAllWindows()
