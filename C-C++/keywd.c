//*************************************************************************
//* File Name: keywd.c
//* Author:stevenzdg988
//* Mail:steven_zdg988@sina.com 
//* Created And Modified Time: ====2022-10-26  08-32-25====
//*************************************************************************

#include "stdio.h"
#include <limits.h>
int main(int argc, int argv[]){
    printf("minimum: %d \n"
            "maximum: %d \n"
            "size of byte: %ld \n"
            "size of bit : %ld \n",
            INT_MIN,
            INT_MAX,
            sizeof(int),
            sizeof(int)*CHAR_BIT);
    return 0;
}
