#!/usr/bin/python3
#########################################################################
# File Name: 2.py
# Author:stevenzdg988
# mail:steven_zdg988@sina.com
# Created And Modified Time: ====2023-06-13  20-48-50====
#########################################################################

from turtle import *

color('blue','yellow')
n=0
begin_fill()
while True:
    forward(200)
    left(60)
    n=n+1
    if n==6:
        break
end_fill()
done()
