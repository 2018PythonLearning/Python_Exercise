# 文件名:    1007. 素数对猜想 (20)
# 作者:      1740133524
# 创建时间:      2018/3/21

# cmath模块包含了一些用于复数运算的函数. cmath模块的函数跟math模块函数基本一致，区别是cmath模块运算的是复数，math模块运算的是数学运算.

import math

n = int(input())
num = []
i = 0
for n1 in range(3, n + 1):
    for n2 in range(2, int(math.sqrt(n1) + 1)):
        if n1 % n2 == 0:
            n1 = 0
            break
    if n1 != 0:
        num.append(n1)

for x, y in enumerate(num):
    if x == 0:
        continue
    if num[x] - num[x - 1] == 2:
        i += 1

print(i)
