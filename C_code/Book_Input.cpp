#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"


struct Book * Input(struct Book *Book_end);



void Input_interfact(struct Book *Book_head[],struct Book *Book_end[])//�鼮���ѡ�����
{		
	int  option = 0;
	char key;
	FILE *fp = NULL;
	struct Book *p;
	
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                      --->1.��Ȼ��ѧ                        \n");
	printf("                          2.����ѧ                        \n");
	printf("                          3.�ۺ���ͼ��                      \n");
	printf("                          4.��ѧ                            \n");
	printf("                          5.����                            \n");
	printf("                                                             \n");
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
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                      --->1.��Ȼ��ѧ                        \n");
			printf("                          2.����ѧ                        \n");
			printf("                          3.�ۺ���ͼ��                      \n");
			printf("                          4.��ѧ                            \n");
			printf("                          5.����                            \n");
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

		case 1:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.��Ȼ��ѧ                        \n");
			printf("                      --->2.����ѧ                        \n");
			printf("                          3.�ۺ���ͼ��                      \n");
			printf("                          4.��ѧ                            \n");
			printf("                          5.����                            \n");
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
		case 2:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.��Ȼ��ѧ                        \n");
			printf("                          2.����ѧ                        \n");
			printf("                      --->3.�ۺ���ͼ��                      \n");
			printf("                          4.��ѧ                            \n");
			printf("                          5.����                            \n");
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
		case 3:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.��Ȼ��ѧ                        \n");
			printf("                          2.����ѧ                        \n");
			printf("                          3.�ۺ���ͼ��                      \n");
			printf("                      --->4.��ѧ                            \n");
			printf("                          5.����                            \n");
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
		case 4:
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                                                            \n");
			printf("                                                            \n");
			printf("                          1.��Ȼ��ѧ                        \n");
			printf("                          2.����ѧ                        \n");
			printf("                          3.�ۺ���ͼ��                      \n");
			printf("                          4.��ѧ                            \n");
			printf("                      --->5.����                            \n");
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

	switch (option)//�����鼮���ݣ��޸Ľ�����ַ��������Ϣ�����ļ�
	{
	case 0:
		Book_end[0] = Input(Book_end[0]);

		fp = fopen("d:0.txt", "w");
		fprintf(fp, "0 0 0 0 0 0 0 0\n");//����ʼ��־
		p = Book_head[0]->next;
		do//����д��
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
		fprintf(fp, "1 1 1 1 1 1 1 1");//���������־
		fclose(fp);
		break;
	case 1:
		Book_end[1] = Input(Book_end[1]);

		fp = fopen("d:1.txt", "w");
		fprintf(fp, "0 1 0 0 0 0 0 0\n");//����ʼ��־
		p = Book_head[1]->next;
		do//����д��
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
		fprintf(fp, "1 1 1 1 1 1 1 1");//���������־
		fclose(fp);
		break;
	case 2:
		Book_end[2] = Input(Book_end[2]);

		fp = fopen("d:2.txt", "w");
		fprintf(fp, "0 2 0 0 0 0 0 0\n");//����ʼ��־
		p = Book_head[2]->next;
		do//����д��
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
		fprintf(fp, "1 1 1 1 1 1 1 1");//���������־
		fclose(fp);
		break;
	case 3:
		Book_end[3] = Input(Book_end[3]);

		fp = fopen("d:3.txt", "w");
		fprintf(fp, "0 0 0 0 0 0 0 0\n");//����ʼ��־
		p = Book_head[3]->next;
		do//����д��
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
		fprintf(fp, "1 1 1 1 1 1 1 1");//���������־
		fclose(fp);
		break;
	case 4:
		Book_end[4] = Input(Book_end[4]);

		fp = fopen("d:4.txt", "w");
		fprintf(fp, "0 4 0 0 0 0 0 0\n");//����ʼ��־
		p = Book_head[4]->next;
		do//����д��
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
		fprintf(fp, "1 1 1 1 1 1 1 1");//���������־
		fclose(fp);
		break;
	}
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                            ¼��ɹ�                        \n");
	printf("                                                            \n");
	printf("                                                            \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                             \n");
	printf("                                                          \n");
	printf("                           ���������\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	getch();
END:;
}











struct Book * Input(struct Book *Book_end)//�鼮��Ϣ¼�룬�βα�ʾ�����鼮��������ĩ��ַ
{




	struct Book *b;
	b = (struct Book *)malloc(sizeof(struct Book));
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                             ͼ��¼��                          \n ");
	printf("                                                                   \n ");
	printf("\n             ������");
	scanf("%s", b->name);
	printf("\n           ��¼�ţ�");
	scanf("%s", b->ISBN);
	printf("\n             ���ߣ�");
	scanf("%s", b->writer);
	printf("\n           ����ţ�");
	scanf("%s", b->c_number);
	printf("\n         ���浥λ��");
	scanf("%s", b->press);
	printf("\n         �������ڣ�");
	scanf("%s", b->data);
	printf("\n             �۸�");
	scanf("%s", b->price);

	b->next = NULL;
	Book_end->up->next = b;
	b->up = Book_end->up;
	return b;//�����µ����������ַ

}