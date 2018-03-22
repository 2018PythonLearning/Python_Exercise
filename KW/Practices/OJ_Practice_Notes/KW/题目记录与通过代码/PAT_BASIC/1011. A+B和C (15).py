# 文件名:    1011. A+B和C (15)
# 作者:      1740133524
# 创建时间:      2018/3/22

t = int(input())

num = {}

for t1 in range(t):
    n = input()
    n = n.split()
    for i in range(3):
        n[i] = int(n[i])
    num[t1] = n

for t1 in range(t):
    if num[t1][0] + num[t1][1] > num[t1][2]:
        print('Case #%d: true' % (t1 + 1))
    else:
        print('Case #%d: false' % (t1 + 1))


