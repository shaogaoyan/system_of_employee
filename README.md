# system_of_employee
员工信息管理系统

使用的通信协议结构体！！！！

客户端与服务端必须保持一致！！！

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

