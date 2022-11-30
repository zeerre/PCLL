#!/bin/bash

while [ "${yn}" != "yes" -a "${yn}" != "YES" ]
do
    read -p "Please input: " yn
done
echo "While...Do...Done"

until [ "${yn1}" == "yes" -o "${yn1}" == "YES" ]
do

    read -p "Please input: " yn1
done
echo "Until...Do...Done"

s=0
n=0
while [ "${n}" != "100" ]
do
    n=$(($n+1))
    s=$(($s+$n))
done
echo "Totle is: $s"

s1=0
i=0
until [ "${i}" == "100" ]
do
    i=$(($i+1))
    s1=$(($s1+$i))
done
echo "Sum is:$s1"
