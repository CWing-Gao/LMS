#include"Book.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

void reset();//�����޸ĵ�¼����
void _revis();//�����޸ĺ���
void revis();//��ʼ�����ȡʧ�ܣ����´���key.txt�ļ�

char use[7];


int mygetch()
{
	char a;

	a =_getch();
	if(a<0)
		a =_getch();
	return a;
}



void User(struct Book *Book_head[],struct Book *Book_end[])//����Ա��¼����
{	
	first:char  _use[6],p=' '; int i=0,j,k;
	
//��ȡ��������
	FILE *key;
	key=fopen("d:key.txt","r");
	if(key==NULL)
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
		reset();
		exit(0);
	}
	fgets(use,7,key);
	fclose(key);
	
	
	system("cls");
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
	printf("       EST.����          ��ʼ���룺666666          Enter.ȷ��\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
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
		printf("                    ���������룺");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("��");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.����          ��ʼ���룺666666          Enter.ȷ��\n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
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







void revise()//�����޸ĵ�¼����
{
	first:char  _use[6],p; int i=0,j,k;
	FILE *key;
	key=fopen("d:key.txt","r");
	if(key==NULL)
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
	reset();
	exit(0);
	}
	fgets(use,7,key);
	fclose(key);


	system("cls");
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
	printf("       EST.����           ��ʼ���룺666666         Enter.ȷ��\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
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
		printf("        ��������������������������������������������������\n");
		printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
		printf("   ��������������������������������������������������������������\n");
		printf(" ����                                                          ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		printf("                           �����޸�                             \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                  ����������룺");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("��");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.����                                   Enter.ȷ��\n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
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




void _revis()//�������ú���

{	
  char  _use[6],p; int i=0,j,k;

		system("cls");
		printf("\n\n");
		printf("        ��������������������������������������������������\n");
		printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
		printf("   ��������������������������������������������������������������\n");
		printf(" ����                                                          ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		printf("                            �����޸�                         \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                  �����������룺������������                 \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.����                                    Enter.ȷ��\n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");



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
		printf("                    ���������룺");
		for (j = 1; j <=i; j++)
		{
			printf("* ");
		}		
		for (j = 1; j <=6-i; j++)
		{
			printf("��");
		}
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("       EST.����                                   Enter.ȷ��\n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
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
		printf("        ��������������������������������������������������\n");
		printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
		printf("   ��������������������������������������������������������������\n");
		printf(" ����                                                          ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		printf("                                                              \n ");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                            �����޸ĳɹ�                     \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                             \n");
		printf("                                                          \n");
		printf("                            �����������              \n");
		printf("   ����                                                      ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		getch();
	END:;
}



void reset()//��ʼ�����ȡʧ�ܣ����´���key.txt�ļ�
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
	