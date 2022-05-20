#include "view.h"
#include <graphics.h>
#include <stdio.h>

IMAGE READ, RETURN, CONTINUE, LIFEBAR1, LIFEBAR2;//继续游戏
IMAGE shopBack, back, hammerOne, hammerTwo, hammerOnes, hammerTwos;//商店

//game
IMAGE black;
IMAGE Gold;
IMAGE IntegralHammer;
IMAGE lifeBar;
IMAGE lifeBar_black;
IMAGE music_down;
IMAGE music_up;
IMAGE soundeffect_down;
IMAGE soundeffect_up;
IMAGE timeout;
//gorher
IMAGE one;
IMAGE one_black;
IMAGE one_d;
IMAGE one_dblack;
IMAGE two;
IMAGE two_black;
IMAGE two_d;
IMAGE two_dblack;
//hummer
IMAGE four_dn;
IMAGE four_dnBlack;
IMAGE four_up;
IMAGE four_upBlack;
IMAGE three_dn;
IMAGE three_dnBlack;
IMAGE three_up;
IMAGE three_upBlack;
//map
IMAGE choose;
IMAGE choose_black;
IMAGE map_one;
IMAGE map_three;
IMAGE map_two;
IMAGE Choose;
IMAGE one_1;
IMAGE one_2;
IMAGE one_3;
IMAGE one_4;
IMAGE three_1;
IMAGE three_2;
IMAGE three_3;
IMAGE three_4;
IMAGE two_1;
IMAGE two_2;
IMAGE two_3;
IMAGE two_4;
//menu

IMAGE Gold0,zh;
IMAGE largeIcon;
IMAGE MainMenuCoins;
IMAGE modeSelector;
IMAGE ProducedByTornado;
IMAGE quit;
IMAGE rankings;
IMAGE readFileSelection;
IMAGE return0;
IMAGE SetUp;
IMAGE store;


////创建地鼠数组
struct Gopher ds[NUM];


//锤子实例
struct hammer cz;

//角色实例
struct infoPeo peoList;

//当前玩家
people cp;

int choosem = 1,pechoose = 0;
int key;
int r;
void loadRes()
{
	
	//game
	loadimage(&black, "./素材/game/black.jpg");
	loadimage(&Gold, "./素材/game/Gold.png");
	loadimage(&IntegralHammer, "./素材/game/IntegralHammer.png");
	loadimage(&lifeBar, "./素材/game/lifeBar.jpg");
	loadimage(&lifeBar_black, "./素材/game/lifeBar_black.jpg");
	loadimage(&music_up, "./素材/game/music_up.png");
	loadimage(&music_down, "./素材/game/music_down.png");
	loadimage(&soundeffect_down, "./素材/game/soundeffect_down.png");
	loadimage(&soundeffect_up, "./素材/game/soundeffect_up.png");
	loadimage(&timeout, "./素材/game/timeout.png");
	//gopher
	loadimage(&one, "./素材/gorher/one.jpg", 120, 110);
	loadimage(&one_black, "./素材/gorher/one_black.jpg", 120, 110);
	loadimage(&one_d, "./素材/gorher/one_d.jpg", 122, 101);
	loadimage(&one_dblack, "./素材/gorher/one_dblack.jpg", 122, 101);
	loadimage(&two, "./素材/gorher/two.jpg", 120, 110);
	loadimage(&two_black, "./素材/gorher/two_black.jpg", 120, 110);
	loadimage(&two_d, "./素材/gorher/two_d.jpg", 122, 101);
	loadimage(&two_dblack, "./素材/gorher/two_dblack.jpg", 122, 101);
	//hammer
	loadimage(&four_dn, "./素材/hammer/four_dn.jpg",cz.w,cz.h,true);
	loadimage(&four_dnBlack, "./素材/hammer/four_dnBlack.jpg", cz.w, cz.h, true);
	loadimage(&four_up, "./素材/hammer/four_up.jpg", cz.w, cz.h, true);
	loadimage(&four_upBlack, "./素材/hammer/four_upBlack.jpg", cz.w, cz.h, true);
	loadimage(&three_dn, "./素材/hammer/three_dn.jpg", cz.w, cz.h, true);
	loadimage(&three_dnBlack, "./素材/hammer/three_dnBlack.jpg", cz.w, cz.h, true);
	loadimage(&three_up, "./素材/hammer/three_up.jpg", cz.w, cz.h, true);
	loadimage(&three_upBlack, "./素材/hammer/three_upBlack.jpg",cz.w, cz.h, true);
	//map
	loadimage(&choose, "./素材/map/choose.jpg");
	loadimage(&choose_black, "./素材/map/choose_black.jpg");
	loadimage(&map_one, "./素材/map/map_one.jpg");
	loadimage(&map_three, "./素材/map/map_three.jpg");
	loadimage(&map_two, "./素材/map/map_two.jpg");
	loadimage(&Choose, "./素材/map/mapChoose.jpg");
	loadimage(&one_1, "./素材/map/one_1.jpg");
	loadimage(&one_2, "./素材/map/one_2.jpg");
	loadimage(&one_3, "./素材/map/one_3.jpg");
	loadimage(&one_4, "./素材/map/one_4.jpg");
	loadimage(&three_1, "./素材/map/three_1.jpg");
	loadimage(&three_2, "./素材/map/three_2.jpg");
	loadimage(&three_3, "./素材/map/three_3.jpg");
	loadimage(&three_4, "./素材/map/three_4.jpg");
	loadimage(&two_1, "./素材/map/two_1.jpg");
	loadimage(&two_2, "./素材/map/two_2.jpg");
	loadimage(&two_3, "./素材/map/two_3.jpg");
	loadimage(&two_4, "./素材/map/two_4.jpg");
	/*loadimage(&three_1, "./素材/map/three_1.jpg", 720, 276, true);
	loadimage(&three_2, "./素材/map/three_2.jpg", 720, 407, true);
	loadimage(&three_3, "./素材/map/three_3.jpg", 720, 534, true);
	loadimage(&three_4, "./素材/map/three_4.jpg", 720, 675, true);
	loadimage(&two_1, "./素材/map/two_1.jpg", 720, 276, true);
	loadimage(&two_2, "./素材/map/two_2.jpg", 720, 407, true);
	loadimage(&two_3, "./素材/map/two_3.jpg", 720, 534, true);
	loadimage(&two_4, "./素材/map/two_4.jpg", 720, 675, true);*/
	//menu
	loadimage(&Gold0, "./素材/menu/Gold0.png");
	loadimage(&largeIcon, "./素材/menu/largeIcon.png");
	loadimage(&MainMenuCoins, "./素材/menu/MainMenuCoins.png");
	loadimage(&modeSelector, "./素材/menu/modeSelector.png");
	loadimage(&ProducedByTornado, "./素材/menu/ProducedByTornado.png");
	loadimage(&quit, "./素材/menu/quit.png");
	loadimage(&rankings, "./素材/menu/rankings.png");
	loadimage(&readFileSelection, "./素材/menu/readFileSelection.png");
	loadimage(&return0, "./素材/menu/return0.png");
	loadimage(&SetUp, "./素材/menu/SetUp.png");
	loadimage(&store, "./素材/menu/store.png");

}

