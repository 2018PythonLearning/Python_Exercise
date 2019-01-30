import csv
from pandas import Series
import numpy as np
import pandas as pd

df = pd.read_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv')
name = df['name'][0]
print(name)
try:
    df['dynasty']
except KeyError:
    s = pd.Series()
    df['dynasty']= s
df['dynasty'][1] = '5'

print(df.shape)
print()
df.to_csv(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv', index=0)


# with open(r'G:\编程\赵鹏编程\连接\Python_Exercise\files\person.csv', 'r', encoding='utf_8') as  csvfile:
#     reader = csv.reader(csvfile)
#     for row in reader:
#         print(row[5])




