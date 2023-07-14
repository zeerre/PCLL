#!/usr/bin/bash
#########################################################################
# File Name: update.all.branch.sh
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-10-25  12-48-55====
#########################################################################

echo "Start Updating remote master.buffer branch to local,Wait..."
echo
echo

git pull

git merge origin/master.buffer

echo
echo
echo "UpdateTime:"$(date +%F%n%T)
echo "Updated all the branch,
    And merged master.buffer to local branch COMPLETED!!!Thanks!!!"
