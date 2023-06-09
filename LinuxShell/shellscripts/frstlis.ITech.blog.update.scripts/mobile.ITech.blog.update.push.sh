#!/bin/bash
#########################################################################
# File Name: mobile.blog.update.push.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2023-06-01  22-06-20====
#########################################################################

echo "进入工作目录"
cd /home/kylin/geek/gitproject/github/Blog.ITech.frstlis.comp.ssh
echo
echo
echo "切换到本地工作分支，更新远程仓库"
git checkout master.mobilekylin
git pull
echo
echo
echo "同步远程仓库到本地"
git merge origin/master.update
echo
echo "推送本地分支到远程同名分支"
git add .
git commit -m "push local branch to remote."
git push origin master.mobilekylin
echo
echo "Finished！！"






