

//书籍信息结构体
struct Book{
	char name[100];//书名
	int category;//种类序号
	char ISBN[20];//登录号
	char writer[20];//作者
	char c_number[20];//分类号
	char press[100];//出版单位
	char data[20];//出版日期
	char price[10];//价格
	struct Book *up;//链表指针，指向上一结构体
	struct Book *next;//链表指针，指向下一结构体
};





//外部函数声明
void User(struct Book *Book_head[],struct Book *Book_end[]);//用户登录函数及密码确认
//形参（数据链表首地址数组地址，数据链表末地址数组地址）

void A_interfack_1(struct Book *Book_head[],struct Book *Book_end[]);//管理员界面
//形参（数据链表首地址数组地址，数据链表末地址数组地址）

void B_interfack_1(struct Book *Book_head[],struct Book *Book_end[]);//普通用户界面
//形参（数据链表首地址数组地址，数据链表末地址数组地址）

void revise();//密码修改

void Initialize();//信息加载，初始化，将文件的中的信息调取到缓存区

void Input_interfact(struct Book *Book_head[],struct Book *Book_end[]);//录入界面
//形参（数据链表首地址数组地址，数据链表末地址数组地址）

void write(int c,struct Book *Book_head[],struct Book *Book_end[]);//信息同步函数，将所有书籍信息同步至文件
//形参（书籍类型,数据链表首地址数组地址，数据链表末地址数组地址）

void print_interfact(int power,struct Book *Book_head[],struct Book *Book_end[]);//书籍输出类别选择
//形参（权限等级，数据链表首地址数组地址，数据链表末地址数组地址）

void print(int power,int c,struct Book *Book_head[],struct Book *Book_end[],int j);//书籍输出类别选择界面
//形参（权限等级，书籍类别,数据链表首地址数组地址，数据链表末地址数组地址）

void edit_interfact(int power ,struct Book *p,int c,struct Book *Book_head[],struct Book *Book_end[]);//图书编辑选择界面
//形参（权限等级，修改书籍的地址，书籍类别，数据链表首地址数组地址，数据链表末地址数组地址）

void Find(int power,struct Book *Book_head[],struct Book *Book_end[]);//搜寻所有书籍信息找到匹配信息，将所有符合书籍复制到新建链表中
//形参（权限等级，数据链表首地址数组地址，数据链表末地址数组地址）