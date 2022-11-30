#!/bin/bash

read -p "Please Input :" yn

if [ ${yn} == "Y" ] || [ ${yn} == "y" ] ; then
    echo "OK"
elif [ ${yn} == "N" ] || [ ${yn} == "n" ] ; then
    echo "NO"
else
    echo "Again"
fi
