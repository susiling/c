#pragma once
#include <time.h>
#include "dao.h"

/*
	srand(time(NULL));
	int r = rand() % NUM;
	int fx[NUM] = { 0 };//��ʶ���жϵ����Ƿ�Ӧ���������½�
	if (r == ĳֻ����)
	{
		while (true)
		{
			if (fx[r] == 0)
			{
				ds[r].y -= 3;
				if (ds[r].y <= ��ֻ���������ƶ���Χ����ʼ��λ�� �� ����ĸ߶ȣ�)
				{
					fx[r] = 1;
				}
			}
			else
			{
				ds[r].y += 3;
				if (ds[r].y >= ��ֻ���������ƶ���Χ����ʼ��λ�ã�)
				{
					fx[r] = 0;
					ds[r].isLive = 1;//˵��û�����У�Ҫ��ӡû���е�ͼƬ
					r = rand() % NUM;
				}

			}
		}
	
	}
*/

//��������
//void gopherMove();




/*
	�����ˣ�
	���ܣ�
		�жϴ����Ƿ���е��� 
		return 1;��ʾ���С�
		return 0;��ʾû���С�

	int hit() 
	{
		if (r == ĳ����) {
			if (ds[r].y < �õ���ʼ�ĸ߶�) {//�����Ѿ���������
				if (����ʹ����ص�) 
				{
					return 1;
				}
			}
		}
		return 0;
	}
	������
	����ֵ�� return 1;��ʾ���С�
		    return 0;��ʾû���С�
*/
int hit();


/*
	�����ˣ�
	���ܣ�
		��ʾ�����Ƿ���е���֮���������ķ�Ӧ
		
		msg = GetMouseMsg();
		cz.x = msg.x - 15;//���������������������ϵ����
		cz.y = msg.y - 15;//
		if (msg.mkLButton) 
		{
			cz.isDown = 0;//��������

			if (cz.hit()) {//hit()����1����ʾ���н���if
				pe->score++;
				pe->money++;
				ds[m].isLive = false;//�����ˣ���������
				
			}else
			{
			LIFEBAR_NUM--;//û����Ѫ������
			}
		}
		 else
			cz.down = 1;//����̧��
	}

	������people* pe
	����ֵ����
*/
void hammerHit();

//DWORD CALLBACK TestProc(LPVOID pParam);

//��ʱ����д
void prop();



void Music(int open_close);

/*
	�����ˣ�
	���ܣ�
		�ж�Ѫ���Ƿ�Ϊ0

		if(lifeBar_num == 0)//˵��ûѪ��
		{
			return 1;
		}
		return 0;

	������
	����ֵ������1��Ϸ����������0��ʾ��Ϸ����
*/
//int isOver(int lifeBar_num);

/*
	�����ˣ�˾��
	���ܣ�
		����ɫ���÷ֽ���ð������

	������infoPeo* p
	����ֵ����

*/
void sort(infoPeo* p);
void sort1(infoPeo* p);



