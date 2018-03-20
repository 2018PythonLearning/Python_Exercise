# 文件名:    1003. 我要通过！(20)
# 作者:      1740133524
# 创建时间:      2018/3/20

# 我的理解条件3（如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。）中的aPbTc是必须出现过的。没出现过的都是错的

n = int(input())
b = 1

def q(z):
    "'P'前面'A'的数量"
    return z.index('P')


def w(z):
    "'P'和'T'之间'A'的数量"
    return z.index('T') - z.index('P') - 1


def e(z):
    "'T'后面'A'的数量"
    return z.__len__() - z.index('T') - 1


str = []
for n1 in range(n):
    str.append(input())

for n1 in range(n):
    p = 1
    s = list(str[n1])
    for s1 in s:
        if s1 != 'P' and s1 != 'A' and s1 != 'T':
            p = 0
            break

    try:
        if w(s) == 0:
            p = 0

        if p == 0:
            print('NO')
            continue

        if q(s) == e(s) and w(s) == 1:
            p = 1
            if b == 1:
                b += 1
        else:
            p = 0

        if q(s) * w(s) == e(s):  # and w(s) <= b:
            p = 1
            if b == w(s):
                b += 1
        else:
            p = 0

        if p == 0:
            print('NO')
        else:
            print('YES')
    except (ValueError):
        print('NO')