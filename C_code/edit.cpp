#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"


void edit(char p[],int c,struct Book *Book_head[],struct Book *Book_end[]);//修改函数
//形参（书籍某项信息的地址，书籍类别，数据链表首地址数组地址，数据链表末地址数组地址）

void B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[]);//删除某本书的信息
//形参（书籍类别，书籍结构体地址，数据链表首地址数组地址，数据链表末地址数组地址）






void edit_interfact(int power ,struct Book *p,int c,struct Book *Book_head[],struct Book *Book_end[])//图书编辑选择界面
//形参（权限，修改书籍的地址，修改书籍所属类别，数据链表首地址数组地址，数据链表末地址数组地址）
{

	first:	int  option = 0;
	char key;
	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                             图书编辑                          \n ");
	printf("                                                                   \n ");
	printf("\n                    --->书名：%s",p->name);
	printf("\n                      登录号：%s",p->ISBN);
	printf("\n                        作者：%s",p->writer);
	printf("\n                      分类号：%s",p->c_number);
	printf("\n                    出版单位：%s",p->press);
	printf("\n                    出版日期：%s",p->data);
	printf("\n                        价格：%s",p->price);
	printf("                                                                        \n\n\n");
	printf("                        双击退格键删除本书籍\n\n");
	printf("       EST.返回                ↑↓选择            回车.编辑\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");



	key = _getch();
	if (key == 27)
		goto END;
	while (key != 13)
	{
		key = _getch();
		if (key == -32)
			key = _getch();
		switch (key)
		{
		case 72: option--; break;
		case 80: option++; break;
		case 8: 
			if(power==1)
			{
				B_delete(c,p,Book_head,Book_end);
				goto END;
			}
			break;

		}
		option = (option + 70000) % 7;

		if (key == 27)
			goto END;
		switch (option)
		{
		case 0:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                    --->书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;

		case 1:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                  --->登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;
		case 2:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                    --->作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;
		case 3:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                  --->分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;
		case 4:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                --->出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;
		case 5:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                --->出版日期：%s",p->data);
			printf("\n                        价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("                                                                   \n ");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;
		case 6:	
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                             图书编辑                          \n ");
			printf("                                                                   \n ");
			printf("\n                        书名：%s",p->name);
			printf("\n                      登录号：%s",p->ISBN);
			printf("\n                        作者：%s",p->writer);
			printf("\n                      分类号：%s",p->c_number);
			printf("\n                    出版单位：%s",p->press);
			printf("\n                    出版日期：%s",p->data);
			printf("\n                    --->价格：%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        双击退格键删除本书籍\n\n");
			printf("       EST.返回                ↑↓选择            回车.编辑\n");
			printf("   ┏┓                                                      ┏┓\n");
			printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			break;

		}

	}
if(power==1)
{	
	switch (option)
		{
		case 0:
			edit(p->name,c,Book_head,Book_end);
			goto first;
			break;
		case 1:
			edit(p->ISBN,c,Book_head,Book_end);
			goto first;
			break;
		case 2:
			edit(p->writer,c,Book_head,Book_end);
			goto first;
			break;
		case 3:
			edit(p->c_number,c,Book_head,Book_end);
			goto first;
			break;
		case 4:
			edit(p->press,c,Book_head,Book_end);
			goto first;
			break;
		case 5:
			edit(p->data,c,Book_head,Book_end);
			goto first;
			break;
		case 6:
			edit(p->price,c,Book_head,Book_end);
			goto first;
			break;
		}
}
END:;
}





void edit(char ep[],int c,struct Book *Book_head[],struct Book *Book_end[])//修改书籍信息（书籍某项信息地址，书籍链表首地址数组地址，书籍链表末地址数组地址）
{
	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                             图书编辑                          \n ");
	printf("                                                                   \n ");
	printf("\n\n");
	printf("                原文：%s\n\n",ep);
	printf("              请输入：");
	scanf("%s",ep);
	

	write(c,Book_head,Book_end);

	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                             图书编辑                          \n ");
	printf("                                                                   \n ");
	printf("\n                    \n");
	printf("\n                       \n");
	printf("\n                           修改成功\n");
	printf("\n                     \n");
	printf("\n                    \n");
	printf("\n                  \n");
	printf("\n                     \n");
	printf("                                                                        \n\n\n");
	printf("       EST.返回                ↑↓选择            回车.编辑\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	getch();

}






void B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[])//删除某本书的信息
//形参（书籍类别，书籍结构体地址，数据链表首地址数组地址，数据链表末地址数组地址）
{
	ep->up->next=ep->next;
	ep->next->up=ep->up;
	free(ep);

	write(c,Book_head,Book_end);

}