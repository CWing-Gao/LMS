#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"Book.h"


void A_interfack_1(struct Book *Book_head[],struct Book *Book_end[])//����Աһ�����溯��
{
first:	int  option=0;
	char key;
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                           ����Ա����                        \n ");
	printf("                                                             \n");	
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                      --->1.��Ŀ�б�                         \n");
	printf("                          2.ͼ����Ϣ¼��                     \n");
	printf("                          3.ͼ����Ϣ����                     \n");
	printf("                          4.ͼ����Ϣ�༭                     \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");


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
		option = (option + 40000) % 4;

		if (key == 27)
			goto END;
		switch (option)
		{
		case 0:	system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                           ����Ա����                        \n ");
			printf("                                                             \n");	
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                      --->1.��Ŀ�б�                         \n");
			printf("                          2.ͼ����Ϣ¼��                     \n");
			printf("                          3.ͼ����Ϣ����                     \n");
			printf("                          4.ͼ����Ϣ�༭                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;

		case 1:system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                           ����Ա����                        \n ");
			printf("                                                             \n");	
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                          1.��Ŀ�б�                         \n");
			printf("                     ---> 2.ͼ����Ϣ¼��                     \n");
			printf("                          3.ͼ����Ϣ����                     \n");
			printf("                          4.ͼ����Ϣ�༭                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		case 2:system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                           ����Ա����                        \n ");
			printf("                                                             \n");	
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                          1.��Ŀ�б�                         \n");
			printf("                          2.ͼ����Ϣ¼��                     \n");
			printf("                      --->3.ͼ����Ϣ����                     \n");
			printf("                          4.ͼ����Ϣ�༭                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                                                          \n");
			printf("       EST.����                ����ѡ��         Enter.ȷ��\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		case 3:system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                           ����Ա����                        \n ");
			printf("                                                             \n");	
			printf("                                                             \n");
			printf("                                                             \n");
			printf("                          1.��Ŀ�б�                         \n");
			printf("                          2.ͼ����Ϣ¼��                     \n");
			printf("                          3.ͼ����Ϣ����                     \n");
			printf("                      --->4.ͼ����Ϣ�༭                     \n");
			printf("                                                             \n");
			printf("                                                             \n");
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
            print_interfact(1,Book_head,Book_end);//�б��ӡ����ͼ�����ѡ�����
			goto first;
			break;

		case 1: 
			Input_interfact(Book_head,Book_end);//¼�롪��ͼ�����ѡ�����
			goto first;
			break;
		case 2: 
			Find(1,Book_head,Book_end);
			goto first;
			break;
		case 3: 
			print_interfact(1,Book_head,Book_end);//�б��ӡ����ͼ�����ѡ�����
			goto first;
			break;
		}
	END:;
}