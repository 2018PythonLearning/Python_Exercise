#文件名:    1008. 数组元素循环右移问题 (20)
#作者:      1740133524
#创建时间:      2018/3/21

n = input()
n = n.split()
m = int(n[1])
n = int(n[0])

num = input()
num = num.split()
if m != 0:
    if m > n:
        m = m - n
    num[:0] = num[-m:]
    num[-m:] = []

for n1 in range(n):
    num[n1] = int(num[n1])
    if n1 == n - 1:
        print(num[n1], end='')
    else:
        print(num[n1], end=' ')





