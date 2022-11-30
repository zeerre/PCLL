#!/bin/bash

if [ "${1}" == "y" ];then
    echo "OK"
elif [ "${1}" == "n" ]; then
    echo "NO"
else
    echo "Again"
fi

