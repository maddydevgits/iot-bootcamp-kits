# subscriber script

import paho.mqtt.client as mqtt

client=mqtt.Client()
client.connect('broker.hivemq.com',1883)
print('Broker Connected')
client.subscribe('kits/le3')

def notifier(client,userdata,msg):
  print(msg.payload)

client.on_message=notifier
client.loop_forever()

