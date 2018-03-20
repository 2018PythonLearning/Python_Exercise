# 文件名:    1002. 写出这个数 (20)
# 作者:      1740133524
# 创建时间:      2018/3/19

# n = int(input())
# i = 0
# pinyin = ['ling', 'yi', 'er', 'san', 'si', 'wu', 'liu', 'qi', 'ba', 'jiu']
# num = []
#
# if n == 0:
#     print(pinyin[0])
#
# while n != 0:
#     i += n % 10
#     n //= 10
#
# while i != 0:
#     num.append(pinyin[i % 10])
#     i //= 10
#
# num.reverse()
# for i, n in enumerate(num):
#     if i == len(num) - 1:
#         print(n)
#     else:
#         print(n, end=' ')


n = input()
pinyin = ['ling', 'yi', 'er', 'san', 'si', 'wu', 'liu', 'qi', 'ba', 'jiu']
num = 0
for i in n:
    num += int(i)
k = 1
while k <= num // 10:
    k *= 10
while k >= 10:
    print(pinyin[num//k], end=' ')
    num %= k
    k //= 10
print(pinyin[num])
