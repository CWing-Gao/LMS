#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"


struct Book_print{
	struct Book *address;
	int order_number;
};



void print(int power,int c,struct Book *Book_head[],struct Book *Book_end[]);//�б��ӡ
//�βΣ�Ȩ�޵ȼ���������������׵�ַ�����ַ����������ĩ��ַ�����ַ��



void print_interfact(int power,struct Book *Book_head[],struct Book *Book_end[])//�鼮������ѡ�����
//�βΣ��޸�Ȩ�޵ȼ������������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{		
first:int  option = 0;
	char key;
	FILE *fp = NULL;
	
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                            ��ѡ���鼮����                     \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                         --->1.��Ȼ��ѧ                         \n");
	printf("                             2.����ѧ                         \n");
	printf("                             3.�ۺ���ͼ��                       \n");
	printf("                             4.��ѧ                             \n");
	printf("                             5.����                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");


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
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ��ѡ���鼮����                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                         --->1.��Ȼ��ѧ                         \n");
			printf("                             2.����ѧ                         \n");
			printf("                             3.�ۺ���ͼ��                       \n");
			printf("                             4.��ѧ                             \n");
			printf("                             5.����                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");

			break;

		case 1:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ��ѡ���鼮����                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                             1.��Ȼ��ѧ                         \n");
			printf("                        ---> 2.����ѧ                         \n");
			printf("                             3.�ۺ���ͼ��                       \n");
			printf("                             4.��ѧ                             \n");
			printf("                             5.����                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");

			break;
		case 2:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ��ѡ���鼮����                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                             1.��Ȼ��ѧ                         \n");
			printf("                             2.����ѧ                         \n");
			printf("                         --->3.�ۺ���ͼ��                       \n");
			printf("                             4.��ѧ                             \n");
			printf("                             5.����                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");

			break;
		case 3:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ��ѡ���鼮����                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                             1.��Ȼ��ѧ                         \n");
			printf("                             2.����ѧ                         \n");
			printf("                             3.�ۺ���ͼ��                       \n");
			printf("                         --->4.��ѧ                             \n");
			printf("                             5.����                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		case 4:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ��ѡ���鼮����                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                             1.��Ȼ��ѧ                         \n");
			printf("                             2.����ѧ                         \n");
			printf("                             3.�ۺ���ͼ��                       \n");
			printf("                             4.��ѧ                             \n");
			printf("                         --->5.����                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		}
	}

	switch (option)
	{
	case 0:
		print(power,0,Book_head,Book_end);\
		goto first;
		break;
	case 1:
		print(power,1,Book_head,Book_end);
		goto first;
		break;
	case 2:
		print(power,2,Book_head,Book_end);
		goto first;
		break;
	case 3:
		print(power,3,Book_head,Book_end);
		goto first;
		break;
	case 4:
		print(power,4,Book_head,Book_end);
		goto first;
		break;
	}

END:;
}













void print(int power,int c,struct Book *Book_head[],struct Book *Book_end[])//�б��ӡ
//�βΣ�Ȩ�޵ȼ���������������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{
first:	struct Book_print B_print[10];
	char option = 0;
	int state1 = 0, state2 = 0,flag=0;
	struct Book *p;
	int n=0,i;


	while (1)
	{
			p = Book_head[c]->next;
		for (int k = 0; k<state1 + 1; k++)//������ݵĳ�ʼ�������������ݷ������10��Ԫ�صĽṹ��������
		{	
			
			for (n = 0; n<10; n++)
			{
				if(p==NULL)
					goto o;
				B_print[n].address = p;
				B_print[n].order_number = n;
				if (p->name[0] == '1'&&flag==1)
				{
					flag=1;
					state1--;
					goto o;
				}
				flag=0;
				p = p->next;					
			}
		}
o:;
		system("cls");
		printf("\n\n");
		printf("        ��������������������������������������������������\n");
		printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
		printf("   ��������������������������������������������������������������\n");
		printf(" ����                                                          ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		for ( i = 0; i<10; i++)
		{	
			if (B_print[i].address->next == NULL)
				break;
			if (B_print[i].address->next->name[1] == '1')
				break;
			{if (i == state2)
				printf("              --->%d.%s \n", B_print[i].order_number+1, B_print[i].address->name);
			else
				printf("                  %d.%s \n", B_print[i].order_number+1, B_print[i].address->name);
			}
		}
		if(flag==1)
		printf("\n                              ��%dҳ                          \n",state1+2);
		else
		printf("\n                              ��%dҳ                          \n",state1+1);
		printf("                                                                        \n");
		printf("       EST.����                ����ѡ��             ������ҳ\n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");



		option = _getch();
		if (option == -32)
			option = _getch();
		while (option != 72 && option != 80&& option != 77 && option != 75&&option!=27&&option!=13)
		{
			option = _getch();
			if (option == -32)
				option = _getch();
		}

		switch (option)
		{
		case 72:
			state2--;
			break;
		case 80:
			state2++;
			break;
		case 75:
			state1--;
			break;
		case 77:
			state1++;
			break;
		case 27:
			goto END;
		case 13:
			goto edit;

		}
		if(state2!=0)
			state2 = (state2 + i*10000) % i;
		if(state1<0)
			state1=0;
	}
edit: edit_interfact(power,B_print[state2].address,c,Book_head,Book_end);
	  goto first;
		
END:;
}




