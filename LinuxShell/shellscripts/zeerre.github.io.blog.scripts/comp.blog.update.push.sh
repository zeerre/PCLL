#!/bin/bash
#########################################################################
# File Name: comp.blog.update.push.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2023-06-01  22-06-20====
#########################################################################

echo "进入工作目录"
cd /home/kylin/geek/gitproject/github/blog.zeerre.github.io.comp.ssh
echo
echo
echo "切换到本地工作分支，更新远程仓库"
git pull
git checkout master.compkylin
echo
echo
echo "同步远程仓库到本地"
git merge origin/master.update
echo
echo "推送本地分支到远程同名分支"
git add .
git commit -m "push local branch to remote."
git push origin master.compkylin
echo
<<<<<<< HEAD
echo "UpdateTime:"$(date +%F%n%T)
echo
=======
>>>>>>> origin/master.buffer
echo "Finished！！"






