# 文件名:    1006. 换个格式输出整数 (15)
# 作者:      1740133524
# 创建时间:      2018/3/21

n = int(input())

if n < 10:
    for n1 in range(n):
        print(n1 + 1, end='')
elif n < 100:
    for n1 in range(n // 10):
        print('S', end='')
    for n1 in range(n % 10):
        print(n1 + 1, end='')
elif n < 1000:
    for n1 in range(n // 100):
        print('B', end='')
    for n1 in range(n // 10 - n // 100 * 10):
        print('S', end='')
    for n1 in range(n % 10):
        print(n1 + 1, end='')
