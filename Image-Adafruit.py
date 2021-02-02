import base64

from Adafruit_IO import Client, Data
aio = Client('SECRET')

SRC_FILE = 'demo.jpg'


with open(SRC_FILE, "rb") as imageFile:
	str = base64.b64encode(imageFile.read()).decode('utf-8')
	print(str)
print(SRC_FILE)

data = Data(value=str)
print(data)
aio.create_data('fan', data)
