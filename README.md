# system_of_employee
员工信息管理系统

使用的通信协议结构体！！！！

客户端与服务端必须保持一致！！！

typedef struct 
{
int  type； //权限标志位
	char  name[N];  // 姓名
	char  password[N]; // 密码
}USER；

typedef struct 
{
	char name[N];	//姓名
char addr[N]; // 地址
	char age; // 年龄
	int level; // 等级
	int no; //编号
	char phone[64]; // 电话
	double salary ; // 工资
}INFO;

