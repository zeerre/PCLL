#!/bin/bash
#########################################################################
# File Name: comp.push.to.repository.sh
# Author:GeekBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-10-25  12-44-45====
#########################################################################

echo "Start the Updating!!!"
echo
echo

git add .

git commit -m "Update the master.comp branch"

git push origin master.comp

echo
echo
echo "The Works Which push Local-repository to Remote-repository is OK!!Thanks!!!"

