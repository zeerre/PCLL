#!/bin/bash
#########################################################################
# File Name: commandtest.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-11-30  01-46-30====
#########################################################################

## express ? one : two
test -e name && echo "OK" || echo "NO"

test -f
test -d
test -r
test -w
test -x
test file1 -nt file2
test file1 -ot file2
test file1 -ef file2

test number1 -eq number2
test number1 -ne number2
test number1 -gt number2
test number1 -lt number2
test number1 -ge number2
test number1 -le number2

