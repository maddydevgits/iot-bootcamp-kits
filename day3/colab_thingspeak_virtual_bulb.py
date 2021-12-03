import urllib.request as url

bulbapi='https://api.thingspeak.com/update?api_key=E16FCD1OIDKIO0HQ&field1='

while True:
  print("Enter on to make bulb on")
  print("Enter off to make bulb off")
  n=input('Enter choice: ')
  if n=="on" or n=="ON":
    url.urlopen(bulbapi+"10")
  elif n=="off" or n=="OFF":
    url.urlopen(bulbapi+"0")
