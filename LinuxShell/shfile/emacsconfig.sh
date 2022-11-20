#!/bin/bash
#########################################################################
# File Name: emacsconfig.sh
# Author:GeelBear
# mail:zeerre98988@gmail.com
# Created And Modified Time: ====2022-11-20  21-42-15====
#########################################################################
sudo apt-get install bear
sudo apt-get install -y build-essential git autoconf texinfo libgnutls28-dev libxml2-dev libncurses5-dev libjansson-dev

git clone git://git.sv.gnu.org/emacs.git
cd emacs
./autogen.sh
CFLAGS="-ggdb3 -O0" CXXFLAGS="-ggdb3 -O0" LDFLAGS="-ggdb3" ./configure --with-modules --with-json
bear -- make -j$(nproc)
make install
