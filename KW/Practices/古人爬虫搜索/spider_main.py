import pandas as pd
import urllib.request
from bs4 import BeautifulSoup
import urllib
import string
import re
import http.cookiejar

if __name__=="__main__":
    df = pd.read_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv')
    name = df['name']
    try:
        df['dynasty']
    except KeyError:
        s = pd.Series()
        df['dynasty'] = s
    dynasty = df['dynasty']

    i = 5
    while i < 10:
        print(i)
        print(name[i])
        url = 'https://www.so.com/s?q=' + name[i] + '_360百科'
        s = urllib.parse.quote(url,safe=string.printable)

        # cj = http.cookiejar.CookieJar()
        # opener = urllib.request.build_opener(urllib.request.HTTPCookieProcessor(cj))
        # urllib.request.install_opener(opener)

        # request = urllib.request.Request(s)
        # request.add_header("user-agent", "Mozilla/5.0")

        response = urllib.request.urlopen(s)
        soup = BeautifulSoup(response, 'html.parser')
        # link_node=soup.find('h3',class_=re.compile(r"res-title "))
        link_node = soup.find('a', text = re.compile("_360百科"))
        print(link_node)
        if link_node == None:
            i+=1
            continue
        # link_node = link_node.find_parent()



        try:
            url = link_node['data-url']
        except KeyError:
            url = link_node['herf']
        response = urllib.request.urlopen(url)

        request = urllib.request.Request(url)  # 创键Request对象
        request.add_header("user-agent", "Mozilla/5.0")  # 添加http的header
        response2 = urllib.request.urlopen(request)  # 发送请求获取结果

        soup = BeautifulSoup(response2, 'html.parser')
        link_node = soup.find('p', title=re.compile(r"所处时代"))

        if link_node == None:
            link_node = soup.find('p', text=re.compile(r"国籍"))
        if link_node == None:
            i += 1
            continue

        next_siblings = link_node.find_next_sibling()

        print(next_siblings.get_text())
        dynasty[i] = next_siblings.get_text()
        df.to_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv', index=0)
        # except KeyError:
        #     i+=1
        #     continue

        i+=1




        # import pandas as pd
        # import urllib.request
        # from bs4 import BeautifulSoup
        # import urllib
        # import string
        # import re
        # import http.cookiejar
        #
        # if __name__ == "__main__":
        #     root_url = "https://www.baidu.com/s?wd="
        #     df = pd.read_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv')
        #     name = df['name']
        #     try:
        #         df['dynasty']
        #     except KeyError:
        #         s = pd.Series()
        #         df['dynasty'] = s
        #     dynasty = df['dynasty']
        #
        #     i = 0
        #     while i < 50:
        #         print(i)
        #         print(name[i])
        #         url = 'https://www.so.com/s?q=' + name[i] + '百度百科'
        #         s = urllib.parse.quote(url, safe=string.printable)
        #
        #         # cj = http.cookiejar.CookieJar()
        #         # opener = urllib.request.build_opener(urllib.request.HTTPCookieProcessor(cj))
        #         # urllib.request.install_opener(opener)
        #
        #         # request = urllib.request.Request(s)
        #         # request.add_header("user-agent", "Mozilla/5.0")
        #
        #         response = urllib.request.urlopen(s)
        #         soup = BeautifulSoup(response, 'html.parser')
        #         # link_node=soup.find('h3',class_=re.compile(r"res-title "))
        #         link_node = soup.find('em', text=re.compile(r"百度百科"))
        #         # print(soup)
        #         if link_node == None:
        #             i += 1
        #             continue
        #         link_node = link_node.find_parent()
        #         print(link_node)
        #
        #         try:
        #             dynasty = df['dynasty']
        #             url = link_node['data-cache']
        #             response = urllib.request.urlopen(url)
        #             soup = BeautifulSoup(response, 'html.parser')
        #             link_node = soup.find('dt', text=re.compile(r"所处时代"))
        #             if link_node == None:
        #                 link_node = soup.find('dt', text=re.compile(r"国    籍"))
        #
        #             if link_node == None:
        #                 i += 1
        #                 continue
        #             # print(soup)
        #             next_siblings = link_node.find_next_sibling()
        #
        #             print(next_siblings.get_text())
        #             dynasty[i] = next_siblings.get_text()
        #             df.to_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv', index=0)
        #         except KeyError:
        #             i += 1
        #             continue
        #
        #         i += 1