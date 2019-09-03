#include "client.h"

int client_net(){
	int client_sockfd;
	struct sockaddr_in client_addr;
	struct sockaddr_in server_addr;
	int addr_len = sizeof(client_addr);

	// 初始化客户端TCP网络套接字
	if((client_sockfd = socket(AF_INET,SOCK_STREAM,0))==-1){
		perror("socket");
		exit(-1);
	}
	puts("配置：TCP客户端套接字申请成功！");

	// 配置服务器地址

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(HOSTPORT);
	server_addr.sin_addr.s_addr = inet_addr(HOSTIP);
	puts("配置：TCP客户端中服务器地址配置完成！");

	// 连接服务器
	if(connect(client_sockfd,(struct sockaddr*)&server_addr,addr_len)==-1){
		perror("connect");
		exit(-1);
	}
	puts("配置：与服务器连接成功！");
	return client_sockfd;

}


void interface_show(USER *user){
	char temp[20]; 
	puts("----------------------------------");
	puts("-----欢迎进入员工信息管理系统-----");
	puts("----------------------------------");
	printf("UserName：");
	scanf("%s",temp);
	strcpy(user->name,temp);
	printf("Password：");
	scanf("%s",temp);
	strcpy(user->passwd,temp);

}