//设置商品价格
int goods[2] = { 10,20 };
int gameChoose = 1;//选择开始游戏还是继续游戏
//
int lifeBar_num;//血量。初始为3
int musicSwitch = 1;//控制音乐开启和音乐图标的贴取并为下次控制音乐的开启;
void initInfoPeo()
{
	for (int i = 0; i < NUM; i++)
	{
		peoList.peo[i].money = 0;
		peoList.peo[i].score = 0;
		peoList.peo[i].maxScore = 0;
	}
	char name[] = "南孤";
	strcpy_s(peoList.peo[0].name, name);
	char name1[] = "deep小学长";
	strcpy_s(peoList.peo[1].name, name1);
	char name2[] = "啊呜";
	strcpy_s(peoList.peo[2].name, name2);
	char name3[] = "琐含";
	strcpy_s(peoList.peo[3].name, name3);
	char name4[] = "不喝咖啡";
	strcpy_s(peoList.peo[4].name, name4);
	char name5[] = "苏司令";
	strcpy_s(peoList.peo[5].name, name5);
	char name6[] = "狸";
	strcpy_s(peoList.peo[6].name, name6);
	char name7[] = "叶佳昇";
	strcpy_s(peoList.peo[7].name, name7);
	char name8[] = "52Hertz";
	strcpy_s(peoList.peo[8].name, name8);
	char name9[] = "Desolation";
	strcpy_s(peoList.peo[9].name, name9);
	peoList.numData = 0;
	//readData(&peoList);//读数据
}



void menu()
{
	BeginBatchDraw();
	
	setbkcolor(RGB(248, 248, 248));
	cleardevice();
	
	setbkcolor(RGB(248, 248, 248));
	cleardevice();
	IMAGE img1;
	IMAGE img2;
	IMAGE img3;
	IMAGE img4;
	IMAGE img5;
	

	loadimage(&img1, "./素材/menu/1.jpg", 70, 179);
	loadimage(&img2, "./素材/menu/2.jpg", 236, 462);
	loadimage(&img3, "./素材/menu/3.jpg", 160, 46);
	loadimage(&img4, "./素材/menu/4.jpg", 62, 62);
	loadimage(&img5, "./素材/menu/5.jpg", 61, 58);

	
	putimage(0, 0, &img1);
	putimage(235, 45, &img2);
	putimage(0, 627, &img3);
	putimage(658, 613, &img4);
	putimage(659, 0, &img5);
	


	char name[20];
	settextcolor(RED);
	settextstyle(30, 0, name);
	sprintf_s(name, "%s", cp.name);
	outtextxy(276, 190, name);
	settextcolor(BLACK);
	char str[20];
	sprintf_s(str, "%06d", cp.money);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(25, 0, "仿宋");
	outtextxy(60, 10, str);


	EndBatchDraw();
	/*for (int i = 0; i < 10; i++)
	{
		printf("%s score = %d maxScore = %d clife = %d\n", peoList.peo[i].name, peoList.peo[i].score, peoList.peo[i].maxScore,
			peoList.peo[i].clife);
		
		
	}printf("当前玩家为 %s score = %d maxScore = %d clife = %d\n", cp.name, cp.score, cp.maxScore,cp.clife);
	printf("lifeBar_num = %d\n",lifeBar_num);
	printf("\n");*/
while (1)
	{
		if (MouseHit())
		{

			MOUSEMSG msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)
			{     
			
				if (msg.x > 276 && msg.x < 418 && msg.y>225 && msg.y < 264)
				{
					selectCharacter();//跳转到选择角色界面//角色选择
					
				}
				
				if (msg.x > 658 && msg.x < 720 && msg.y>613 && msg.y < 675)
				{
					setting();//设置界面的进入
				}
			
				if (msg.x > 276 && msg.x < 418 && msg.y>283 && msg.y < 328)
				{
					game();//开始游戏的界面
					
				}
				if (msg.x > 659 && msg.x < 720 && msg.y>0 && msg.y < 58)
				{
					end();//退出按钮
				}
				if (msg.x > 276 && msg.x < 418 && msg.y>359 && msg.y < 405)
				{
					cp = continueGame();//继续游戏界面
					game();
				}
				if (msg.x > 276 && msg.x < 418 && msg.y>435 && msg.y < 479)
				{
					mapChoose();//地图选择界面
				
				}
				if (msg.x > 3 && msg.x < 51 && msg.y>131 && msg.y < 174)
				{
					sort(&peoList);
					rankingList();//排行榜//排行
				}
				if (msg.x > 3 && msg.x < 51 && msg.y>59 && msg.y < 106)
				{
					shop();//装备
				}

			}
		}
	}

}

