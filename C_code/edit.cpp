#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"


void edit(char p[],int c,struct Book *Book_head[],struct Book *Book_end[]);//�޸ĺ���
//�βΣ��鼮ĳ����Ϣ�ĵ�ַ���鼮������������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[]);//ɾ��ĳ�������Ϣ
//�βΣ��鼮����鼮�ṹ���ַ�����������׵�ַ�����ַ����������ĩ��ַ�����ַ��






void edit_interfact(int power ,struct Book *p,int c,struct Book *Book_head[],struct Book *Book_end[])//ͼ��༭ѡ�����
//�βΣ�Ȩ�ޣ��޸��鼮�ĵ�ַ���޸��鼮����������������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{

	first:	int  option = 0;
	char key;
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                             ͼ��༭                          \n ");
	printf("                                                                   \n ");
	printf("\n                    --->������%s",p->name);
	printf("\n                      ��¼�ţ�%s",p->ISBN);
	printf("\n                        ���ߣ�%s",p->writer);
	printf("\n                      ����ţ�%s",p->c_number);
	printf("\n                    ���浥λ��%s",p->press);
	printf("\n                    �������ڣ�%s",p->data);
	printf("\n                        �۸�%s",p->price);
	printf("                                                                        \n\n\n");
	printf("                        ˫���˸��ɾ�����鼮\n\n");
	printf("       EST.����                ����ѡ��            �س�.�༭\n");
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
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                    --->������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
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
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                  --->��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
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
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                    --->���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
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
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                  --->����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
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
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                --->���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		case 5:	
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                --->�������ڣ�%s",p->data);
			printf("\n                        �۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("                                                                   \n ");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			break;
		case 6:	
			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                                                          ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                             ͼ��༭                          \n ");
			printf("                                                                   \n ");
			printf("\n                        ������%s",p->name);
			printf("\n                      ��¼�ţ�%s",p->ISBN);
			printf("\n                        ���ߣ�%s",p->writer);
			printf("\n                      ����ţ�%s",p->c_number);
			printf("\n                    ���浥λ��%s",p->press);
			printf("\n                    �������ڣ�%s",p->data);
			printf("\n                    --->�۸�%s",p->price);
			printf("                                                                        \n\n\n");
			printf("                        ˫���˸��ɾ�����鼮\n\n");
			printf("       EST.����                ����ѡ��            �س�.�༭\n");
			printf("   ����                                                      ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
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





void edit(char ep[],int c,struct Book *Book_head[],struct Book *Book_end[])//�޸��鼮��Ϣ���鼮ĳ����Ϣ��ַ���鼮�����׵�ַ�����ַ���鼮����ĩ��ַ�����ַ��
{
	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                             ͼ��༭                          \n ");
	printf("                                                                   \n ");
	printf("\n\n");
	printf("                ԭ�ģ�%s\n\n",ep);
	printf("              �����룺");
	scanf("%s",ep);
	

	write(c,Book_head,Book_end);

	system("cls");
	printf("\n\n");
	printf("        ��������������������������������������������������\n");
	printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
	printf("   ��������������������������������������������������������������\n");
	printf(" ����                                                          ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf("   ����                                                      ����  \n");
	printf("                             ͼ��༭                          \n ");
	printf("                                                                   \n ");
	printf("\n                    \n");
	printf("\n                       \n");
	printf("\n                           �޸ĳɹ�\n");
	printf("\n                     \n");
	printf("\n                    \n");
	printf("\n                  \n");
	printf("\n                     \n");
	printf("                                                                        \n\n\n");
	printf("       EST.����                ����ѡ��            �س�.�༭\n");
	printf("   ����                                                      ����\n");
	printf(" ������������������������������������������������������������������\n");
	printf(" ������������������������������������������������������������������\n");
	getch();

}






void B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[])//ɾ��ĳ�������Ϣ
//�βΣ��鼮����鼮�ṹ���ַ�����������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{
	ep->up->next=ep->next;
	ep->next->up=ep->up;
	free(ep);

	write(c,Book_head,Book_end);

}