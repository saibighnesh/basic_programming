import requests
from bs4 import BeautifulSoup
from lxml import html


"""
A simple web scrapper that gets all the contents of a website
"""

class Scrapper():

    def __init__(self, href):
        self.href = href

    # Gets all contents of the site
    def get_full_content(self):
        website = requests.get(self.href)
        print(website.content)

    # Gets all the paragraphs
    def get_paragraghs(self):
        website = requests.get(self.href)
        soup = BeautifulSoup(website.content,'html.parser')
        paragraghs = soup.findAll('p')
        print(paragraghs)

    # Gets all the divs
    def get_divs(self):
        website = requests.get(self.href)
        soup = BeautifulSoup(website.content,'html.parser')
        divs = soup.findAll('div')
        print(divs)

    # Get all the links in the site
    def get_links(self):
        website = requests.get(self.href)
        soup = BeautifulSoup(website.content,'html.parser')
        links = soup.findAll('a')
        print(links)

    # Get all the scripts in the site
    def get_scripts(self):
        website = requests.get(self.href)
        soup = BeautifulSoup(website.content,'html.parser')
        scripts = soup.findAll('script')
        print(scripts)

    # Get all the images in the site
    def get_images(self):
        website = requests.get(self.href)
        soup = BeautifulSoup(website.content,'html.parser')
        images = soup.findAll('img')
        print(images)

scrap = Scrapper('https://www.lipsum.com/')
scrap.get_full_content()
scrap.get_divs()
scrap.get_links()
scrap.get_scripts()
scrap.get_images()
scrap.get_paragraghs()