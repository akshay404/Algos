from bs4 import BeautifulSoup

import requests

url = 'http://www.vortexict.org/sponsors.php'

r  = requests.get(url)

data = r.text

soup = BeautifulSoup(data)

for link in soup.find_all('a'):
    
    print(link.get('href'))