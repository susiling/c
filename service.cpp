#pragma once
#include "dao.h"
#include <graphics.h>
#include "view.h"



//int fx[NUM] = { 0 };//0�������ڵ��£�1�������ڵ���
//
extern int key;
extern int r;
extern people cp;
extern struct Gopher ds[NUM];
extern struct hammer cz;

//void gopherMove()
//{
//	if (key == 1)
//	{
//		if (fx[r] == 0)
//		{
//			ds[r].y -= 3;
//			if (r >= 0 && r < 3)//��һ�ŵ���
//			{
//				if (ds[r].y <= MAP1_MOUSE_BEGIN_Y - ds[r].h)//����߶�110//�ж��Ƿ��ߵ���һ�Ŷ�����
//				{
//					fx[r] = 1;
//				}
//			}
//			else if (r >= 3 && r < 6)//�ڶ��ŵ���
//			{
//				if (ds[r].y <= MAP1_MOUSE_MID_Y - ds[r].h)//����߶�110//�ж��Ƿ��ߵ��ڶ��Ŷ�����
//				{
//					fx[r] = 1;
//				}
//			}
//			else if (r >= 6 && r < 9)//�����ŵ���
//			{
//				if (ds[r].y <= MAP1_MOUSE_LAST_Y - ds[r].h)//����߶�110//�ж��Ƿ��ߵ������Ŷ�����
//				{
//					fx[r] = 1;
//				}
//			}
//		}
//		else
//		{
//			ds[r].y += 3;
//			if (r >= 0 && r < 3)//��һ�ŵ���
//			{
//				if (ds[r].y >= MAP1_MOUSE_BEGIN_Y)//�ж��Ƿ��ߵ���һ�Ŷ�����
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//ÿһ�δӵ��������Ķ��ǻ�ĵ���
//					r = rand() % NUM;
//				}
//			}
//			else if (r >= 3 && r < 6)//�ڶ��ŵ���
//			{
//				if (ds[r].y >= MAP1_MOUSE_MID_Y)//�ж��Ƿ��ߵ��ڶ��Ŷ�����
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//ÿһ�δӵ��������Ķ��ǻ�ĵ���
//					r = rand() % NUM;
//				}
//			}
//			else if (r >= 6 && r < 9)//�����ŵ���
//			{
//				if (ds[r].y >= MAP1_MOUSE_LAST_Y)//�ж��Ƿ��ߵ������Ŷ�����
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//ÿһ�δӵ��������Ķ��ǻ�ĵ���
//					r = rand() % NUM;
//				}
//			}
//		}
//	}
//}
//VOID timerProc(HWND hWnd, UINT uInt, UINT_PTR ptr, DWORD dWord) {
//	if (r >= 0 && r < 3) {
//		if (fx[r] == 0) {
//			ds[r].y -= 3;
//			if (ds[r].y <= (MAP1_MOUSE_BEGIN_Y - ds[r].h)) {
//				fx[r] = 1;
//			}
//		}
//		else {
//			ds[r].y += 3;
//			if (ds[r].y >= MAP1_MOUSE_BEGIN_Y) {
//				fx[r] = 0;
//				ds[r].isLive = 1;
//				r = rand() % 9;
//			}
//		}
//	}
//
//	if (r >= 3 && r < 6) {
//		if (fx[r] == 0) {
//			ds[r].y -= 3;
//			if (ds[r].y <= (MAP1_MOUSE_MID_Y - ds[r].h)) {
//				fx[r] = 1;
//			}
//		}
//		else {
//			ds[r].y += 3;
//			if (ds[r].y >= MAP1_MOUSE_MID_Y) {
//				fx[r] = 0;
//				ds[r].isLive = 1;
//				r = rand() % 9;
//			}
//		}
//	}
//
//	if (r >= 6 && r < 9) {
//		if (fx[r] == 0) {
//			ds[r].y -= 3;
//			if (ds[r].y <= (MAP1_MOUSE_LAST_Y - ds[r].h)) {
//				fx[r] = 1;
//			}
//		}
//		else {
//			ds[r].y += 3;
//			if (ds[r].y >= MAP1_MOUSE_LAST_Y) {
//				fx[r] = 0;
//				ds[r].isLive = 1;
//				r = rand() % 9;
//
//			}
//		}
//	}
//}
int hit()
{
	int czx = cz.x;
	int czy = cz.y;

	if (r < 3) {
		if (ds[r].y < 276) {
			if (r == 0) {
				if (czx > 136 - 50 && czx < 136 + 120 && czy < 276 && czy > 276 - 200)
					return 1;
			}
			if (r == 1) {
				if (czx > 332  - 50 && czx < 332 + 120 && czy < 276  && czy > 276 - 200)
					return 1;
			}
			if (r == 2) {
				if (czx > 518 - 50 && czx < 518 + 120 && czy < 276 && czy > 276 - 200)
					return 1;
			}
		}
	}
	else if (r < 6) {
		if (ds[r].y < 407) {
			if (r == 3) {
				if (czx > 136 - 50 && czx < 136 + 120 && czy < 407  && czy > 407 - 200)
					return 1;
			}
			if (r == 4) {
				if (czx > 332 - 50 && czx < 332 + 120 && czy < 407 && czy > 407 - 200)
					return 1;
			}
			if (r == 5) {
				if (czx > 518 - 50 && czx < 518 + 120 && czy < 407  && czy > 407 - 200)
					return 1;
			}
		}
	}
	else if (r < 9) {
		if (ds[r].y < 534) {
			if (r == 6) {
				if (cz.x > 136 - 50 && cz.x < 136 + 120 && cz.y < 518 && cz.y > 518 - 200)
					return 1;
			}
			if (r == 7) {
				if (cz.x > 332 - 50 && cz.x < 332 + 120 && cz.y < 518 && cz.y > 518 - 200)
					return 1;
			}
			if (r == 8) {
				if (cz.x > 518 - 50&& cz.x < 518 + 120 && cz.y < 518 && cz.y > 518 - 200)
					return 1;
			}
		}
	}
	return 0;
}

