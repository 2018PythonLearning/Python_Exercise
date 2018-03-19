"""
@version: Python3.5.2
@author: GreatZP    
@contact: CNGreatZP@gmail.com
@site: http://www.greatzp.cn
@software: PyCharm
@file: 001.py
@time: 2018/1/15 16:54
"""

# 有四个数字：0、1、2、3、4，能组成多少个互不相同且无重复数字的三位数？各是多少？

num = 0
for i in range(1, 5):
    for j in range(0, 5):
        for k in range(0, 5):
            if (i != j) and (j != k) and (i != k):
                print("%d%d%d" % (i, j, k))
                num += 1
print(num)

