#!/usr/bin/bash

read -p "Input paramenters:" a
read -p "input paramenters:" b

echo -e "Output paramenters: ${a},${b}"

echo "Test:The script file name:${0}"
echo "Totle paramenter numbers: $#"
echo "The whole paramenter is : $@"
echo "The first paramenter is : ${1}"
echo "The second paramenter is : ${2}"

