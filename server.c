#include "server.h"

int server_net()
{
	int port = 0;  // 服务器端口
	int server_sockfd;
	struct sockaddr_in server_addr;

	// 配置服务器端口号
	while(1){
	printf("配置：请输入TCP服务器的网络端口号(1024--65536)：");
	scanf("%d",&port);
	if(port >= 1024 && port <= 65536)
		break;
	printf("请重新输入端口号！");
	}

	// 初始化服务器套接字文件描述符
	if((server_sockfd = socket(AF_INET,SOCK_STREAM,0)) == -1){
		perror("socket");
		exit(-1);
	}
	puts("配置：TCP服务器端套接字初始化成功！");
	
	// 初始化addr结构体
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = 0; //INADDR_ANY;
	server_addr.sin_port = htons(port);
	//bzero(&(server_addr.sin_zero), 0);
	puts("配置：TCP服务器端套接字结构体初始化成功！");

	// 绑定服务器套接字文件描述符与地址结构体
	if(bind(server_sockfd,(struct sockaddr*)&server_addr,sizeof(server_addr)) == -1){
		perror("bind");
		exit(-1);
	}
	puts("配置：TCP服务器套接字文件描述符与地址绑定成功！");

	if(listen(server_sockfd,LNUM)==-1){
		perror("listen");
		exit(-1);
	}
	puts("TCP服务器开启监听！");
	return server_sockfd;
}



int server_accept(int server_sockfd){
	printf("server_sockfd = %d\n",server_sockfd);
	struct sockaddr_in client_addr;
	INFO info;
	int client_sockfd;
	int len_sockaddr = sizeof(client_addr);
	if((client_sockfd = accept(server_sockfd,(struct sockaddr*)&client_addr,&len_sockaddr))==-1){
		perror("accept");
		exit(-1);
	}
	printf(">>>消息：TCP服务器接受来自[%s]的请求...\n",inet_ntoa(client_addr.sin_addr));
	
	memset(&info,0,sizeof(info));
	if(recv(client_sockfd,(INFO*)&info,sizeof(info),0)==-1){
		perror("recv");
		exit(-1);
	}
	else
		printf("测试成功！");

	return client_sockfd;

}
