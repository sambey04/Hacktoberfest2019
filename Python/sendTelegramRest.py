#!/usr/bin/env python3
import requests
import json
import datetime

class telegramsend():
    url = "https://api.telegram.org/bot"
    token = "<token>"

    def sendmessage(self, chat_id, text):
        parameter = {'text': text, 'chat_id': chat_id}
        r = requests.post(self.url + self.token + "/sendMessage", params=parameter)
        check = json.loads(r.text)
        if (check['ok'] == True ):
            return "true"
        else:
            return "false"


if __name__ == "__main__":
    tg = telegramsend()
    cid=<telegram-userid>
    tg.sendmessage(str(cid), "Hallo World")

