# 文件名:    007
# 作者:      1740133524
# 创建时间:      2018/3/12

# 输入一个整数列表，将一个列表的数据复制到另一个列表中。

str = input('请输入一个整数列表：')
str.split()
w = 0
a = []
for q in str.split():
    a.append(int(q[:]))
    w += 1

b = a[:]

print (a)

print (b)