void pfselectCharacter()//封装selectCharacter()里面的打印部分
{
	setbkcolor(WHITE);
	cleardevice();

	IMAGE SELECT, back;

	loadimage(&back, "./back.png", 60, 60);
	putimage(0, 0, &back);
	loadimage(&SELECT, "./pe_selection.png", 200, 100);
	putimage(260, 40, &SELECT);//贴选择角色图片资源



	for (int i = 0; i < PNUM; i++)
	{
		int flag = 0;//控制第五行换列
		int m = 0;
		if (i > 4)
		{
			flag = 1;
			m = 5;
		}

		char name[20];
		strcpy_s(name, peoList.peo[i].name);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "仿宋");
		outtextxy(131 + flag * 304, 147 + ((i + 1 - m) * ROLE_DISTANSE), name);
		//setfillcolor(BLACK);
		//fillrectangle(131 + flag * 304,347, 147 + ((i + 1 - m) * ROLE_DISTANSE),60);
	}
}
void selectCharacter()
{
	/*负责人：王明杰
	功能：
		打印选择角色界面，内容包括：角色图标，鼠标选择对应角色，返回该角色结构体*/
	
	pfselectCharacter();
	
	switch (pechoose)
	{
	case 1:
		setlinecolor(RED);
		rectangle(130, 190, 265, 225);
		break;
	case 2:
		setlinecolor(RED);
		rectangle(130, 240, 265, 275);
		break;
	case 3:
		setlinecolor(RED);
		rectangle(130, 290, 265, 325);
		break;
	case 4:
		setlinecolor(RED);
		rectangle(130, 340, 265, 375);
		break;
	case 5:
		setlinecolor(RED);
		rectangle(130, 390, 265, 425);
		break;
	case 6:
		setlinecolor(RED);
		rectangle(435, 190, 570, 225);
		break;
	case 7:
		setlinecolor(RED);
		rectangle(435, 240, 570, 275);
		break;
	case 8:
		setlinecolor(RED);
		rectangle(435, 290, 570, 325);
		break;
	case 9:
		setlinecolor(RED);
		rectangle(435, 340, 570, 375);
		break;
	case 10:
		setlinecolor(RED);
		rectangle(435, 390, 570, 425);
		break;
	}

	MOUSEMSG msg;
	while (true)
	{
		BeginBatchDraw();
		if (MouseHit())
		{
			msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)//按下时
			{
				if (msg.x > 130 && msg.x < 130 + 135 && msg.y > 190 && msg.y < 190 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[0];
					gameChoose = 1;
					pechoose = 1;
				}
				if (msg.x > 435 && msg.x < 435 + 155 && msg.y > 147 && msg.y < 147 + 100)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[5];
					gameChoose = 1;
					pechoose = 6;
				}
				if (msg.x > 130 && msg.x < 130 + 135 && msg.y > 240 && msg.y < 240 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[1];
					gameChoose = 1;
					pechoose = 2;
				}
				if (msg.x > 435 && msg.x < 435 + 135 && msg.y > 240 && msg.y < 240 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[6];
					gameChoose = 1;
					pechoose = 7;
				}
				if (msg.x > 130 && msg.x < 130 + 135 && msg.y > 290 && msg.y < 290 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[2];
					gameChoose = 1;
					pechoose = 3;
				}
				if (msg.x > 435 && msg.x < 435 + 155 && msg.y > 290 && msg.y < 290 + 35)
				{
					cleardevice();
					pfselectCharacter(); 
					cp = peoList.peo[7];
					gameChoose = 1;
					pechoose = 8;
				}
				if (msg.x > 130 && msg.x < 130 + 135 && msg.y > 340 && msg.y < 340 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[3];
					gameChoose = 1;
					pechoose = 4;
				}
				if (msg.x > 435 && msg.x < 435 + 135 && msg.y > 340 && msg.y < 340 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[8];
					gameChoose = 1;
					pechoose = 9;
				}
				if (msg.x > 130 && msg.x < 130 + 135 && msg.y > 390 && msg.y < 390 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[4];
					gameChoose = 1;
					pechoose = 5;
				}
				if (msg.x > 435 && msg.x < 435 + 135 && msg.y > 390 && msg.y < 390 + 35)
				{
					cleardevice();
					pfselectCharacter();
					cp = peoList.peo[9];
					gameChoose = 1;
					pechoose = 10;
				}
				if (msg.x >= 0 && msg.x <= 55 && msg.y >= 0 && msg.y <= 55) //返回键  点击返回主菜单
				{
					menu();//主菜单函数
				}
				switch (pechoose)
				{
				case 1:
					setlinecolor(RED);
					rectangle(130, 190, 265, 225);
					break;
				case 2:
					setlinecolor(RED);
					rectangle(130, 240, 265, 275);
					break;
				case 3:
					setlinecolor(RED);
					rectangle(130, 290, 265, 325);
					break;
				case 4:
					setlinecolor(RED);
					rectangle(130, 340, 265, 375);
					break;
				case 5:
					setlinecolor(RED);
					rectangle(130, 390, 265, 425);
					break;
				case 6:
					setlinecolor(RED);
					rectangle(435, 190, 570, 225);
					break;
				case 7:
					setlinecolor(RED);
					rectangle(435, 240, 570, 275);
					break;
				case 8:
					setlinecolor(RED);
					rectangle(435, 290, 570, 325);
					break;
				case 9:
					setlinecolor(RED);
					rectangle(435, 340, 570, 375);
					break;
				case 10:
					setlinecolor(RED);
					rectangle(435, 390, 570, 425);
					break;
				}

			}
		}
		EndBatchDraw();
	}
	
	/*参数：无
	返回值：people 返回该角色*/
}

