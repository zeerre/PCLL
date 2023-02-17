//*************************************************************************
//* File Name: server.c
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2023-02-17  10-55-06====
//*************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

#define PORT 8090		//监听的端口号
#define MAX_CONNECT 20 	//最大连接数

int main()
{
	char readBuffer[101];
	char writeBuffer[201];
	int socketfd,connectfd;
	struct sockaddr_in serverAddr;
	signal(SIGPIPE,SIG_IGN);//屏蔽管道破解信号，一般服务器都会屏蔽这个型号
	socketfd = socket(AF_INET,SOCK_STREAM,0);//创建套接字
	if(socketfd == -1)
	{
		printf("创建套接字失败!\n");
	}
	else
	{
		printf("创建套接字成功!\n");
		bzero(&serverAddr,sizeof(serverAddr));//相当于memset
		serverAddr.sin_family=AF_INET;//ipv4
		serverAddr.sin_addr.s_addr=htonl(INADDR_ANY);//设定监听的地址为任何地址都监听
		serverAddr.sin_port = htons(PORT);//设置端口号
		//套接字与端口和地址绑定
		if( -1==bind(socketfd,(struct sockaddr*)&serverAddr,sizeof(struct sockaddr)) )
		{
			printf("绑定端口失败！\n");
		}
		else
		{
			printf("绑定端口成功！\n");
			//创建监听
			if(-1==listen(socketfd,MAX_CONNECT))
			{
				printf("创建监听失败！\n");
			}
			else
			{
				printf("创建监听成功！\n");
				printf("地址:127.0.0.1:%d\n",PORT);
				while(1)
				{
					//sleep(1);
					socklen_t socketLen=0;
					//等待客户端的连接到达
					connectfd = accept(socketfd,(struct sockaddr*)&serverAddr,&socketLen);
					if(connectfd<=0)
					{
						printf("接受连接失败！\n");
					}
					else
					{
						printf("接受连接成功！\n");
						//接收数据
						int readLength=read(connectfd,readBuffer,100);
						if(readLength>0)
						{
							readBuffer[readLength]=0;
							printf("收到消息:%s,长度:%d\n",readBuffer,readLength);
							sprintf(writeBuffer,"received your msg:'%s'\n",readBuffer);
							//发送数据
							write(connectfd,writeBuffer,strlen(writeBuffer));
						}
						//关闭与客户端的连接
						close(connectfd);
					}
				}
			}
		}
		//FIXME 关闭套接字不知道是不是这个方法，反正感觉关闭失败了
		close(socketfd);
	}
	printf("程序结束\n");
	return 0;
}
