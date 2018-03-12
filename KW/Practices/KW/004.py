# 文件名:    004
# 作者:      1740133524
# 创建时间:      2018/3/12


# 输入某年某月某日，判断这一天是这一年的第几天？

nian = int(input("请输入年份："))
yue = int(input("请输入月份："))
ri = int(input("请输入日期："))

if yue >= 1:
    ri += 0
if yue >= 2:
    ri += 31
if yue >= 3:
    if nian % 4 == 0 and nian % 100 != 0 or nian % 400 == 0:
        ri += 29
    else:
        ri += 28
if yue >= 4:
    ri += 31
if yue >= 5:
    ri += 30
if yue >= 6:
    ri += 31
if yue >= 7:
    ri += 30
if yue >= 8:
    ri += 31
if yue >= 9:
    ri += 31
if yue >= 10:
    ri += 30
if yue >= 11:
    ri += 31
if yue >= 12:
    ri += 30

print ("是%d年的第%d天" % (nian, ri))
