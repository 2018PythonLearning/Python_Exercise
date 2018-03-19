"""
@version: Python3.5.2
@author: GreatZP    
@contact: CNGreatZP@gmail.com
@site: http://www.greatzp.cn
@software: PyCharm
@file: 003.py
@time: 2018/1/16 16:08
"""

# 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

for i in range(1,85):
    if 168 % i == 0:
        j = 168 / i
        if i > j and (i + j) % 2 == 0 and (i - j) % 2 == 0:
            m = (i + j) / 2
            n = (i - j) / 2
            x = n * n - 100
            print(x)