extern int musicSwitch;
void hammerHit()
{
	ExMessage msg;
	if (peekmessage(&msg, EM_MOUSE))
	{
		cz.x = msg.x - 50;//���������������������ϵ����
		cz.y = msg.y - 50;//
		if (msg.message == WM_LBUTTONDOWN)
		{
			cz.isDown = 1;//��������

			if (hit()) {//hit()����1����ʾ���н���if
				cp.score++;
				cp.money += 2;
				ds[r].isLive = 0;//�����ˣ���������
			}

		

			if (msg.x >= 641 && msg.x <= 706 && msg.y >= 16 && msg.y <= 80)
			{

				pause();//��ͣ--��
			}
			if (msg.x >= 100 && msg.x <= 150 && msg.y >= 20 && msg.y <= 80)
			{

				over();//����--��--û�н�������ͣ��ʵ��
			}

			if (msg.x >= 550 && msg.x <= 610 && msg.y >= 16 && msg.y <= 76)
			{
				//�ر�����
				if (musicSwitch == 0)
				{
					musicSwitch = 1;//Ϊ�´ε����׼��--Ϊ���뿪��
					Music(0);
				}
				//��������
				else
				{
					musicSwitch = 0;//Ϊ�´ε����׼��--Ϊ����ر�
					Music(1);
				}
			}
		}
		//�������
		else {
			cz.isDown = 0;//����̧��
		}

	}

}

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


void Music(int open_close)//���ֵĿ����͹ر�//���������
{
	mciSendString("open ./�ز�/music/music1.mp3 alias music1", 0, 0, 0);

	if (open_close)
	{
		mciSendString("play music1 repeat", 0, 0, 0);//�Ƿ���Ҫ����������С
	}
	else
	{
		mciSendString("close music1", 0, 0, 0);
	}
}

/*
	�����ˣ�˾��
	���ܣ�
		����ɫ���÷ֽ���ð������

	������infoPeo* p
	����ֵ����

*/
void sort(infoPeo* p)
{
	int i = 0;
	for (i = 0; i < PNUM - 1; i++)
	{
		for (int j = 0; j < PNUM - i - 1; j++)
		{
			if (p->peo[j].maxScore < p->peo[j + 1].maxScore)
			{
				people x = p->peo[j];
				p->peo[j] = p->peo[j + 1];
				p->peo[j + 1] = x;
			}
		}

	}

}
void sort1(infoPeo* p)
{
	int i = 0;
	for (i = 0; i < PNUM - 1; i++)
	{
		for (int j = 0; j < PNUM - i - 1; j++)
		{
			if (p->peo[j].score < p->peo[j + 1].score)
			{
				people x = p->peo[j];
				p->peo[j] = p->peo[j + 1];
				p->peo[j + 1] = x;
			}
		}

	}

}
