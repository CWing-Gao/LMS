#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"Book.h"
#include<string.h>



struct Book_print{
	struct Book *address;
	int order_number;
};


void Find_print(int power,struct Book *Book_head[],struct Book *Book_end[],struct Book *Find_head,struct Book *Find_end);//�б��ӡ
//�βΣ�Ȩ�޵ȼ������������׵�ַ����������ĩ��ַ��

void Find_edit_interfact(int power ,struct Book *p,struct Book *Book_head[],struct Book *Book_end[]);//ͼ��༭ѡ�����
//�βΣ�Ȩ�ޣ��޸��鼮�ĵ�ַ���޸��鼮����������������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void Find_B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[]);//ɾ��ĳ�������Ϣ
//�βΣ��鼮����鼮�ṹ���ַ�����������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void Find_edit(char ep[],int c,struct Book *Book_head[],struct Book *Book_end[]);//�޸��鼮��Ϣ
//�βΣ��鼮ĳ����Ϣ��ַ���鼮�����׵�ַ�����ַ���鼮����ĩ��ַ�����ַ��






void Find(int power,struct Book *Book_head[],struct Book *Book_end[])//��Ѱ�����鼮��Ϣ�ҵ�ƥ����Ϣ�������з����鼮���Ƶ��½�������
//�βΣ�Ȩ�޵ȼ������������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{
	char ch[100];
	int i;
	struct Book *Find_head,*Find_end,*p1,*p2;






			system("cls");
			printf("\n\n");
			printf("        ��������������������������������������������������\n");
			printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
			printf("   ��������������������������������������������������������������\n");
			printf(" ����                         �س�.ȷ��                        ����\n");
			printf(" ������������������������������������������������������������������\n");
			printf("   ����                                                      ����  \n");
			printf("                            ͼ�����                          \n ");
			printf("                                                                   \n ");
			printf("                                                                   \n ");
			printf("                                                                   \n ");
			printf("                                                                   \n ");
			printf("          ������������������Ϣ��");
			scanf("%s",ch);
			
			Find_head=(struct Book *)malloc(sizeof(struct Book));
			p2=Find_head;
			Find_end=p2;
			p2->up=NULL;
			p2->next=NULL;
			p2->data[0]='0';
			p2->ISBN[0]='0';
			p2->name[0]='0';
			p2->press[0]='0';
			p2->price[0]='0';
			p2->writer[0]='0';
			p2->category=0; 

			for(i=0;i<5;i++)
			{
				p1=Book_head[i]->next;
				while(p1->name[i]!='1')
				{
					if(!strcmp(ch,p1->name)||!strcmp(ch,p1->writer))
					{						
						p2=(struct Book *)malloc(sizeof(struct Book));
						Find_end->next=p2;
						strcpy(p2->c_number,p1->c_number);
						p2->category=p1->category;
						strcpy(p2->data,p1->data);
						strcpy(p2->ISBN,p1->ISBN);
						strcpy(p2->name,p1->name);
						strcpy(p2->press,p1->press);
						strcpy(p2->price,p1->price);
						strcpy(p2->writer,p1->writer);
						p2->up=Find_end;
						Find_end=p2;
						p2->next=NULL;
					}
					if(p1->next==NULL)
						break;

					p1=p1->next;
					
				}

			}
			p2=(struct Book *)malloc(sizeof(struct Book));
			Find_end->next=p2;
			p2->up=Find_end;
			Find_end=p2;
			p2->next=NULL;
			p2->data[0]='1';
			p2->ISBN[0]='1';
			p2->name[0]='1';
			p2->press[0]='1';
			p2->price[0]='1';
			p2->writer[0]='1';
			p2->category=1; 


			Find_print(power,Book_head,Book_end,Find_head,Find_end);





}

void Find_print(int power,struct Book *Book_head[],struct Book *Book_end[],struct Book *Find_head,struct Book *Find_end)//�б��ӡ
//�βΣ�Ȩ�޵ȼ������������׵�ַ����������ĩ��ַ��

{
	struct Book_print B_print[10];
	char option = 0;
	int state1 = 0, state2 = 0,flag=0;
	struct Book *p;
	int n=0,i;


	while (1)
	{
			p = Find_head->next;
		for (int k = 0; k<state1 + 1; k++)//������ݵĳ�ʼ�������������ݷ������10��Ԫ�صĽṹ��������
		{	
			
			for (n = 0; n<10; n++)
			{
				if(p==NULL)
					goto o;
				B_print[n].address = p;
				B_print[n].order_number = n;
				if (p->name[0] == '1')
				{
					flag=1;
					state1--;
					goto o;
				}
				if(p->next==NULL)
					goto o;
				flag=0;
				p = p->next;					
			}
		}
o:
		system("cls");
		printf("\n\n");
		printf("        ��������������������������������������������������\n");
		printf("           ��������������ͼ����Ϣ����ϵͳ��������������\n");
		printf("   ��������������������������������������������������������������\n");
		printf(" ����                                                          ����\n");
		printf(" ������������������������������������������������������������������\n");
		printf("   ����                                                      ����  \n");
		if(p!=NULL)
		{
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
edit:  Find_edit_interfact(power,B_print[state2].address,Book_head,Book_end);
		
END:;
}



void Find_edit_interfact(int power ,struct Book *p,struct Book *Book_head[],struct Book *Book_end[])//ͼ��༭ѡ�����
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
				Find_B_delete(p->category,p,Book_head,Book_end);
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
			Find_edit(p->name,p->category,Book_head,Book_end);
			goto first;
			break;
		case 1:
			Find_edit(p->ISBN,p->category,Book_head,Book_end);
			goto first;
			break;
		case 2:
			Find_edit(p->writer,p->category,Book_head,Book_end);
			goto first;
			break;
		case 3:
			Find_edit(p->c_number,p->category,Book_head,Book_end);
			goto first;
			break;
		case 4:
			Find_edit(p->press,p->category,Book_head,Book_end);
			goto first;
			break;
		case 5:
			Find_edit(p->data,p->category,Book_head,Book_end);
			goto first;
			break;
		case 6:
			Find_edit(p->price,p->category,Book_head,Book_end);
			goto first;
			break;
		}
}
END:;
}





void Find_edit(char ep[],int c,struct Book *Book_head[],struct Book *Book_end[])//�޸��鼮��Ϣ���鼮ĳ����Ϣ��ַ���鼮�����׵�ַ�����ַ���鼮����ĩ��ַ�����ַ��
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






void Find_B_delete(int c,struct Book *ep,struct Book *Book_head[],struct Book *Book_end[])//ɾ��ĳ�������Ϣ
//�βΣ��鼮����鼮�ṹ���ַ�����������׵�ַ�����ַ����������ĩ��ַ�����ַ��
{
	ep->up->next=ep->next;
	ep->next->up=ep->up;
	free(ep);

	write(c,Book_head,Book_end);

}