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
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                                                                   \n ");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                          --->1.��ͨ�û�                     \n");
	printf("                                                             \n");
	printf("                              2.����Ա                       \n");
	printf("                                                             \n");
	printf("                              3.�����޸�                     \n");
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
	printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
	
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
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                          --->1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                              2.����Ա                       \n");
						printf("                                                             \n");
						printf("                              3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
							  break;
				}
				   case 2:{
						system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                          --->2.����Ա                       \n");
						printf("                                                             \n");
						printf("                              3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
							  break;
				   }
				   case 0:{

						system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                              2.����Ա                       \n");
						printf("                                                             \n");
						printf("                          --->3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
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
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                          --->1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                              2.����Ա                       \n");
						printf("                                                             \n");
						printf("                              3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
							  break;
				}
				   case 2:{
						system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                          --->2.����Ա                       \n");
						printf("                                                             \n");
						printf("                              3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
							  break;
				   }
				   case 0:{

						system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                                                                   \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                              1.��ͨ�û�                     \n");
						printf("                                                             \n");
						printf("                              2.����Ա                       \n");
						printf("                                                             \n");
						printf("                          --->3.�����޸�                     \n");
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
						printf("PS:���ǵ�һ�����г�������������data.exe��������*.txt���ݰ�,����������г���!\n");
					}
					
					}	break;

		}
		case 13:{
					switch ((state + 9999) % 3)
					{
					case 1: 
						Initialize();//���ݳ�ʼ�������ļ��ֵ�ȡ����
						B_interfack_1(Book_head,Book_end); //������ͨ�û����溯��
						goto first;
						break;

					case 2: system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                            ����Ա��¼                             \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                    ���������룺������������                 \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.����          ��ʼ���룺666666        Enter.ȷ��\n");
						printf("   ����                                                      ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						Initialize();//��ʼ�����ݣ����ļ��е�ȡ����
						User(Book_head,Book_end);//��������ȷ�Ϻ���
						system("cls");
						goto first;
						break;
					case 0: system("cls");
						printf("\n\n");
						printf("        ��������������������������������������������������\n");
						printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
						printf("   ��������������������������������������������������������������\n");
						printf(" ����                                                          ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						printf("                            ����Ա��¼                             \n ");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                    ���������룺������������                 \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                             \n");
						printf("                                                          \n");
						printf("       EST.����            ��ʼ���룺666666        Enter.ȷ��\n");
						printf("   ����                                                      ����\n");
						printf(" ������������������������������������������������������������������\n");
						printf(" ������������������������������������������������������������������\n");
						printf("   ����                                                      ����  \n");
						revise();//���������޸ĺ���
						goto first;
						break;
					}
		}

		}

	}

}







void Initialize()//���ݳ�ʼ����������Ӳ���н����ݵ����ڴ�
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
				printf("        ��������������������������������������������������\n");
				printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
				printf("   ��������������������������������������������������������������\n");
				printf(" ����                                                          ����\n");
				printf(" ������������������������������������������������������������������\n");
				printf("   ����                                                      ����  \n");
				printf("                                                                   \n ");
				printf("                             �����ˣ�                 \n");
				printf("                                                             \n");
				printf("           ��ȡʧ��,��������data.exe��������װ����*.txt�ļ�   \n");
				printf("                                                             \n");
				printf("           �����ֶ���key.txt��0.tx��1.txt��2.txt��3.txt��	 \n");
				printf("                                                             \n");
				printf("        4.txtֱ�ӽ�ѹ��d:                                    \n");
				printf("                                                             \n");
				printf("                                                             \n");
				printf("                       ���������Ĳ������½�                   \n");
				printf("                                                             \n");
				printf("                                                          \n");
				printf("                         ������˳�����      \n");
				printf("   ����                                                      ����\n");
				printf(" ������������������������������������������������������������������\n");
				printf(" ������������������������������������������������������������������\n");
				printf("   ����                                                      ����  \n");
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
