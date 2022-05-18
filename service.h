#pragma once
#include <time.h>
#include "dao.h"

/*
	srand(time(NULL));
	int r = rand() % NUM;
	int fx[NUM] = { 0 };//标识，判断地鼠是否应该上升或下降
	if (r == 某只地鼠)
	{
		while (true)
		{
			if (fx[r] == 0)
			{
				ds[r].y -= 3;
				if (ds[r].y <= 这只地鼠的最高移动范围（开始的位置 — 地鼠的高度）)
				{
					fx[r] = 1;
				}
			}
			else
			{
				ds[r].y += 3;
				if (ds[r].y >= 这只地鼠的最低移动范围（开始的位置）)
				{
					fx[r] = 0;
					ds[r].isLive = 1;//说明没被击中，要打印没击中的图片
					r = rand() % NUM;
				}

			}
		}
	
	}
*/

//函数声明
//void gopherMove();




/*
	负责人：
	功能：
		判断锤子是否击中地鼠 
		return 1;表示击中。
		return 0;表示没击中。

	int hit() 
	{
		if (r == 某地鼠) {
			if (ds[r].y < 该地鼠开始的高度) {//地鼠已经升上来了
				if (地鼠和锤子重叠) 
				{
					return 1;
				}
			}
		}
		return 0;
	}
	参数：
	返回值： return 1;表示击中。
		    return 0;表示没击中。
*/
int hit();


/*
	负责人：
	功能：
		表示锤子是否击中地鼠之后锤子做出的反应
		
		msg = GetMouseMsg();
		cz.x = msg.x - 15;//将锤子坐标与鼠标坐标联系起来
		cz.y = msg.y - 15;//
		if (msg.mkLButton) 
		{
			cz.isDown = 0;//锤子落下

			if (cz.hit()) {//hit()返回1，表示击中进入if
				pe->score++;
				pe->money++;
				ds[m].isLive = false;//打中了，打死地鼠
				
			}else
			{
			LIFEBAR_NUM--;//没打中血量减少
			}
		}
		 else
			cz.down = 1;//锤子抬起
	}

	参数：people* pe
	返回值：无
*/
void hammerHit();

//DWORD CALLBACK TestProc(LPVOID pParam);

//有时间再写
void prop();



void Music(int open_close);

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
//int isOver(int lifeBar_num);

/*
	负责人：司令
	功能：
		将角色按得分进行冒泡排序

	参数：infoPeo* p
	返回值：无

*/
void sort(infoPeo* p);
void sort1(infoPeo* p);



