#文件名:    006
#作者:      1740133524
#创建时间:      2018/3/12


# 输入一个数n，输出斐波那契数列前n行。

from __future__ import print_function

i = int(input("请输入一个数："))

q = {}
q[0] = 0
q[1] = 1

t = 2
while t < i:
    q[t] = q[t-1] + q[t-2]
    t += 1

n = 0
while n < i:

    print (q[n], end = ' ')
    n += 1
