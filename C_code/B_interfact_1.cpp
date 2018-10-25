#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"Book.h"




void B_interfack_1(struct Book *Book_head[],struct Book *Book_end[])//普通用户一级界面函数
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
	printf("                           普通用户界面                        \n ");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                      --->1.书目列表                         \n");	
	printf("                                                             \n");
	printf("                          2.图书信息检索                     \n");
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

		}
		option = (option + 40000) % 2;

		if (key == 27)
			goto END;
		switch (option)
		{
		case 0:	system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                           普通用户界面                        \n ");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                      --->1.书目列表                         \n");	
			printf("                                                             \n");
			printf("                          2.图书信息检索                     \n");
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
			break;

		case 1:	system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                           普通用户界面                        \n ");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                          1.书目列表                         \n");	
			printf("                                                             \n");
			printf("                     ---> 2.图书信息检索                     \n");
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
			break;
		}



	}		
	switch (option)
		{
		case 0:
			print_interfact(0,Book_head,Book_end);//列表打印——图书类别选择界面
			goto first;
			break;
		case 1:
			Find(0,Book_head,Book_end);
			goto first;
			break;

		}

END:;
}
