import requests                 
from bs4 import BeautifulSoup       

liste=list()
url="https://www.webtekno.com/"
veri=requests.get(url)
html=veri.content
parcala=BeautifulSoup(html,"html.parser")
for i in parcala.find_all("span",{"class":"content-timeline--underline"}):
    liste.append(i.text)
print(liste)