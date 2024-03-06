#!/usr/bin/bash
#########################################################################
# File Name: home.push.to.repository.sh
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

git commit -m "Update the master.home branch"

git push origin master.homewin

echo
echo "UpdateTime:"$(date +%F%n%T)
echo "The Works Which push Local-repository to 
    origin Remote-repository is COMPLETED!!Thanks!!!"