VOID timerProc(HWND hWnd, UINT uInt, UINT_PTR ptr, DWORD dWord) {



	if (r >= 0 && r < 3) {
		if (ds[r].fx == 0) {
			ds[r].y -= 3;
			if (ds[r].y <= (MAP1_MOUSE_BEGIN_Y - ds[r].h + 20)) {
				ds[r].fx = 1;
			}
		}
		else {			
			ds[r].y += 3;
			if (ds[r].y >= MAP1_MOUSE_BEGIN_Y) {
				ds[r].fx = 0;
				if (ds[r].isLive == 1)
				{
					lifeBar_num--;

				}
				ds[r].isLive = 1;
				r = rand() % 9;
			}
		}
	}

	if (r >= 3 && r < 6) {
		if (ds[r].fx == 0) {
			ds[r].y -= 3;
			if (ds[r].y <= (MAP1_MOUSE_MID_Y - ds[r].h + 20)) {
				ds[r].fx = 1;
			}
		}
		else {
			ds[r].y += 3;
			if (ds[r].y >= MAP1_MOUSE_MID_Y) {
				ds[r].fx = 0;
				if (ds[r].isLive == 1)
				{

					lifeBar_num--;

				}
				ds[r].isLive = 1;
				r = rand() % 9;
			}
		}
	}

	if (r >= 6 && r < 9) {
		if (ds[r].fx == 0) {
			ds[r].y -= 3;
			if (ds[r].y <= (MAP1_MOUSE_LAST_Y - ds[r].h + 20)) {
				ds[r].fx = 1;
			}
		}
		else {
			ds[r].y += 3;
			if (ds[r].y >= MAP1_MOUSE_LAST_Y) {
				ds[r].fx = 0;
				if (ds[r].isLive == 1)
				{
					lifeBar_num--;
				}
				ds[r].isLive = 1;
				r = rand() % 9;

			}
		}
	}
}
int isOver()
{

	if (lifeBar_num == 0)//说明没血了
	{
		return 1;
	}
	return 0;
}

void game()
{


	if (gameChoose == 1)
	{
		lifeBar_num = 3;//重置血量
		cp.score = 0;
	}
	else
	{
		if (cp.clife < 3)
		{
			lifeBar_num = cp.clife;
			
		}
		else
		{
			lifeBar_num = 3;//重置血量
		}
	}
		
	//每次进来重置个人得分
	
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

	initGame();
	

	//初始化随机值
	srand(time(NULL));//主函数
	int r = rand() % NUM;//主函数
	
	HWND hWnd = GetHWnd();
	SetTimer(hWnd, 10086, 20, (TIMERPROC)timerProc);//地鼠出现、消失或上下移动  定时器
	

	while (true)
	{
	
		BeginBatchDraw();
		
		drawGame();//贴游戏界面 贴图：血量，音量，暂停，背景（坑和背景风格），道具，锤子，金币，得分--有
	
		hammerHit();
		
		if (isOver())//每次循环结束，判断游戏是否结束
		{
			initGame();
			int k = KillTimer(hWnd, 10086);
			
			over();//结束界面--有
			
		}
	
		EndBatchDraw();
		
	}

}


people continueGame()
{
	BeginBatchDraw();
	loadimage(&CONTINUE, ".\\continue.png", 720, 675, true);
	putimage(0, 0, &CONTINUE);
	setlinecolor(BLACK);
	line(125, 112, 660, 112);
	sort1(&peoList);
	for (int i = 0; i < PNUM; i++)
	{
		//名字
		char name[20];
		strcpy_s(name, peoList.peo[i].name);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(28, 0, "仿宋");//设置字号、字体
		outtextxy(125, 120 + (i * ROLE_DISTANSE), name);

		setlinecolor(BLACK);
		line(125, 162 + (i * ROLE_DISTANSE), 660, 162 + (i * ROLE_DISTANSE));
		//积分
		char str[20];
		sprintf_s(str, "%06d", peoList.peo[i].score);
		outtextxy(340, 120 + (i * ROLE_DISTANSE), str);

		//血量
		loadimage(&LIFEBAR1, ".\\素材/game/lifeBar.jpg", 40, 40, true);
		loadimage(&LIFEBAR2, ".\\素材/game/lifeBar_black.jpg", 40, 40, true);

		for (int j = 0; j < peoList.peo[i].clife; j++)
		{
		
			putimage(500 + (j * 40), 120 + (i * ROLE_DISTANSE), &LIFEBAR2, SRCAND);//血量 
			putimage(500 + (j * 40), 120 + (i * ROLE_DISTANSE), &LIFEBAR1, SRCPAINT);
		}

	}
	EndBatchDraw();
	//判断鼠标位置
	MOUSEMSG msg;
	while (true)
	{
		while (MouseHit())
		{
			msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)//按下时
			{
				if (msg.x >= 0 && msg.x <= 55 && msg.y >= 0 && msg.y <= 55)//在返回上
				{
						menu();
				}
				for (int i = 0; i < PNUM; i++)
				{
					if (msg.x > 125 && msg.x < 660 && msg.y > 112 + (i * ROLE_DISTANSE) && msg.y < 112 + ((i + 1) * ROLE_DISTANSE))
					{
						cp = peoList.peo[i];
						gameChoose = 0;
						game();
					}

				}
			}
		}

	}

}
void mapChoose() //地图皮肤选择  返回选择的皮肤序号 三张皮肤
{
	
	putimage(0, 0, &Choose);//选择界面
	//表示选择哪张地图，默认第一张
	switch (choosem)//选择皮肤之前展示当前皮肤时哪张
	{
	case 1:
		putimage(117, 492, &choose, SRCAND);
		putimage(117, 492, &choose_black, SRCPAINT);
		break;
	case 2:
		putimage(341, 495, &choose, SRCAND);
		putimage(341, 495, &choose_black, SRCPAINT);
		break;
	case 3:
		putimage(567, 487, &choose, SRCAND);
		putimage(567, 487, &choose_black, SRCPAINT);
		break;
	default:
		break;
	}
	MOUSEMSG msg;
	while (1)
	{
		while (MouseHit())
		{
			msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)
			{
				if (msg.x >= 613 && msg.x <= 689 && msg.y >= 575 && msg.y <= 648) //返回键  点击返回主菜单
				{
					menu();//主菜单函数
					
				}
				else
				{
					if (msg.x >= 46 && msg.x <= 235 && msg.y >= 305 && msg.y <= 487)//选择第一张地图
					{
						cleardevice();
						putimage(0, 0, &Choose);
						putimage(117, 492, &choose, SRCAND);
						putimage(117, 492, &choose_black, SRCPAINT);//在选择的皮肤下面打印打勾图片
						choosem = 1;
					}
					if (msg.x >= 269 && msg.x <= 463 && msg.y >= 305 && msg.y <= 487)//选择第二张地图
					{
						cleardevice();
						putimage(0, 0, &Choose);
						putimage(341, 495, &choose, SRCAND);
						putimage(341, 495, &choose_black, SRCPAINT);
						choosem = 2;

					}
					if (msg.x >= 495 && msg.x <= 688 && msg.y >= 305 && msg.y <= 487)//选择第三张地图
					{
						cleardevice();
						putimage(0, 0, &Choose);
						putimage(567, 487, &choose, SRCAND);
						putimage(567, 487, &choose_black, SRCPAINT);
						choosem = 3;
					}
				}

			}
		}
	}
}

