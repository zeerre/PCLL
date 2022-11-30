#! /bin/bash

for var in dog cat bear
do

    echo "There are ${var}"
done

username=$(cut -d ':' -f1 /etc/passwd)

for user in ${username}
do

    id ${user}
done

network="192.168.174"
for sitenu in $(seq 128 135) 
do

    ping -c 1 -w 1 ${network}.${sitenu} &> /dev/null && result=0 || result=1

    if [ "${result}" == 0 ]; then
	echo "result is ${result} .Server ${network}.${sitenu} is UP."
    else
	echo "result is ${result} .Server ${network}.${sitenu} is DOWN."
    fi
done
