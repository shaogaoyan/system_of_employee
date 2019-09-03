#include "server.h"


int main(int argc, char *argv[])
{
	int server_sockfd,client_sockfd;
	server_sockfd = server_net();
	while(1){
		client_sockfd = server_accept(server_sockfd);
	}
	close(server_sockfd);
	close(client_sockfd);

}
