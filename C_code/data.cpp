#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"






void write(int c,struct Book *Book_head[],struct Book *Book_end[])//��Ϣͬ���������������鼮��Ϣͬ�����ļ�
//�βΣ��鼮���ͣ�,���������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{
	FILE *fp;
	struct Book *p;

		switch (c)//������Ϣ�����ļ�
	{
	case 0:
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
}