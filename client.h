#ifndef  CLIENT_H_
#define  CLIENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

#define N 20
#define HOSTIP "192.168.1.140"
#define HOSTPORT 52739

int client_net();     //初始化客户端的网络配置

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

void interface_show(USER* user);
#endif
