# 文件名:    010
# 作者:      1740133524
# 创建时间:      2018/3/12

# 暂停一秒输出，并格式化当前时间。

import time

time1 = time.localtime(time.time())

print("%d年%d月%d日 %d：%d：%d" % (time1.tm_year, time1.tm_mon, time1.tm_mday, time1.tm_hour, time1.tm_min, time1.tm_sec))

time.sleep(1)

time1 = time.localtime(time.time())

print("%d年%d月%d日 %d：%d：%d" % (time1.tm_year, time1.tm_mon, time1.tm_mday, time1.tm_hour, time1.tm_min, time1.tm_sec))

