//*************************************************************************
//* File Name: client.c
//* Author:GeekBear
//* Mail:zeerre98988@gmail.com 
//* Created And Modified Time: ====2023-02-17  10-45-49====
//*************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

//www.baidu.com 180.97.33.107
//IP(180,97,33,107),

#define IP(a,b,c,d) ( ((a&0xff)<<24)|((b&0xff)<<16)|((c&0xff)<<8)|((d&0xff)<<0) )
#define IPA(ip) ((ip>>24)&0xff)
#define IPB(ip) ((ip>>16)&0xff)
#define IPC(ip) ((ip>>8)&0xff)
#define IPD(ip) ((ip>>0)&0xff)

void* getHttpData(unsigned int ip,int port,const char* page,int* outlen);
int getHttpContentLength(const char *httpHead);

int main(void) {
	int len=0;
	void* data = NULL;
	FILE* fd = NULL;

	////////////////////
	// GET http://www.baidu.com/img/superlogo_c4d7df0a003d3db9b65e9ef0fe6da1ec.png
	data = getHttpData(
			IP(180,97,33,107),
			80,
			"/img/superlogo_c4d7df0a003d3db9b65e9ef0fe6da1ec.png",
			&len
			);

	fd = fopen("baidu.png","wb+");
	fwrite(data,1,len,fd);
	fclose(fd);
	free(data);
	////////////////////
	////////////////////
	// GET http://www.baidu.com/
	data = getHttpData(
			IP(180,97,33,107),
			80,
			"/",
			&len
			);

	fd = fopen("baidu.html","wb+");
	fwrite(data,1,len,fd);
	fclose(fd);
	free(data);
	///////////////////
	return 0;
}


void* getHttpData(unsigned int ip,int port,const char* page,int* outlen){
	const char* format = "GET %s HTTP/1.1\r\nHost: %d.%d.%d.%d :%d\r\n\r\n";
	char httpHead[32*1024] = "";
	char* httpData=NULL;
	sprintf(httpHead,format,
			page,
			IPA(ip),IPB(ip),IPC(ip),IPD(ip),
			port
		);
	printf("##########################\n");
	printf("httpHead:%s",httpHead);
	printf("##########################\n");


	int connectRet,socketfd;
	struct sockaddr_in clientAddr;
	socketfd = socket(AF_INET,SOCK_STREAM,0);//创建套接字 ,AF_NET:ipv4，SOCK_STREAM:TCP协议
	if(socketfd == -1)
	{
		printf("创建套接字失败!\n");
	}
	else
	{
		//printf("创建套接字成功!\n");
		memset(&clientAddr,0,sizeof(clientAddr));
		clientAddr.sin_family=AF_INET;//ipv4
		clientAddr.sin_addr.s_addr=htonl(ip);
		clientAddr.sin_port = htons(port);//设置端口号
		connectRet=connect(socketfd,(struct sockaddr*)&clientAddr,sizeof(struct sockaddr));
		if(-1==connectRet)
		{
			printf("连接到服务器失败!\n");
		}
		else
		{
			write(socketfd,httpHead,strlen(httpHead));
			int allLen = 0;
			int readLen = 0;
			while( 0<= (readLen = read(socketfd,httpHead+allLen,1)) ){
				httpHead[allLen+readLen] = 0;
				allLen+=readLen;
				//printf("%d\n",readLen);
				// HTTP head end withs "\r\n\r\n"
				if(strstr(httpHead,"\r\n\r\n")!=NULL)
					break;
			}
			printf("recv:httpHead:%s",httpHead);

			int httpContentLen = getHttpContentLength(httpHead);
			httpData=malloc(httpContentLen+2);
			*outlen=httpContentLen;

			allLen=0;
			readLen=0;
			while( 0<= (readLen = read(socketfd,httpData+allLen,1)) ){
				httpData[allLen+readLen] = 0;
				allLen+=readLen;
				// read content complite!
				if(allLen>=httpContentLen)
					break;
			}
			//printf("recv:httpData:%s",httpData);
		}
		close(socketfd);
	}

	return httpData;
}



int getHttpContentLength(const char *httpHead){
	const char* lable = "Content-Length: ";
	char* index = strstr(httpHead,lable);
	if(index==NULL)
		return 0;
	return atoi(index+strlen(lable));
}

