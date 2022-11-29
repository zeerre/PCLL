#!/usr/bin/python

num=int(input("Please Input:"))
sum=0
for i in range(1,num+1):
    sum+=i

print('The {} result is:{}'.format(num,sum))
print('The {0} result is:{1}'.format(num,sum))
print('The {num} result is:{sum}'.format(num=num,sum=sum))
print("The result is:",sum)
sum=sum/1.0
print('The result is:{0:.3f}'.format(sum))
print('The result is:%9.4f'%sum)
print("The result is:",sum)
