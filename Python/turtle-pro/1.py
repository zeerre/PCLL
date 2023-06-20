#!/usr/bin/python3
#########################################################################
# File Name: 1.py
# Author:stevenzdg988
# mail:steven_zdg988@sina.com
# Created And Modified Time: ====2023-06-13  20-04-58====
#########################################################################

from turtle import *

color('red','green')
begin_fill()
while True:
    forward(280)
    left(175)
    if abs(pos())<1:
        break
end_fill()
done()