void drawGame()
{
	cleardevice();
	//画不同的地图背景，不考虑地鼠皮肤
	switch (choosem)
	{
	case 1:
		putimage(0, 0, &one_1);//第一块地图
		//第一行的三只地鼠
		for (int i = 0; i < 3; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 276, &one_2);//第二块地图
		//第二行的三只地鼠
		for (int i = 3; i < 6; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}

		putimage(0, 407, &one_3);//第三块地图
		//第三行的三只地鼠
		for (int i = 6; i < 9; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 534, &one_4);//第四块地图
		break;
	case 2:
		putimage(0, 0, &two_1);//第一块地图
		//第一行的三只地鼠
		for (int i = 0; i < 3; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 274, &two_2);//第二块地图
		//第二行的三只地鼠
		for (int i = 3; i < 6; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}

		putimage(0, 402, &two_3);//第三块地图
		//第三行的三只地鼠
		for (int i = 6; i < 9; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 531, &two_4);//第四块地图
		break;
	case 3:
		putimage(0, 0, &three_1);//第一块地图
		//第一行的三只地鼠
		for (int i = 0; i < 3; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 272, &three_2);//第二块地图
		//第二行的三只地鼠
		for (int i = 3; i < 6; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}

		putimage(0, 400, &three_3);//第三块地图
		//第三行的三只地鼠
		for (int i = 6; i < 9; i++)
		{
			if (ds[i].isLive == 1)
			{
				putimage(ds[i].x, ds[i].y, &one_black, SRCAND);
				putimage(ds[i].x, ds[i].y, &one, SRCPAINT);
			}
			else
			{
				putimage(ds[i].x, ds[i].y, &one_dblack, SRCAND);
				putimage(ds[i].x, ds[i].y, &one_d, SRCPAINT);
			}
		}
		putimage(0, 529, &three_4);//第四块地图
		break;

	}

	//贴锤子皮肤
	switch (cp.cczpf)
	{
	case 0:
		if (cz.isDown == 0)
		{
			putimage(cz.x, cz.y, &three_upBlack, SRCAND);
			putimage(cz.x, cz.y,& three_up, SRCPAINT);
		}
		else
		{
			putimage(cz.x, cz.y, &three_dnBlack, SRCAND);
			putimage(cz.x, cz.y,& three_dn, SRCPAINT);
		}
		break;
	case 1:
		if (cz.isDown == 0)
		{
			putimage(cz.x, cz.y, &four_upBlack, SRCAND);
			putimage(cz.x, cz.y,& four_up, SRCPAINT);
		}
		else
		{
			putimage(cz.x, cz.y, &four_dnBlack, SRCAND);
			putimage(cz.x, cz.y,& four_dn, SRCPAINT);
		}
		break;
	}
	//血量
	for (int i = 0; i < lifeBar_num; i++)
	{
		putimage(250 + (i * 100), 30, &lifeBar_black, SRCAND);//血量 
		putimage(250 + (i * 100), 30, &lifeBar, SRCPAINT);//血量 

	}
	
	//得分(67,28)和金币(67,118)数值
	settextcolor(BLACK);
	char str1[20];
	sprintf_s(str1, "%06d", cp.score);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(25, 0, "仿宋");
	outtextxy(67, 28, str1);

	char str2[20];
	sprintf_s(str2, "%06d", cp.money);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(25, 0, "仿宋");
	
	outtextxy(67, 118, str2);
	//音效图标
	if (musicSwitch == 0)
	{
		putimage(550, 16, &black, SRCPAINT);
		putimage(550, 16, &music_up, SRCAND);//开启音乐图片
	}
	else
	{
	
		putimage(550, 16, &black, SRCPAINT);
		putimage(550, 16, &music_down, SRCAND);//关闭音乐图片--得考虑前面的贴图问题
	}



}

