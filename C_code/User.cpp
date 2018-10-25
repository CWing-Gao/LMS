#include"Book.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void reset();//密码修改登录函数
void _revis();//密码修改函数
void revis();//初始密码获取失败，重新创建key.txt文件

char use[7];


int mygetch()
{
	char a;

	a =_getch();
	if(a<0)
		a =_getch();
	return a;
}



void User(struct Book *Book_head[],struct Book *Book_end[])//管理员登录函数
{	
	first:char  _use[6],p=' '; int i=0,j,k;
	
//读取密码数据
	FILE *key;
	key=fopen("d:key.txt","r");
	if(key==NULL)
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
		reset();
		exit(0);
	}
	fgets(use,7,key);
	fclose(key);
	
	
	system("cls");
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
	printf("       EST.返回          初始密码：666666          Enter.确认\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	reset();
	



	while (p!=13||i<5)
	{
		p=getch();	
		if(p==-32)
		{
			p=getch();
			
		}
		else
		{
			if(isalpha(p)||isdigit(p))
			{
				_use[i] = p;
				if(i!=6)
					i++;
			}

			else
			{
				switch (p)
				{
				case 27:
					goto END;
					break;
				case 8:	
					if (i == 0)
					{
						i = 0;
					}
					else 
						i = i - 1;
					break;		
				}
			}
		}
		system("cls");
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
		printf("                    请输入密码：");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("—");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.返回          初始密码：666666          Enter.确认\n");
		printf("   ┏┓                                                      ┏┓\n");
		printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
	}
	for (k = 0; k < 6; k++)
	{
		if (_use[k] != use[k])
			goto first;
	}
	if (k == 6)
	{
		A_interfack_1(Book_head,Book_end);
		goto END;
	}
	END:;
}







void revise()//密码修改登录界面
{
	first:char  _use[6],p; int i=0,j,k;
	FILE *key;
	key=fopen("d:key.txt","r");
	if(key==NULL)
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
	reset();
	exit(0);
	}
	fgets(use,7,key);
	fclose(key);


	system("cls");
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
	printf("       EST.返回           初始密码：666666         Enter.确认\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	reset();
	



	while (p!=13||i<5)
	{
		p=getch();	
		if(p==-32)
		{
			p=getch();
			
		}
		else
		{
			if(isalpha(p)||isdigit(p))
			{
				_use[i] = p;
				if(i!=6)
					i++;
			}

			else
			{
				switch (p)
				{
				case 27:
					goto END;
					break;
				case 8:	
					if (i == 0)
					{
						i = 0;
					}
					else 
						i = i - 1;
					break;		
				}
			}
		}
		system("cls");
		printf("\n\n");
		printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
		printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
		printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf(" ┏┛                                                          ┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
		printf("                           密码修改                             \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                  请输入旧密码：");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("—");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.返回                                   Enter.确认\n");
		printf("   ┏┓                                                      ┏┓\n");
		printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
	}

	for (k = 0; k < 6; k++)
	{
		if (_use[k] != use[k])
			goto first;
	}
		
	if (k == 6)
	{
		_revis();
		goto END;
	}
	END:;
}




void _revis()//密码重置函数

{	
  char  _use[6],p; int i=0,j,k;

		system("cls");
		printf("\n\n");
		printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
		printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
		printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf(" ┏┛                                                          ┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
		printf("                            密码修改                         \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                  请输入新密码：——————                 \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.返回                                    Enter.确认\n");
		printf("   ┏┓                                                      ┏┓\n");
		printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");



	while (p!=13||i<5)
	{
		p=getch();	
		if(p==-32)
		{
			p=getch();
			
		}
		else
		{
			if(isalpha(p)||isdigit(p))
			{
				_use[i] = p;
				if(i!=6)
					i++;
			}

			else
			{
				switch (p)
				{
				case 27:
					goto END;
					break;
				case 8:	
					if (i == 0)
					{
						i = 0;
					}
					else 
						i = i - 1;
					break;		
				}
			}
		}
		system("cls");
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
		printf("                    请输入密码：");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("—");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.返回                                   Enter.确认\n");
		printf("   ┏┓                                                      ┏┓\n");
		printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
	}

	FILE *Key;
			Key=fopen("d:Key.txt","w");	
			if(Key==NULL)
			{
				printf("Write failed!");
				exit(0);
			}
		for (k = 0; k < 6; k++)
		{
			use[k]=_use[k];
			fprintf(Key,"%c",use[k]);
		}
		fclose(Key);
			goto OK;
	
OK:
		system("cls");
		printf("\n\n");
		printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
		printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
		printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
		printf(" ┏┛                                                          ┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
		printf("                                                              \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                            密码修改成功                     \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("                            按任意键返回              \n");
		printf("   ┏┓                                                      ┏┓\n");
		printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
		printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
		printf("   ┗┛                                                      ┗┛  \n");
		getch();
	END:;
}



void reset()//初始密码获取失败，重新创建key.txt文件
{
	FILE *fp;
	fp=fopen("d:key.txt","w");
	if(fp==NULL)
	{
		printf("Create failed!");
		getch();
		exit(0);
	}
	fprintf(fp,"666666");
	fclose(fp);
}
	