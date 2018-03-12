# 文件名:    005
# 作者:      1740133524
# 创建时间:      2018/3/12

# 输入三个整数x,y,z，请把这三个数由小到大输出。

def xiao(i1, i2):
    if i1 < i2:
        return i1
    elif i2 < i1:
        return i2
    else:
        raise Exception('有整数相等')


def da(i1, i2):
    if i1 < i2:
        return i2
    elif i2 < i1:
        return i1
    else:
        raise Exception('有整数相等')


i1 = int(input('输入第一个整数：'))
i2 = int(input('输入第二个整数：'))
i3 = int(input('输入第三个整数：'))

x1 = xiao(i1, i2)
x2 = xiao(x1, i3)

y1 = da(i1, i2)
y2 = da(y1, i3)

if i1 != x2 and i1 != y2:
    z2 = i1
elif i2 != x2 and i2 != y2:
    z2 = i2
elif i3 != x2 and i3 != y2:
    z2 = i3

print("%d < %d < %d" % (x2, z2, y2))