void initGame()
{
	//地鼠x,y坐标、身高，宽度，初始状态初始化
	for (int i = 0; i < 3; i++)
	{
		ds[i].x = MAP1_MOUSE_FIRST_X + i * GOPHER_DISTANCE;
		ds[i].y = MAP1_MOUSE_BEGIN_Y;
		ds[i].w = GOPHER_WIDTH;
		ds[i].h = GOPHER_HEIGHT;
		ds[i].isLive = 1;
		ds[i].fx = 0;
	}
	for (int i = 3; i < 6; i++)
	{
		ds[i].x = MAP1_MOUSE_FIRST_X + (i - 3) * GOPHER_DISTANCE;
		ds[i].y = MAP1_MOUSE_MID_Y;
		ds[i].w = GOPHER_WIDTH;
		ds[i].h = GOPHER_HEIGHT;
		ds[i].isLive = 1;
		ds[i].fx = 0;
	}
	for (int i = 6; i < 9; i++)
	{
		ds[i].x = MAP1_MOUSE_FIRST_X + (i - 6) * GOPHER_DISTANCE;
		ds[i].y = MAP1_MOUSE_LAST_Y;
		ds[i].w = GOPHER_WIDTH;
		ds[i].h = GOPHER_HEIGHT;
		ds[i].isLive = 1;
		ds[i].fx = 0;
	}
	
	//锤子x,y坐标、高度，宽度，初始状态初始化
	cz.x = HAMMER_BEGIN_X;
	cz.y = HAMMER_BEGIN_Y;
	cz.w = HAMMER_WIDTH;
	cz.h = HAMMER_HEIGHT;
	cz.isDown = 0;

	
}

void shop()
{
	//导入图片
	loadimage(&shopBack, "./素材/menu/background.png", 720, 675);

	loadimage(&back, "./素材/menu/return0.png", 70, 70);

	loadimage(&hammerOne, ".\\41.png", 180, 160, true);

	loadimage(&hammerTwo, ".\\11.png", 180, 160, true);

	loadimage(&hammerOnes, ".\\three_upBlack.jpg", 180, 160, true);

	loadimage(&hammerTwos, ".\\four_upBlack.jpg", 180, 160, true);
	while (true) {
		BeginBatchDraw();
		/*设置背景，字体和线条颜色*/
		putimage(0, 0, &shopBack);
		settextcolor(BLACK);
		setlinecolor(BLACK);
		setbkmode(TRANSPARENT);//消除字体背景
		//settextstyle(40, 0, _T("宋体"),90,0,0,false,false,false);//设置字号、字体
		outtextxy(ax - 150, ay + 420, "锤子皮肤");//打印购买价格位置
		settextstyle(20, 0, _T("宋体"));//设置字号、字体
		//画框
		fillrectangle(ax - 10, ay - 10, bx - 15, by);
		fillrectangle(ax + 295, ay - 10, bx + 290, by);
		outtextxy(ax, ay, "Purchase");//打印购买价格位置
		outtextxy(ax + 305, ay, "Purchase");//打印购买价格位置
		int i;//用i来对应选择的道具对于的序号，进行后续操作
		//画锤子
		/*putimage(hammerX1, hammerY1, &hammerOne);*/
		putimage(hammerX1, hammerY1, 180, 160, &hammerOnes, 0, 0, SRCAND);
		putimage(hammerX1, hammerY1, 180, 160, &hammerOne, 0, 0, SRCPAINT);
		putimage(hammerX2, hammerY2, 180, 160, &hammerTwo, 0, 0, SRCAND);
		putimage(hammerX2, hammerY2, 180, 160, &hammerTwos, 0, 0, SRCPAINT);
		

		//打印商店界面（返回图标，矩形，锤子）
		putimage(5, 5, &back);					//返回标志

		//putimage(, 0, &);//贴商店的返回图标
		//putimage(hammerX1, hammerY1,,hammmerLength &);//贴商店的锤子1图标
		//putimage(hammerX2, hammerY2, &);//贴商店的锤子2图标

		//展示金币
		char str[20];

		sprintf_s(str, "%06d", cp.money);//输出用户名和金币数

		outtextxy(mx - 80, my, "金币数：");//金币打印位置

		outtextxy(mx, my, str);//金币打印位置

		outtextxy(ax, ay - 80, "*****");//打印一号锤子价格位置

		outtextxy(ax, ay - 40, "金币：10");//打印一号锤子价格位置

		outtextxy(ax + 305, ay - 80, "*****");//打印二号锤子价格位置

		outtextxy(ax + 305, ay - 40, "金币：20");//打印二号锤子价格位置

		EndBatchDraw();
		MOUSEMSG msg;

		//返回，锤子皮肤字样及各种皮肤和对应的金额，游戏道具各种道具和对应的金币等数据

		HWND hWnd = GetHWnd();
		int hammerLength = 305; //购买框的间距

		if (MouseHit())
		{
			msg = GetMouseMsg();

			if (msg.uMsg == WM_LBUTTONDOWN)//按下时
			{
				i = 0;
				if (msg.x > 5 && msg.x < 90 && msg.y < 90 && msg.y>5)//exit
				{
					menu();
				}

				if (msg.x - (ax + (i + 1) * hammerLength) > 0)//判断落在哪个锤子的购买上
				{
					i++;
				}

				if (msg.x > ax + i * hammerLength && msg.x < (ax + 100 + i * hammerLength) && msg.y <by && msg.y>ay)//鼠标点击在x号道具上
				{
					if (cp.money >= goods[i])//判断金币是否足够
					{
						int is = MessageBox(hWnd, "购买成功", "提示", MB_OK);//把czPf变成数组，这样可以保存多个皮肤，表示已经购买成功

						if (is == IDOK) {


							cp.czPf[i] = 1;//hammer的种类
							printf("%d\n", cp.czPf[i]);
							printf("%d 0号皮肤%d 1号皮肤%d\n", cp.cczpf, cp.czPf[0], cp.czPf[1]);
							cp.money = cp.money - goods[i];//该角色金币数额减少
						}	//道具有时间再nong
						sprintf_s(str, "%06d", cp.money);//输出用户名和金币数

						outtextxy(mx, my, str);//金币打印位置

					}
					else
					{
						int it = MessageBox(hWnd, "金币不足", "提示", MB_OK);//提示窗口：金币不够。点击按钮自动返回商店界面

						if (it == IDOK) {
							shop();
						}
					}

				}
			}
		}
	}

}



