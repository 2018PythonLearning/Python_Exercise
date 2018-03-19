# 文件名:    1001. 害死人不偿命的(3n+1)猜想 (15)
# 作者:      1740133524
# 创建时间:      2018/3/19

num = int(input())
i = 0
while num != 1:
    if num % 2 == 0:
        num /= 2
    else:
        num = 3 * num + 1
        num /= 2
    i += 1

print(i)
