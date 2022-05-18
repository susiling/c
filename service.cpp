#pragma once
#include "dao.h"
#include <graphics.h>
#include "view.h"



//int fx[NUM] = { 0 };//0：地鼠在地下，1：地鼠在地上
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
//			if (r >= 0 && r < 3)//第一排地鼠
//			{
//				if (ds[r].y <= MAP1_MOUSE_BEGIN_Y - ds[r].h)//地鼠高度110//判断是否走到第一排洞上面
//				{
//					fx[r] = 1;
//				}
//			}
//			else if (r >= 3 && r < 6)//第二排地鼠
//			{
//				if (ds[r].y <= MAP1_MOUSE_MID_Y - ds[r].h)//地鼠高度110//判断是否走到第二排洞上面
//				{
//					fx[r] = 1;
//				}
//			}
//			else if (r >= 6 && r < 9)//第三排地鼠
//			{
//				if (ds[r].y <= MAP1_MOUSE_LAST_Y - ds[r].h)//地鼠高度110//判断是否走到第三排洞上面
//				{
//					fx[r] = 1;
//				}
//			}
//		}
//		else
//		{
//			ds[r].y += 3;
//			if (r >= 0 && r < 3)//第一排地鼠
//			{
//				if (ds[r].y >= MAP1_MOUSE_BEGIN_Y)//判断是否走到第一排洞下面
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//每一次从地下上来的都是活的地鼠
//					r = rand() % NUM;
//				}
//			}
//			else if (r >= 3 && r < 6)//第二排地鼠
//			{
//				if (ds[r].y >= MAP1_MOUSE_MID_Y)//判断是否走到第二排洞下面
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//每一次从地下上来的都是活的地鼠
//					r = rand() % NUM;
//				}
//			}
//			else if (r >= 6 && r < 9)//第三排地鼠
//			{
//				if (ds[r].y >= MAP1_MOUSE_LAST_Y)//判断是否走到第三排洞下面
//				{
//					fx[r] = 0;
//					ds[r].isLive = 1;//每一次从地下上来的都是活的地鼠
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
		cz.x = msg.x - 50;//将锤子坐标与鼠标坐标联系起来
		cz.y = msg.y - 50;//
		if (msg.message == WM_LBUTTONDOWN)
		{
			cz.isDown = 1;//锤子落下

			if (hit()) {//hit()返回1，表示击中进入if
				cp.score++;
				cp.money += 2;
				ds[r].isLive = 0;//打中了，打死地鼠
			}

		

			if (msg.x >= 641 && msg.x <= 706 && msg.y >= 16 && msg.y <= 80)
			{

				pause();//暂停--有
			}
			if (msg.x >= 100 && msg.x <= 150 && msg.y >= 20 && msg.y <= 80)
			{

				over();//结束--有--没有结束在暂停中实现
			}

			if (msg.x >= 550 && msg.x <= 610 && msg.y >= 16 && msg.y <= 76)
			{
				//关闭音乐
				if (musicSwitch == 0)
				{
					musicSwitch = 1;//为下次点击做准备--为进入开启
					Music(0);
				}
				//开启音乐
				else
				{
					musicSwitch = 0;//为下次点击做准备--为进入关闭
					Music(1);
				}
			}
		}
		//左键弹起
		else {
			cz.isDown = 0;//锤子抬起
		}

	}

}

/*
	负责人：
	功能：
		判断血量是否为0

		if(lifeBar_num == 0)//说明没血了
		{
			return 1;
		}
		return 0;

	参数：
	返回值：返回1游戏结束，返回0表示游戏继续
*/


void Music(int open_close)//音乐的开启和关闭//这个做好了
{
	mciSendString("open ./素材/music/music1.mp3 alias music1", 0, 0, 0);

	if (open_close)
	{
		mciSendString("play music1 repeat", 0, 0, 0);//是否需要控制音量大小
	}
	else
	{
		mciSendString("close music1", 0, 0, 0);
	}
}

/*
	负责人：司令
	功能：
		将角色按得分进行冒泡排序

	参数：infoPeo* p
	返回值：无

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