void drawAlpha(IMAGE* picture, int  picture_x, int picture_y) //x为载入图片的X坐标，y为Y坐标
{

	// 变量初始化
	DWORD* dst = GetImageBuffer();    // GetImageBuffer()函数，用于获取绘图设备的显存指针，EASYX自带
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //获取picture的显存指针
	int picture_width = picture->getwidth(); //获取picture的宽度，EASYX自带
	int picture_height = picture->getheight(); //获取picture的高度，EASYX自带
	int graphWidth = getwidth();       //获取绘图区的宽度，EASYX自带
	int graphHeight = getheight();     //获取绘图区的高度，EASYX自带
	int dstX = 0;    //在显存里像素的角标

	// 实现透明贴图 公式： Cp=αp*FP+(1-αp)*BP ， 贝叶斯定理来进行点颜色的概率计算
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //在显存里像素的角标
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA是透明度
			int sr = ((src[srcX] & 0xff0000) >> 16); //获取RGB里的R
			int sg = ((src[srcX] & 0xff00) >> 8);   //G
			int sb = src[srcX] & 0xff;              //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //在显存里像素的角标
				int dr = ((dst[dstX] & 0xff0000) >> 16);
				int dg = ((dst[dstX] & 0xff00) >> 8);
				int db = dst[dstX] & 0xff;
				draw[dstX] = ((sr * sa / 255 + dr * (255 - sa) / 255) << 16)  //公式： Cp=αp*FP+(1-αp)*BP  ； αp=sa/255 , FP=sr , BP=dr
					| ((sg * sa / 255 + dg * (255 - sa) / 255) << 8)         //αp=sa/255 , FP=sg , BP=dg
					| (sb * sa / 255 + db * (255 - sa) / 255);              //αp=sa/255 , FP=sb , BP=db
			}
		}
	}
}

void setting()
{
	IMAGE SETTING;
	loadimage(&SETTING, "./setting.png", 720, 675, true);
	putimage(0, 0, &SETTING);
	switch (cp.cczpf)
	{
	case 0:
		setlinecolor(RED);
		rectangle(140, 126, 325, 305);
		setlinecolor(WHITE);
		rectangle(394, 126, 579, 308);
		break;
	case 1:
		setlinecolor(WHITE);
		rectangle(140, 126, 325, 305);
		setlinecolor(RED);
		rectangle(394, 126, 579, 308);
		
		break;
	}
	int flag = 1;
	HWND hWnd = GetHWnd();
	while (1)
	{
		MouseHit();
		MOUSEMSG msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN)//按下鼠标左键
		{
			if (msg.x >= 0 && msg.y >= 0 && msg.x <= 55 && msg.y <= 55)//
			{
				menu();
			}
			if (msg.x >= 135 && msg.y >= 123 && msg.x <= 320 && msg.y <= 300)flag = 1;//选第一个锤子
			if (msg.x >= 389 && msg.y >= 123 && msg.x <= 573 && msg.y <= 300)flag = 0;//选第二个锤子

			if (flag)//选第一个锤子
			{
				if (cp.czPf[0]== 1)//判断有没有这个锤子
				{
					int is = MessageBox(hWnd, "尊敬的玩家，您已成功穿戴该皮肤", "提示", MB_OK);
					if (is == IDOK) {

						cp.cczpf = 0;
						setlinecolor(RED);
						rectangle(140, 126, 325, 305);
						setlinecolor(WHITE);
						rectangle(394, 126, 579, 308);
					}
				}
				else
				{
					MessageBox(hWnd, "尊敬的玩家，您尚未购买该皮肤", "提示", MB_OK);
				}
				
				
			}
			else
			{
				if (cp.czPf[1] == 1)
				{
					int is = MessageBox(hWnd, "尊敬的玩家，您已成功穿戴该皮肤", "提示", MB_OK);
					if (is == IDOK) {
						cp.cczpf = 1;
						setlinecolor(WHITE);
						rectangle(140, 126, 325, 305);
						setlinecolor(RED);
						rectangle(394, 126, 579, 308);
					}
				}
				else
				{
					MessageBox(hWnd, "尊敬的玩家，您尚未购买该皮肤", "提示", MB_OK);
				}
				
			}
		}
	}
}


void rankingList()
{
	BeginBatchDraw();
	setbkcolor(WHITE);
	cleardevice();

	IMAGE back, rankingList, rank, name, score;

	//打印排行榜
	loadimage(&back, "./back.png", 60, 60);
	putimage(0, 0, &back);

	//打印排名
	loadimage(&rankingList, "./rankingList.png");
	putimage(271, 15, &rankingList);
	loadimage(&rank, "./rank.png");
	putimage(35, 164, &rank);
	putimage(390, 164, &rank);

	//打印用户名
	loadimage(&name, "./name.png");
	putimage(121, 158, &name);
	putimage(478, 158, &name);

	//打印积分
	loadimage(&score, "./score.png");
	putimage(230, 160, &score);
	putimage(587, 160, &score);

	for (int i = 0; i < PNUM; i++)
	{
		int flag = 0;//控制第五行换列
		int m = 0;
		if (i > 4)
		{
			flag = 1;
			m = 5;
		}

		//排名
		char rank[20];
		sprintf_s(rank, "%d", i+1);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "仿宋");
		outtextxy(45 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), rank);

		//名字
		char name[20];
		strcpy_s(name, peoList.peo[i].name);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "仿宋");
		outtextxy(135 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), name);

		//积分
		char str[20];
		sprintf_s(str, "%04d", peoList.peo[i].maxScore);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "仿宋");
		outtextxy(270 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), str);
		EndBatchDraw();
	}
	while (1)
	{
		if (MouseHit())
		{
			MOUSEMSG msg = GetMouseMsg();

			if (msg.uMsg == WM_LBUTTONDOWN)//按下时
			{
			
				if (msg.x > 5 && msg.x < 90 && msg.y < 90 && msg.y>5)//exit
				{
					menu();
				}
			}
		}
	}

	
}

