#pragma once
#define NUM 9//��������
#define PNUM 10 //��ɫ����
#define MAX_NAME 20//�������ֵ
#define HAMMER_NUM 5//���ӵĲ�ͬƤ��

//����
#define GOPHER_DISTANCE 188//�����ļ��
#define GOPHER_HEIGHT 120//�������
#define GOPHER_WIDTH 110 //������

#define MAP1_MOUSE_FIRST_X 125//��һ�ŵ�һֻ����x����
#define MAP1_MOUSE_SECOND_X 321//��һ�ŵڶ�ֻ����x����
#define MAP1_MOUSE_THIRD_X 507//��һ�ŵ�ֻ����x����

#define MAP1_MOUSE_BEGIN_Y 276 //��һ�ŵ����ʼ�߶�
#define MAP1_MOUSE_MID_Y 407 //�ڶ��ŵ����ʼ�߶�
#define MAP1_MOUSE_LAST_Y 534 //�����ŵ����ʼ�߶�

//����
#define HAMMER_BEGIN_X 570//���ӳ�ʼx����
#define HAMMER_BEGIN_Y 525//���ӳ�ʼy����
#define HAMMER_HEIGHT 150//���Ӹ߶�
#define HAMMER_WIDTH 150//���ӿ��

//��ɫ ������Ϸ
#define ROLE_DISTANSE 50

//�̵����
#define hammerX1 175		//����1ͼƬx������
#define hammerX2 455	    //����2ͼƬx������
#define hammerY1 150		//����1ͼƬy������
#define hammerY2 150		//����2ͼƬy������
#define ax		 225	//ax��ʾ��������Ͻǵ�x����
#define ay		 400	//ay��ʾ�������Ϸ�y����
#define bx 		 325	//bx��ʾ��������·���x����
#define by		 450	//by��ʾ������·���y����
//#define hammerLength  105;//ÿ������ͼƬ�Ŀ��
//�û����λ��
#define mx		 250	
#define my		 35	

#define IMAGE_NUM 20//ÿ�����鱣��ͼƬ���������--�������
//����
typedef struct Gopher
{
	//��������
	int x;
	int y;
	//����ͼƬ�����Ⱥ͸߶�
	int w;
	int h;
	int isLive = 1;//�жϵ����Ƿ񱻴��ӻ��У�1��ʾû�����У�0��ʾ�����С���ʼֵΪ1
	int fx;
}Gopher;


//����
typedef struct hammer
{
	//��������
	int x;
	int y;
	//����ͼƬ�����Ⱥ͸߶�
	int w;
	int h;
	int isDown = 0;//�жϴ����Ƿ����£�1��ʾ���£�0��ʾû����.��ʼֵΪ

}hammer;
//��ɫ
typedef struct people
{
	char name[MAX_NAME];//��ɫ��
	int score;//��ɫ����÷� ÿ�ֶ�������
	int money;//��ɫ���
	int czPf[2] = {1,0};//0��ʾ�У�1��ʾû��
	int maxScore;//������ߵ÷�
	int cczpf = 0;//����ʹ�õĴ���Ƥ��
	int clife;//���˷ǽ�����Ϸ�˳�ʱ��Ѫ��
}people;

//��ɫ��Ϣ
typedef struct infoPeo
{
	people peo[PNUM];
	int numData = 0;//��ʾ��ǰ�м���������
}infoPeo;

//ը������ʱ����˵��
struct bomb
{
	//ը������
	int x;
	int y;
	//ը��ͼƬ�����Ⱥ͸߶�
	int w;
	int h;
	int isBomb = 1;//�ж�ը���Ƿ񱻴��ӻ��У�1��ʾû�����У�0��ʾ�����С���ʼֵΪ1
};
typedef	struct goods
{
	int money;
}goods;		//��Ʒ�۸�
//��������


/*
	�����ˣ�
	���ܣ����ļ��е�ÿ���˵����ݶ�����ɫ������
		FILE* pfRead = fopen("peodata.dat","rb");//��ȡ�������ļ�
		

		//��ȡ�ļ���ŵ�infoPeo��
		people tmp = { 0 };//��ʱ��������Ŷ��������
		
		//�����Ҫ���ĺܶ�ʵ����û��ô�ֻ࣬�᷵��ʵ�ʵĸ���
		//���������󣬶��������������.fread��������Ƕ�������sizeof(people)���ؼ�����ֵ��
		while (fread(&tmp, sizeof(Peoinfo), 1, pfRead))
		{
			int i = 0;
			peoList->peo[i] = tmp;
			i++;
		}
		
		//�ر���
		fclose(pfRead);
		pfRead = NULL;

	������infoPeo* peoList
	����ֵ����
*/
void readData(infoPeo* peoList);
/*
	�����ˣ�
	���ܣ���ÿ���˵�����д�뵽�ļ���
		 FILE* pfWrite = fopen("peodata.dat","wb");//�Զ����Ʒ�ʽд���ļ���
		if (pfWrite == NULL)
		{
			return;
		}
		//��ͨѶ¼�е�����д���ļ���ȥ ,һ����һ����д�루���װ棩
		for (int i = 0; i < pc->size; i++)
		{
			fwrite(&(peoList->peo[i]),sizeof(People),1,pfWrite);//������д��д�Ķ������д������д���������˵ͨ��ʲôд��
		}

		//�ر���
		fclose(pfWrite);
		pfWrite = NULL;


	������infoPeo* peoList
	����ֵ��
*/
void writeData(infoPeo* peoList);


