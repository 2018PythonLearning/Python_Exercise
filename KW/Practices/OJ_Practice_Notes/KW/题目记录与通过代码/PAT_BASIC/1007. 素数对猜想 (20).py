# 文件名:    1007. 素数对猜想 (20)
# 作者:      1740133524
# 创建时间:      2018/3/21

import math

n = int(input())
num = []
i = 0
# for n1 in range(1, n + 1):
#     for n2 in range(2, n1):
#         if n1 % n2 == 0:
#             n1 = 0
#             break
#     if n1 != 0:
#         num.append(n1)

for n1 in range(1, n + 1):
    if math.sqrt(n1) != 0:
        num.append(n1)

num.append(0)

for x, y in enumerate(num):
    if num[x] != 0:
        if num[x + 1] - num[x] == 2:
            i += 1

print(i)
