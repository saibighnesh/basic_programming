
import time
import urllib
import requests
from bs4 import BeautifulSoup
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import re

#scraping article for these districts, u can change or add more, of your interest
district_url= [#'https://www.jagran.com/local/uttar-pradesh_pratapgarh-news-hindi.html']
                'https://www.jagran.com/local/uttar-pradesh_maharajganj-news-hindi.html']
    #'https://www.jagran.com/local/uttar-pradesh_varanasi-city-news-hindi.html']
#     'https://www.jagran.com/local/uttar-pradesh_allahabad-city-news-hindi.html',
#     'https://www.jagran.com/local/uttar-pradesh_gorakhpur-city-news-hindi.html']

# Function to request a link
def request_url(link):
    response=requests.get(link)
    news=response.content
    soup=BeautifulSoup(news,'html5lib')
    return soup;

#main scraper
for i in district_url:
    
    #list for storing data
    #link_list=[]
    title_list=[]
    news_content=[]
    news_date=[]
    
    #delete last 5 strings of the url
    i=i[:-5]
    
    #scraping articles for 5 starting pages
    total_pages=5
    curr_page=1
    
    while(curr_page<=total_pages):
        
        link=i+"-page"+str(curr_page)+".html"
        print(link)
        
        #request url
        soup=request_url(link)
        
        news=soup.find('ul',class_='topicList')
        link=news.find_all('a',href=True)

        for n in np.arange(0,len(link)):
            
            if(n==4):
                continue
                
            temp="https://www.jagran.com"+link[n]['href']
            #link_list.append(temp)

                #request url for link of article
            print(str(n+1)+": "+temp)
            soup_article=request_url(temp)

            #title of the article
            title=soup_article.find('h1').text
            title_list.append(title)

            #datetime
            datetime=soup_article.find('div', class_="dateInfo").text
            datetime=datetime.strip()
            only_date=datetime[18:29]
            d=pd.to_datetime(only_date).date()
            news_date.append(d)

            body=soup_article.find('div', class_="articleBody")
            p=body.find_all('p')

            list_paragraph=[]
            for m in np.arange(0,len(p)-2):
                paragraph=p[m].text
                list_paragraph.append(paragraph)
                final_article=" ".join(list_paragraph)
            news_content.append(final_article.strip())

        curr_page=curr_page+1
        
        
    df= pd.DataFrame(
    {'Headline': title_list,
    'Content': news_content,
    'Date':news_date})
    

    df.to_csv('district'+str(curr_district)+".csv", index=False)
    curr_district=curr_district+1
        

