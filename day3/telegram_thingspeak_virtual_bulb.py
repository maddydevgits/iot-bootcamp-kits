import telebot
import urllib.request as url

token='' # Chatbot token
bulbapi='' # Write API Request

bot=telebot.TeleBot(token,parse_mode=None)

@bot.message_handler(commands=['start','help'])
def send_welcome(message):
  bot.reply_to(message,"Welcome to my bot \n 1. /on \n 2. /off")

@bot.message_handler(commands=['on','ON'])
def bulb_on(message):
  url.urlopen(bulbapi+"10")
  bot.reply_to(message,"Ok boss! bulb on")

@bot.message_handler(commands=['off','OFF'])
def bulb_off(message):
  url.urlopen(bulbapi+"0")
  bot.reply_to(message,"Ok boss! bulb off")

def listener(messages):
  for m in messages:
    print(str(m))

bot.set_update_listener(listener)
bot.polling()
