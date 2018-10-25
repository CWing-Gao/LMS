#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"


struct Book * Input(struct Book *Book_end);



void Input_interfact(struct Book *Book_head[],struct Book *Book_end[])//书籍类别选择界面
{		
	int  option = 0;
	char key;
	FILE *fp = NULL;
	struct Book *p;
	
	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                      --->1.自然科学                        \n");
	printf("                          2.社会科学                        \n");
	printf("                          3.综合性图书                      \n");
	printf("                          4.哲学                            \n");
	printf("                          5.其他                            \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("       EST.返回                ↑↓选择         Enter.确认\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");


	key = -32;
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
		option = (option + 40000) % 5;

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
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                      --->1.自然科学                        \n");
			printf("                          2.社会科学                        \n");
			printf("                          3.综合性图书                      \n");
			printf("                          4.哲学                            \n");
			printf("                          5.其他                            \n");
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

		case 1:
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.自然科学                        \n");
			printf("                      --->2.社会科学                        \n");
			printf("                          3.综合性图书                      \n");
			printf("                          4.哲学                            \n");
			printf("                          5.其他                            \n");
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
		case 2:
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.自然科学                        \n");
			printf("                          2.社会科学                        \n");
			printf("                      --->3.综合性图书                      \n");
			printf("                          4.哲学                            \n");
			printf("                          5.其他                            \n");
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
		case 3:
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.自然科学                        \n");
			printf("                          2.社会科学                        \n");
			printf("                          3.综合性图书                      \n");
			printf("                      --->4.哲学                            \n");
			printf("                          5.其他                            \n");
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
		case 4:
			system("cls");
			printf("\n\n");
			printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
			printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
			printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
			printf(" ┏┛                                                          ┗┓\n");
			printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
			printf("   ┗┛                                                      ┗┛  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.自然科学                        \n");
			printf("                          2.社会科学                        \n");
			printf("                          3.综合性图书                      \n");
			printf("                          4.哲学                            \n");
			printf("                      --->5.其他                            \n");
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

	switch (option)//插入书籍数据，修改结束地址，将新信息传至文件
	{
	case 0:
		Book_end[0] = Input(Book_end[0]);

		fp = fopen("d:0.txt", "w");
		fprintf(fp, "0 0 0 0 0 0 0 0\n");//链表开始标志
		p = Book_head[0]->next;
		do//数据写入
		{

			fprintf(fp, "%s ", p->name);
			fprintf(fp, "%d ", 0);
			fprintf(fp, "%s ", p->ISBN);
			fprintf(fp, "%s ", p->writer);
			fprintf(fp, "%s ", p->c_number);
			fprintf(fp, "%s ", p->press);
			fprintf(fp, "%s ", p->data);
			fprintf(fp, "%s\n", p->price);
			p = p->next;
		} while (p!= NULL);
		fprintf(fp, "1 1 1 1 1 1 1 1");//链表结束标志
		fclose(fp);
		break;
	case 1:
		Book_end[1] = Input(Book_end[1]);

		fp = fopen("d:1.txt", "w");
		fprintf(fp, "0 1 0 0 0 0 0 0\n");//链表开始标志
		p = Book_head[1]->next;
		do//数据写入
		{

			fprintf(fp, "%s ", p->name);
			fprintf(fp, "%d ", 0);
			fprintf(fp, "%s ", p->ISBN);
			fprintf(fp, "%s ", p->writer);
			fprintf(fp, "%s ", p->c_number);
			fprintf(fp, "%s ", p->press);
			fprintf(fp, "%s ", p->data);
			fprintf(fp, "%s\n", p->price);
			p = p->next;
		} while (p != NULL);
		fprintf(fp, "1 1 1 1 1 1 1 1");//链表结束标志
		fclose(fp);
		break;
	case 2:
		Book_end[2] = Input(Book_end[2]);

		fp = fopen("d:2.txt", "w");
		fprintf(fp, "0 2 0 0 0 0 0 0\n");//链表开始标志
		p = Book_head[2]->next;
		do//数据写入
		{

			fprintf(fp, "%s ", p->name);
			fprintf(fp, "%d ", 0);
			fprintf(fp, "%s ", p->ISBN);
			fprintf(fp, "%s ", p->writer);
			fprintf(fp, "%s ", p->c_number);
			fprintf(fp, "%s ", p->press);
			fprintf(fp, "%s ", p->data);
			fprintf(fp, "%s\n", p->price);
			p = p->next;
		} while (p != NULL);
		fprintf(fp, "1 1 1 1 1 1 1 1");//链表结束标志
		fclose(fp);
		break;
	case 3:
		Book_end[3] = Input(Book_end[3]);

		fp = fopen("d:3.txt", "w");
		fprintf(fp, "0 0 0 0 0 0 0 0\n");//链表开始标志
		p = Book_head[3]->next;
		do//数据写入
		{

			fprintf(fp, "%s ", p->name);
			fprintf(fp, "%d ", 0);
			fprintf(fp, "%s ", p->ISBN);
			fprintf(fp, "%s ", p->writer);
			fprintf(fp, "%s ", p->c_number);
			fprintf(fp, "%s ", p->press);
			fprintf(fp, "%s ", p->data);
			fprintf(fp, "%s\n", p->price);
			p = p->next;
		} while (p != NULL);
		fprintf(fp, "1 1 1 1 1 1 1 1");//链表结束标志
		fclose(fp);
		break;
	case 4:
		Book_end[4] = Input(Book_end[4]);

		fp = fopen("d:4.txt", "w");
		fprintf(fp, "0 4 0 0 0 0 0 0\n");//链表开始标志
		p = Book_head[4]->next;
		do//数据写入
		{

			fprintf(fp, "%s ", p->name);
			fprintf(fp, "%d ", 0);
			fprintf(fp, "%s ", p->ISBN);
			fprintf(fp, "%s ", p->writer);
			fprintf(fp, "%s ", p->c_number);
			fprintf(fp, "%s ", p->press);
			fprintf(fp, "%s ", p->data);
			fprintf(fp, "%s\n", p->price);
			p = p->next;
		} while (p != NULL);
		fprintf(fp, "1 1 1 1 1 1 1 1");//链表结束标志
		fclose(fp);
		break;
	}
	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                            录入成功                        \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("                           任意键返回\n");
	printf("   ┏┓                                                      ┏┓\n");
	printf(" ┏┛┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	getch();
END:;
}











struct Book * Input(struct Book *Book_end)//书籍信息录入，形参表示所属书籍类别的链表末地址
{




	struct Book *b;
	b = (struct Book *)malloc(sizeof(struct Book));
	system("cls");
	printf("\n\n");
	printf("        【━━━━━━━━━━━━━━━━━━━━━━━】\n");
	printf("           ┃┉┉┉┉┉┉图书信息管理系统┉┉┉┉┉┉┃\n");
	printf("   ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n");
	printf(" ┏┛                                                          ┗┓\n");
	printf(" ┗┓┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓┏┛\n");
	printf("   ┗┛                                                      ┗┛  \n");
	printf("                             图书录入                          \n ");
	printf("                                                                   \n ");
	printf("\n             书名：");
	scanf("%s", b->name);
	printf("\n           登录号：");
	scanf("%s", b->ISBN);
	printf("\n             作者：");
	scanf("%s", b->writer);
	printf("\n           分类号：");
	scanf("%s", b->c_number);
	printf("\n         出版单位：");
	scanf("%s", b->press);
	printf("\n         出版日期：");
	scanf("%s", b->data);
	printf("\n             价格：");
	scanf("%s", b->price);

	b->next = NULL;
	Book_end->up->next = b;
	b->up = Book_end->up;
	return b;//传回新的链表结束地址

}