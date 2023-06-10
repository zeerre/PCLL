#!/bin/bash
#########################################################################
# File Name: comp.ITech.blog.update.push.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2023-06-01  22-06-20====
#########################################################################

echo "进入工作目录"
cd /home/kylin/geek/gitproject/github/Blog.ITech.frstlis.comp.ssh
echo
echo
echo "切换到本地工作分支，更新远程仓库"
git pull
git checkout Hexo-comp
echo
echo
echo "同步远程仓库到本地"
git merge origin/Hexo
echo
echo "推送本地分支到远程同名分支"
git add .
git commit -m "push local branch to remote."
git push origin Hexo-comp
echo
echo "UpdateTime:"$(date +%F%n%T)
echo
echo "Finished！！"






