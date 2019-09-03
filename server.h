#ifndef  _SERVER_H_
#define  _SERVER_H_



#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>


#define WELCOME "---------欢迎进入员工信息系统---------"
#define N 20    // 用来定义数组下标
#define LNUM 20  // 同时监听个数 

int server_net();      // 配置服务器的网络至开启监听
int server_accept(int server_sockfd); //启动服务器开启并发模式


typedef struct{
	int  type;        // 权限标志位
	char name[N];     // 姓名
	char passwd[N];   // 密码
}USER;

typedef struct{
	char name[N]; 
	char addr[N];      // 存放客户IP
	int  age;          // 年龄
	int  no;           // 员工编号
	char c_phone[12];  // 手机号
	double salary;     // 薪水
}INFO;

#endif
