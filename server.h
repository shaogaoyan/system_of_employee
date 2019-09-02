#ifndef  _SERVER_H_
#define  _SERVER_H_



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>


#define WELCOME "---------欢迎进入员工信息系统---------"
#define N 20    // 用来定义数组下标


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

int server_net();      // 配置服务器的网络


void sever_listen(int sfd); //启动服务器开启并发模式
