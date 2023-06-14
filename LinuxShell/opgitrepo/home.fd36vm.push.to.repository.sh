#!/usr/bin/bash
#########################################################################
# File Name: comp.push.to.repository.sh
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-10-25  12-44-45====
#########################################################################

echo "Start Updating remote master.buffer branch to local,Wait..."
echo
echo

git pull

git merge origin/master.buffer

echo
echo
echo "UpdateTime:"$(date +%F%n%T)
echo "Updated all the branch ,
    And merged master.buffer to local branch COMPLETED!!!Thanks!!!"

echo "Start the Updating Remote branch from local!!!"
echo
echo

git add .

git commit -m "Update the master.fd36vm branch"

git push origin master.fd36vm

echo
echo
echo "UpdateTime:"$(date +%F%n%T)
echo "The Works Which push Local-repository to 
    origin Remote-repository is COMPLETED!!Thanks!!!"
