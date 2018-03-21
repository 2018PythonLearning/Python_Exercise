# 文件名:    1005. 继续(3n+1)猜想 (25)
# 作者:      1740133524
# 创建时间:      2018/3/21

def callatz(n):
    """计算卡拉斯猜想"""
    if n == 0:
        return [0]
    num1 = []
    while n != 1:
        if n % 2 == 0:
            n /= 2
        else:
            n = (3 * n + 1) / 2
        num1.append(n)
    return num1


def judge(n, m):
    """判断是否被覆盖"""
    if m.count(n) == 0:
        return 0
    else:
        return 1


k = int(input())

n = input()
n = n.split()

for k1 in range(k):  #转换成int
    n[k1] = int(n[k1])

for k1 in range(k):
    num = callatz(n[k1])
    for k2 in range(k):
        if judge(n[k2], num) == 1:
            n[k2] = 0
    del num

num = []

for k1 in range(k):
    if n[k1] != 0:
        num.append(n[k1])

num.sort(reverse=True)

for x,y in enumerate(num):
    if x == len(num) - 1:
        print(y)
    else:
        print(y, end=' ')









# for n1 in n:
#     num.append(callatz(n))
#
# for n1 in n:
#     if judge(n1, num) == 1
#
#
#
#
#     if judge(n1, num) == 0:
#         num.append(callatz(n1))
#
#         continue
#
#
#
#     for num1 in num:
#         judge(n1, num1)
#     judge(n1, num[])
#     num[n1] = (num.append())
