#!pip install python-telegram-bot==13.0 --quiet

from telegram.ext import Updater, MessageHandler,Filters

def demo1(bot,update):
  chat_id = bot.message.chat_id
  path = 'https://image.shutterstock.com/image-vector/ok-hand-lettering-handmade-calligraphy-260nw-669965602.jpg'
  bot.message.reply_text('I am fine')
  update.bot.sendPhoto(chat_id=chat_id,photo=path)

def demo2(bot,update):
  bot.message.reply_text('My name is ABC-Bot')

def main(bot,update):
  a = bot.message.text.lower()
  print(a)

  if a == "how are you?":
    demo1(bot,update)
  elif a =="what is your name?" or a=="name please":
    demo2(bot,update)
  else:
    bot.message.reply_text('Invalid Text')

BOT_TOKEN = '1833519378:AAE8sqMaQdTwgLxEhS42cHZry1VAiHzND6o'
u = Updater(BOT_TOKEN,use_context=True)
dp = u.dispatcher
dp.add_handler(MessageHandler(Filters.text,main))
u.start_polling()
u.idle()
