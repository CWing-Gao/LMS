

//�鼮��Ϣ�ṹ��
struct Book{
	char name[100];//����
	int category;//�������
	char ISBN[20];//��¼��
	char writer[20];//����
	char c_number[20];//�����
	char press[100];//���浥λ
	char data[20];//��������
	char price[10];//�۸�
	struct Book *up;//����ָ�룬ָ����һ�ṹ��
	struct Book *next;//����ָ�룬ָ����һ�ṹ��
};





//�ⲿ��������
void User(struct Book *Book_head[],struct Book *Book_end[]);//�û���¼����������ȷ��
//�βΣ����������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void A_interfack_1(struct Book *Book_head[],struct Book *Book_end[]);//����Ա����
//�βΣ����������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void B_interfack_1(struct Book *Book_head[],struct Book *Book_end[]);//��ͨ�û�����
//�βΣ����������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void revise();//�����޸�

void Initialize();//��Ϣ���أ���ʼ�������ļ����е���Ϣ��ȡ��������

void Input_interfact(struct Book *Book_head[],struct Book *Book_end[]);//¼�����
//�βΣ����������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void write(int c,struct Book *Book_head[],struct Book *Book_end[]);//��Ϣͬ���������������鼮��Ϣͬ�����ļ�
//�βΣ��鼮����,���������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void print_interfact(int power,struct Book *Book_head[],struct Book *Book_end[]);//�鼮������ѡ��
//�βΣ�Ȩ�޵ȼ������������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void print(int power,int c,struct Book *Book_head[],struct Book *Book_end[],int j);//�鼮������ѡ�����
//�βΣ�Ȩ�޵ȼ����鼮���,���������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void edit_interfact(int power ,struct Book *p,int c,struct Book *Book_head[],struct Book *Book_end[]);//ͼ��༭ѡ�����
//�βΣ�Ȩ�޵ȼ����޸��鼮�ĵ�ַ���鼮������������׵�ַ�����ַ����������ĩ��ַ�����ַ��

void Find(int power,struct Book *Book_head[],struct Book *Book_end[]);//��Ѱ�����鼮��Ϣ�ҵ�ƥ����Ϣ�������з����鼮���Ƶ��½�������
//�βΣ�Ȩ�޵ȼ������������׵�ַ�����ַ����������ĩ��ַ�����ַ��