#!/usr/bin/python3
#########################################################################
# File Name: assignvalue.py
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-12-03  20-08-27====
#########################################################################

data = ["Tom",32,"female","2000-12-7","Dl"]

name,age,sexy,born,live=data

print("姓名,年龄，性别，出生日期，籍贯：",name,age,sexy,born,live)

j=0
item=[]
for i in data:
	item.append(i)
	j+=1
print(item,j)
