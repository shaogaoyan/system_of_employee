#include "client.h"

int main(int argc, char *argv[])
{
	USER user;
	user.type = 0;
	int client_sockfd = client_net();
	interface_show(&user);
	return 0;
}