void end()
{
	people* pe = NULL;
	IMAGE over;
	IMAGE gis;
	IMAGE backguound;
	MOUSEMSG msg;
	loadimage(&over, "./结束.png", 200, 150);
	loadimage(&gis, "./返回主菜单.png", 200, 150);
	loadimage(&backguound, "./设置背景.png");
	//loadimage(&backguound,  L"./map_one.jpg");//要调整图片大小
	//drawAlpha(&backguound,0, 0 );//背景
	drawAlpha(&backguound, 0, 0);
	drawAlpha(&gis, 140, 230);
	drawAlpha(&over, 360, 230);
	while (1)
	{
		MouseHit();
		MOUSEMSG msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN)//按下鼠标左键
		{
			if (msg.x >= 140 && msg.y >= 230 && msg.x <= 340 && msg.y <= 380)//继续游戏
			{
				
				menu();
			}
			if (msg.x >= 360 && msg.y >= 230 && msg.x <= 560 && msg.y <= 380)//退出游戏
			{
				
				exit(1); //退出游戏
			}
		}
	}
}


LRESULT CALLBACK CBHookProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	HWND hwnd = (HWND)wParam;
	if (nCode == HCBT_ACTIVATE)
	{
		SetDlgItemText(hwnd, IDYES, "继续游戏");//改一下字符集
		SetDlgItemText(hwnd, IDNO, "退出游戏");
		//可根据自己需求修改其他按钮
	}
	return 0;
}
int MyMessageBox(HWND hwnd, TCHAR* szText, TCHAR* szCaption, UINT uType)
{
	int ret;
	HHOOK hHook = SetWindowsHookEx(WH_CBT, CBHookProc, nullptr, GetCurrentThreadId());
	ret = MessageBoxEx(hwnd, szText, szCaption, uType, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US));
	UnhookWindowsHookEx(hHook);
	return ret;
}
LRESULT CALLBACK CBHookProc1(int nCode, WPARAM wParam, LPARAM lParam)
{
	HWND hwnd = (HWND)wParam;
	if (nCode == HCBT_ACTIVATE)
	{
		SetDlgItemText(hwnd, IDYES, "再来一局");//改一下字符集
		SetDlgItemText(hwnd, IDNO, "退出游戏");
		//可根据自己需求修改其他按钮
	}
	return 0;
}
int MyMessageBox1(HWND hwnd, TCHAR* szText, TCHAR* szCaption, UINT uType)
{
	int ret;
	HHOOK hHook = SetWindowsHookEx(WH_CBT, CBHookProc1, nullptr, GetCurrentThreadId());
	ret = MessageBoxEx(hwnd, szText, szCaption, uType, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US));
	UnhookWindowsHookEx(hHook);
	return ret;
}

void compareData()
{
	if (cp.maxScore <= cp.score)
	{
		cp.maxScore = cp.score;
	}
	for (int i = 0; i < PNUM; i++)
	{
		int ret = strcmp(cp.name, peoList.peo[i].name);
		if (ret == 0)
		{
			peoList.peo[i].maxScore = cp.maxScore;
			peoList.peo[i].score = cp.score;
			peoList.peo[i].money = cp.money;
			peoList.peo[i].clife = cp.clife;

			return;
		}

	}
	
}

void over()
{
	compareData();
	HWND hnd = GetHWnd();
	gameChoose = 1;
	//设置窗口标题
	SetWindowText(hnd, "打地鼠游戏");
	char arr2[] = "结算界面";
	char arr1[] = "游戏已结束";
	int isYes = MyMessageBox1(hnd, arr1, arr2, MB_YESNO);
	
	if (isYes == IDYES)
	{	
		lifeBar_num = 3;
		
		musicSwitch = 1;
		Sleep(100);
		game();
	}
	else if (isYes == IDNO)
	{
		musicSwitch = 0;
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
		menu();
	}
}

void pause()
{
	//地鼠不动
	key = 0;//钥匙关闭：变为0
	srand((unsigned int)time(NULL));//主函数
	HWND hnd = GetHWnd();
	
	KillTimer(hnd, 10086);
	//设置窗口标题
	SetWindowText(hnd, "打地鼠游戏");
	char arr2[] = "暂停";
	char arr1[] = "游戏已经暂停";
	int isYes = MyMessageBox(hnd, arr1, arr2, MB_YESNO);
	
	if (isYes == IDYES)
	{
		SetTimer(hnd, 10086, 20, (TIMERPROC)timerProc);
		key = 1;//敲击继续，地鼠移动钥匙打开

	}
	else if (isYes == IDNO)
	{
		gameChoose = 1;
		cp.clife = lifeBar_num;
		musicSwitch = 0;
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
		compareData();
		cleardevice();
		//writeData(&peoList);//记录数据
		menu();//返回主菜单
	}

}

int main()
{
	HWND hWnd = initgraph(720, 675);//初始化窗口并获得句柄

	
	
	initInfoPeo();
	loadRes();
	menu();


	return 0;
}


