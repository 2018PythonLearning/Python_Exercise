# 文件名:    008
# 作者:      1740133524
# 创建时间:      2018/3/12

# 输出 9*9 乘法口诀表
y = 1
for x in range(1, 10):
    while y <= x:
        print("%d * %d = %d" % (y, x, x * y), end = '   ')
        y+=1
    y = 1
    print()

