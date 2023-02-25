//*************************************************************************
//* File Name: ptr.c
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2023-02-25  22-08-32====
//*************************************************************************

#include<stdio.h>
int main(){
	int *ptr,a=10,b=20;
	ptr=&a;ptr=&b;
	*ptr=*ptr+*ptr;
	printf("%d %d\n",a, *ptr);
	return 0;
}
