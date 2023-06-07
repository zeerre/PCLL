#!/usr/bin/bash
#########################################################################
# File Name: home.blackarch.push.to.repository.sh
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-10-25  12-44-45====
#########################################################################

echo "Start the Updating Remote branch from local!!!"
echo
echo

git add .

git commit -m "Update the master.homeblackarch branch"

git push origin master.blackarch

echo
echo "UpdateTime:"$(date +%F%n%T)
echo "The Works Which push Local-repository to 
    origin Remote-repository is COMPLETED!!Thanks!!!"
