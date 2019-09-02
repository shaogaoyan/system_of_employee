#include "server.h"

int server_net()
{
	int port = 0;  // 服务器端口号
	// 配置服务器端口号
	while(1){
	printf("配置：请输入TCP服务器的网络端口号(1024--
		65536)：");
	scanf(&port);
	if(port >= 1024 && port <= 65536)
		break;
	printf("请重新输入端口号！");
	}


}

