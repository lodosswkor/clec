from selenium import webdriver
from bs4 import BeautifulSoup
from selenium.webdriver.common.keys import Keys
import time
import pandas as pd

chromedriver = '/Volumes/DATA/Python_Project/chromedriver'


options = webdriver.ChromeOptions()
options.add_argument('headless')
options.add_argument('disable-gpu')

driver = webdriver.Chrome(chromedriver, options=options)
driver.implicitly_wait(3)

driver.get('https://shopping.naver.com/home/p/index.nhn')
driver.find_element_by_name('query').send_keys('파이썬')
#time.sleep(2)
driver.find_element_by_class_name("_search").send_keys(Keys.ENTER)


list_data = driver.find_elements_by_class_name("basicList_item__2XT81")
#html = driver.page_source;
#soup = BeautifulSoup(html, 'html.parser')
#list_data = soup.select('.basicList_item__2XT81')


i = 0

data = {
  'rank': [],
  'name': [],
  'price': [],
  'link': []
}

for list in list_data:

    link = list.find_element_by_class_name('basicList_link__1MaTN').get_attribute('href')
    name = list.find_element_by_class_name('basicList_link__1MaTN').text
    price = list.find_element_by_class_name('price_num__2WUXn').text

    data['rank'].append(i + 1)
    data['name'].append(name)
    data['price'].append(price)
    data['link'].append(link)

    if i > 4 : break
    i = i + 1


driver.quit()

goods_df = pd.DataFrame.from_dict(data)
print(goods_df)
goods_df.to_csv(f'goods.csv', mode='w', sep=',', header=True)

'''
driver.get('https://order.pay.naver.com/home') # Naver 페이 들어가기
html = driver.page_source # 페이지의 elements모두 가져오기
soup = BeautifulSoup(html, 'html.parser') # BeautifulSoup사용하기
notices = soup.select('div.p_inr > div.p_info > a > span')

for n in notices:
    print(n.text.strip())
'''