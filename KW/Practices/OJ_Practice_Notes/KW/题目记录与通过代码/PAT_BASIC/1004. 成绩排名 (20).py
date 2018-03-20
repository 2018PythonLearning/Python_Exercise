# 文件名:    1004. 成绩排名 (20)
# 作者:      1740133524
# 创建时间:      2018/3/20

def max(x, n):
    if x['result'] > n['result']:
        return x
    else:
        return n

def min(x, n):
    if x['result'] > n['result']:
        return n
    else:
        return x

n = int(input())
stu = {}

for n1 in range(n):
    stu1 = input().split()
    stu1[2] = int(stu1[2])
    stu[n1] = {'name': stu1[0], 'id': stu1[1], 'result': stu1[2]}

mx = stu[0]
mn = stu[0]

for n1 in range(n):
    mx = max(stu[n1], mx)
    mn = min(stu[n1], mn)

print(mx['name'], mx['id'])
print(mn['name'], mn['id'])
