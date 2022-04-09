import requests
import time
import json

while True:
  url = "https://api.thingspeak.com/channels/1686611/feeds.json?results=1"
  response = requests.request("GET", url)
  op = response.json()['feeds'][0]['field1']
  op = int(op)
  print(op)
  url = "https://api.thingspeak.com/alerts/send"

  payload = json.dumps({
  "subject": "Temp High",
  "body": f"Above 40 degrees. Its {op}"})

  headers = {
    'ThingSpeak-Alerts-API-Key': '',
    'Content-Type': 'application/json'}

  response = requests.request("POST", url, headers=headers, data=payload)

  print(response.text)
  time.sleep(10)
