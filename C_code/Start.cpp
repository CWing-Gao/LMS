#include"Book.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



struct Book *Book_head[5];
struct Book *Book_end[5];





void main()
{
	first:char control;
	int state = 1;


	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                                                                   \n ");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                          --->1.普通用户                     \n");
	printf("                                                             \n");
	printf("                              2.管理员                       \n");
	printf("                                                             \n");
	printf("                              3.密码修改                     \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("       EST.返回                ↑↓选择         Enter.确认\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
	
	while (1)
	{
		control = _getch();
		if (control==-32)
			control = _getch();
		switch (control)
		{
		case 27:
				exit(0);
		case 72:
		{
				   state--;
				   switch ((state + 9999) % 3)
				   {
				   case 1:{
						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                          --->1.普通用户                     \n");
						printf("                                                             \n");
						printf("                              2.管理员                       \n");
						printf("                                                             \n");
						printf("                              3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
							  break;
				}
				   case 2:{
						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.普通用户                     \n");
						printf("                                                             \n");
						printf("                          --->2.管理员                       \n");
						printf("                                                             \n");
						printf("                              3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
							  break;
				   }
				   case 0:{

						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.普通用户                     \n");
						printf("                                                             \n");
						printf("                              2.管理员                       \n");
						printf("                                                             \n");
						printf("                          --->3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
							  break;
				   }
		
				   }			   break;

		}
		case 80:
		{

				   state++;
					switch ((state + 9999) % 3)
					{
					case 1:{
						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                          --->1.普通用户                     \n");
						printf("                                                             \n");
						printf("                              2.管理员                       \n");
						printf("                                                             \n");
						printf("                              3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
							  break;
				}
				   case 2:{
						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.普通用户                     \n");
						printf("                                                             \n");
						printf("                          --->2.管理员                       \n");
						printf("                                                             \n");
						printf("                              3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
							  break;
				   }
				   case 0:{

						system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.普通用户                     \n");
						printf("                                                             \n");
						printf("                              2.管理员                       \n");
						printf("                                                             \n");
						printf("                          --->3.密码修改                     \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回                ↑↓选择         Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("PS:若是第一次运行程序请请先运行data.exe帮您按照*.txt数据包,否则程序将运行出错!\n");
					}
					
					}	break;

		}
		case 13:{
					switch ((state + 9999) % 3)
					{
					case 1: 
						Initialize();//数据初始化，从文件种调取数据
						B_interfack_1(Book_head,Book_end); //调用普通用户界面函数
						goto first;
						break;

					case 2: system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                            管理员登录                             \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                    请输入密码：——————                 \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回          初始密码：666666        Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						Initialize();//初始化数据，从文件中调取数据
						User(Book_head,Book_end);//调用密码确认函数
						system("cls");
						goto first;
						break;
					case 0: system("cls");
						printf("\n\n");
						printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
						printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
						printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
						printf(" ┏┛                                                          ┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						printf("                            管理员登录                             \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                    请输入密码：——————                 \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.返回            初始密码：666666        Enter.确认\n");
						printf("   ┏┓                                                      ┏┓\n");
						printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
						printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
						printf("   ┗┛                                                      ┗┛  \n");
						revise();//调用密码修改函数
						goto first;
						break;
					}
		}

		}

	}

}







void Initialize()//数据初始化函数，从硬盘中将数据调入内存
{
	struct Book *p;
	int n;


	for (int i = 0; i<5; i++)
	{
		Book_head[i] = (struct Book *)malloc(sizeof(struct Book));
		Book_head[i]->up = NULL;
		Book_head[i]->next = NULL;
		Book_end[i] = Book_head[i];
	}
	FILE *fp = NULL;



	for (n = 0; n<5; n++)
	{
		switch (n)
		{
		case 0: fp = fopen("d:0.txt", "r");break;
		case 1: fp = fopen("d:1.txt", "r"); break;
		case 2: fp = fopen("d:2.txt", "r"); break;
		case 3: fp = fopen("d:3.txt", "r"); break;
		case 4: fp = fopen("d:4.txt", "r"); break;
		}

			if(fp==NULL)
			{
				system("cls");
				
				printf("\n\n");
				printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
				printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
				printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
				printf(" ┏┛                                                          ┗┓\n");
				printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
				printf("   ┗┛                                                      ┗┛  \n");
				printf("                                                                   \n ");
				printf("                             出错了！                 \n");
				printf("                                                             \n");
				printf("           读取失败,请先运行data.exe，帮您安装所需*.txt文件   \n");
				printf("                                                             \n");
				printf("           或者手动将key.txt、0.tx、1.txt、2.txt、3.txt、	 \n");
				printf("                                                             \n");
				printf("        4.txt直接解压在d:                                    \n");
				printf("                                                             \n");
				printf("                                                             \n");
				printf("                       给您带来的不便请谅解                   \n");
				printf("                                                             \n");
				printf("                                                          \n");
				printf("                         任意键退出程序      \n");
				printf("   ┏┓                                                      ┏┓\n");
				printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
				printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
				printf("   ┗┛                                                      ┗┛  \n");
				getch();
				exit(0);
	
			}

		fscanf(fp, "%s", &Book_end[n]->name);
		fscanf(fp, "%d", &(Book_end[n]->category));
		fscanf(fp, "%s", &Book_end[n]->ISBN);
		fscanf(fp, "%s", &Book_end[n]->writer);
		fscanf(fp, "%s", &Book_end[n]->c_number);
		fscanf(fp, "%s", &Book_end[n]->press);
		fscanf(fp, "%s", &Book_end[n]->data);
		fscanf(fp, "%s", &Book_end[n]->price);

		while (Book_end[n]->name[0] != '1')
		{
			p = (struct Book *)malloc(sizeof(struct Book));
			Book_end[n]->next = p;
			p->up = Book_end[n];
			p->next = NULL;
			Book_end[n] = p;
			fscanf(fp, "%s", &Book_end[n]->name);
			fscanf(fp, "%d", &(Book_end[n]->category));
			fscanf(fp, "%s", &Book_end[n]->ISBN);
			fscanf(fp, "%s", &Book_end[n]->writer);
			fscanf(fp, "%s", &Book_end[n]->c_number);
			fscanf(fp, "%s", &Book_end[n]->press);
			fscanf(fp, "%s", &Book_end[n]->data);
			fscanf(fp, "%s", &Book_end[n]->price);
		}
		fclose(fp);
	}
}
