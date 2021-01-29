import requests
import json

# for single sentence
text = "I am trying to imagine you with a personality"
api_key = "<api_key>"

response = requests.post("https://apis.paralleldots.com/v4/sentiment", data={ "api_key": api_key, "text":text})

print(response.json())

#Use V3 for MIT App Inventor
