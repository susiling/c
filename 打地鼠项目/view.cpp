#include "view.h"
#include <graphics.h>
#include <stdio.h>

IMAGE READ, RETURN, CONTINUE, LIFEBAR1, LIFEBAR2;//������Ϸ
IMAGE shopBack, back, hammerOne, hammerTwo, hammerOnes, hammerTwos;//�̵�

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


////������������
struct Gopher ds[NUM];


//����ʵ��
struct hammer cz;

//��ɫʵ��
struct infoPeo peoList;

//��ǰ���
people cp;

int choosem = 1,pechoose = 0;
int key;
int r;
void loadRes()
{
	
	//game
	loadimage(&black, "./�ز�/game/black.jpg");
	loadimage(&Gold, "./�ز�/game/Gold.png");
	loadimage(&IntegralHammer, "./�ز�/game/IntegralHammer.png");
	loadimage(&lifeBar, "./�ز�/game/lifeBar.jpg");
	loadimage(&lifeBar_black, "./�ز�/game/lifeBar_black.jpg");
	loadimage(&music_up, "./�ز�/game/music_up.png");
	loadimage(&music_down, "./�ز�/game/music_down.png");
	loadimage(&soundeffect_down, "./�ز�/game/soundeffect_down.png");
	loadimage(&soundeffect_up, "./�ز�/game/soundeffect_up.png");
	loadimage(&timeout, "./�ز�/game/timeout.png");
	//gopher
	loadimage(&one, "./�ز�/gorher/one.jpg", 120, 110);
	loadimage(&one_black, "./�ز�/gorher/one_black.jpg", 120, 110);
	loadimage(&one_d, "./�ز�/gorher/one_d.jpg", 122, 101);
	loadimage(&one_dblack, "./�ز�/gorher/one_dblack.jpg", 122, 101);
	loadimage(&two, "./�ز�/gorher/two.jpg", 120, 110);
	loadimage(&two_black, "./�ز�/gorher/two_black.jpg", 120, 110);
	loadimage(&two_d, "./�ز�/gorher/two_d.jpg", 122, 101);
	loadimage(&two_dblack, "./�ز�/gorher/two_dblack.jpg", 122, 101);
	//hammer
	loadimage(&four_dn, "./�ز�/hammer/four_dn.jpg",cz.w,cz.h,true);
	loadimage(&four_dnBlack, "./�ز�/hammer/four_dnBlack.jpg", cz.w, cz.h, true);
	loadimage(&four_up, "./�ز�/hammer/four_up.jpg", cz.w, cz.h, true);
	loadimage(&four_upBlack, "./�ز�/hammer/four_upBlack.jpg", cz.w, cz.h, true);
	loadimage(&three_dn, "./�ز�/hammer/three_dn.jpg", cz.w, cz.h, true);
	loadimage(&three_dnBlack, "./�ز�/hammer/three_dnBlack.jpg", cz.w, cz.h, true);
	loadimage(&three_up, "./�ز�/hammer/three_up.jpg", cz.w, cz.h, true);
	loadimage(&three_upBlack, "./�ز�/hammer/three_upBlack.jpg",cz.w, cz.h, true);
	//map
	loadimage(&choose, "./�ز�/map/choose.jpg");
	loadimage(&choose_black, "./�ز�/map/choose_black.jpg");
	loadimage(&map_one, "./�ز�/map/map_one.jpg");
	loadimage(&map_three, "./�ز�/map/map_three.jpg");
	loadimage(&map_two, "./�ز�/map/map_two.jpg");
	loadimage(&Choose, "./�ز�/map/mapChoose.jpg");
	loadimage(&one_1, "./�ز�/map/one_1.jpg");
	loadimage(&one_2, "./�ز�/map/one_2.jpg");
	loadimage(&one_3, "./�ز�/map/one_3.jpg");
	loadimage(&one_4, "./�ز�/map/one_4.jpg");
	loadimage(&three_1, "./�ز�/map/three_1.jpg");
	loadimage(&three_2, "./�ز�/map/three_2.jpg");
	loadimage(&three_3, "./�ز�/map/three_3.jpg");
	loadimage(&three_4, "./�ز�/map/three_4.jpg");
	loadimage(&two_1, "./�ز�/map/two_1.jpg");
	loadimage(&two_2, "./�ز�/map/two_2.jpg");
	loadimage(&two_3, "./�ز�/map/two_3.jpg");
	loadimage(&two_4, "./�ز�/map/two_4.jpg");
	/*loadimage(&three_1, "./�ز�/map/three_1.jpg", 720, 276, true);
	loadimage(&three_2, "./�ز�/map/three_2.jpg", 720, 407, true);
	loadimage(&three_3, "./�ز�/map/three_3.jpg", 720, 534, true);
	loadimage(&three_4, "./�ز�/map/three_4.jpg", 720, 675, true);
	loadimage(&two_1, "./�ز�/map/two_1.jpg", 720, 276, true);
	loadimage(&two_2, "./�ز�/map/two_2.jpg", 720, 407, true);
	loadimage(&two_3, "./�ز�/map/two_3.jpg", 720, 534, true);
	loadimage(&two_4, "./�ز�/map/two_4.jpg", 720, 675, true);*/
	//menu
	loadimage(&Gold0, "./�ز�/menu/Gold0.png");
	loadimage(&largeIcon, "./�ز�/menu/largeIcon.png");
	loadimage(&MainMenuCoins, "./�ز�/menu/MainMenuCoins.png");
	loadimage(&modeSelector, "./�ز�/menu/modeSelector.png");
	loadimage(&ProducedByTornado, "./�ز�/menu/ProducedByTornado.png");
	loadimage(&quit, "./�ز�/menu/quit.png");
	loadimage(&rankings, "./�ز�/menu/rankings.png");
	loadimage(&readFileSelection, "./�ز�/menu/readFileSelection.png");
	loadimage(&return0, "./�ز�/menu/return0.png");
	loadimage(&SetUp, "./�ز�/menu/SetUp.png");
	loadimage(&store, "./�ز�/menu/store.png");

}

//������Ʒ�۸�
int goods[2] = { 10,20 };
int gameChoose = 1;//ѡ��ʼ��Ϸ���Ǽ�����Ϸ
//
int lifeBar_num;//Ѫ������ʼΪ3
int musicSwitch = 1;//�������ֿ���������ͼ�����ȡ��Ϊ�´ο������ֵĿ���;
void initInfoPeo()
{
	for (int i = 0; i < NUM; i++)
	{
		peoList.peo[i].money = 0;
		peoList.peo[i].score = 0;
		peoList.peo[i].maxScore = 0;
	}
	char name[] = "�Ϲ�";
	strcpy_s(peoList.peo[0].name, name);
	char name1[] = "deepСѧ��";
	strcpy_s(peoList.peo[1].name, name1);
	char name2[] = "����";
	strcpy_s(peoList.peo[2].name, name2);
	char name3[] = "����";
	strcpy_s(peoList.peo[3].name, name3);
	char name4[] = "���ȿ���";
	strcpy_s(peoList.peo[4].name, name4);
	char name5[] = "��˾��";
	strcpy_s(peoList.peo[5].name, name5);
	char name6[] = "��";
	strcpy_s(peoList.peo[6].name, name6);
	char name7[] = "Ҷ�ѕN";
	strcpy_s(peoList.peo[7].name, name7);
	char name8[] = "52Hertz";
	strcpy_s(peoList.peo[8].name, name8);
	char name9[] = "Desolation";
	strcpy_s(peoList.peo[9].name, name9);
	peoList.numData = 0;
	//readData(&peoList);//������
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
	

	loadimage(&img1, "./�ز�/menu/1.jpg", 70, 179);
	loadimage(&img2, "./�ز�/menu/2.jpg", 236, 462);
	loadimage(&img3, "./�ز�/menu/3.jpg", 160, 46);
	loadimage(&img4, "./�ز�/menu/4.jpg", 62, 62);
	loadimage(&img5, "./�ز�/menu/5.jpg", 61, 58);

	
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
	settextstyle(25, 0, "����");
	outtextxy(60, 10, str);


	EndBatchDraw();
	/*for (int i = 0; i < 10; i++)
	{
		printf("%s score = %d maxScore = %d clife = %d\n", peoList.peo[i].name, peoList.peo[i].score, peoList.peo[i].maxScore,
			peoList.peo[i].clife);
		
		
	}printf("��ǰ���Ϊ %s score = %d maxScore = %d clife = %d\n", cp.name, cp.score, cp.maxScore,cp.clife);
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
					selectCharacter();//��ת��ѡ���ɫ����//��ɫѡ��
					
				}
				
				if (msg.x > 658 && msg.x < 720 && msg.y>613 && msg.y < 675)
				{
					setting();//���ý���Ľ���
				}
			
				if (msg.x > 276 && msg.x < 418 && msg.y>283 && msg.y < 328)
				{
					game();//��ʼ��Ϸ�Ľ���
					
				}
				if (msg.x > 659 && msg.x < 720 && msg.y>0 && msg.y < 58)
				{
					end();//�˳���ť
				}
				if (msg.x > 276 && msg.x < 418 && msg.y>359 && msg.y < 405)
				{
					cp = continueGame();//������Ϸ����
					game();
				}
				if (msg.x > 276 && msg.x < 418 && msg.y>435 && msg.y < 479)
				{
					mapChoose();//��ͼѡ�����
				
				}
				if (msg.x > 3 && msg.x < 51 && msg.y>131 && msg.y < 174)
				{
					sort(&peoList);
					rankingList();//���а�//����
				}
				if (msg.x > 3 && msg.x < 51 && msg.y>59 && msg.y < 106)
				{
					shop();//װ��
				}

			}
		}
	}

}

void pfselectCharacter()//��װselectCharacter()����Ĵ�ӡ����
{
	setbkcolor(WHITE);
	cleardevice();

	IMAGE SELECT, back;

	loadimage(&back, "./back.png", 60, 60);
	putimage(0, 0, &back);
	loadimage(&SELECT, "./pe_selection.png", 200, 100);
	putimage(260, 40, &SELECT);//��ѡ���ɫͼƬ��Դ



	for (int i = 0; i < PNUM; i++)
	{
		int flag = 0;//���Ƶ����л���
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
		settextstyle(25, 0, "����");
		outtextxy(131 + flag * 304, 147 + ((i + 1 - m) * ROLE_DISTANSE), name);
		//setfillcolor(BLACK);
		//fillrectangle(131 + flag * 304,347, 147 + ((i + 1 - m) * ROLE_DISTANSE),60);
	}
}
void selectCharacter()
{
	/*�����ˣ�������
	���ܣ�
		��ӡѡ���ɫ���棬���ݰ�������ɫͼ�꣬���ѡ���Ӧ��ɫ�����ظý�ɫ�ṹ��*/
	
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
			if (msg.uMsg == WM_LBUTTONDOWN)//����ʱ
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
				if (msg.x >= 0 && msg.x <= 55 && msg.y >= 0 && msg.y <= 55) //���ؼ�  ����������˵�
				{
					menu();//���˵�����
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
	
	/*��������
	����ֵ��people ���ظý�ɫ*/
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

	if (lifeBar_num == 0)//˵��ûѪ��
	{
		return 1;
	}
	return 0;
}

void game()
{


	if (gameChoose == 1)
	{
		lifeBar_num = 3;//����Ѫ��
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
			lifeBar_num = 3;//����Ѫ��
		}
	}
		
	//ÿ�ν������ø��˵÷�
	
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

	initGame();
	

	//��ʼ�����ֵ
	srand(time(NULL));//������
	int r = rand() % NUM;//������
	
	HWND hWnd = GetHWnd();
	SetTimer(hWnd, 10086, 20, (TIMERPROC)timerProc);//������֡���ʧ�������ƶ�  ��ʱ��
	

	while (true)
	{
	
		BeginBatchDraw();
		
		drawGame();//����Ϸ���� ��ͼ��Ѫ������������ͣ���������Ӻͱ�����񣩣����ߣ����ӣ���ң��÷�--��
	
		hammerHit();
		
		if (isOver())//ÿ��ѭ���������ж���Ϸ�Ƿ����
		{
			initGame();
			int k = KillTimer(hWnd, 10086);
			
			over();//��������--��
			
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
		//����
		char name[20];
		strcpy_s(name, peoList.peo[i].name);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(28, 0, "����");//�����ֺš�����
		outtextxy(125, 120 + (i * ROLE_DISTANSE), name);

		setlinecolor(BLACK);
		line(125, 162 + (i * ROLE_DISTANSE), 660, 162 + (i * ROLE_DISTANSE));
		//����
		char str[20];
		sprintf_s(str, "%06d", peoList.peo[i].score);
		outtextxy(340, 120 + (i * ROLE_DISTANSE), str);

		//Ѫ��
		loadimage(&LIFEBAR1, ".\\�ز�/game/lifeBar.jpg", 40, 40, true);
		loadimage(&LIFEBAR2, ".\\�ز�/game/lifeBar_black.jpg", 40, 40, true);

		for (int j = 0; j < peoList.peo[i].clife; j++)
		{
		
			putimage(500 + (j * 40), 120 + (i * ROLE_DISTANSE), &LIFEBAR2, SRCAND);//Ѫ�� 
			putimage(500 + (j * 40), 120 + (i * ROLE_DISTANSE), &LIFEBAR1, SRCPAINT);
		}

	}
	EndBatchDraw();
	//�ж����λ��
	MOUSEMSG msg;
	while (true)
	{
		while (MouseHit())
		{
			msg = GetMouseMsg();
			if (msg.uMsg == WM_LBUTTONDOWN)//����ʱ
			{
				if (msg.x >= 0 && msg.x <= 55 && msg.y >= 0 && msg.y <= 55)//�ڷ�����
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
void mapChoose() //��ͼƤ��ѡ��  ����ѡ���Ƥ����� ����Ƥ��
{
	
	putimage(0, 0, &Choose);//ѡ�����
	//��ʾѡ�����ŵ�ͼ��Ĭ�ϵ�һ��
	switch (choosem)//ѡ��Ƥ��֮ǰչʾ��ǰƤ��ʱ����
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
				if (msg.x >= 613 && msg.x <= 689 && msg.y >= 575 && msg.y <= 648) //���ؼ�  ����������˵�
				{
					menu();//���˵�����
					
				}
				else
				{
					if (msg.x >= 46 && msg.x <= 235 && msg.y >= 305 && msg.y <= 487)//ѡ���һ�ŵ�ͼ
					{
						cleardevice();
						putimage(0, 0, &Choose);
						putimage(117, 492, &choose, SRCAND);
						putimage(117, 492, &choose_black, SRCPAINT);//��ѡ���Ƥ�������ӡ��ͼƬ
						choosem = 1;
					}
					if (msg.x >= 269 && msg.x <= 463 && msg.y >= 305 && msg.y <= 487)//ѡ��ڶ��ŵ�ͼ
					{
						cleardevice();
						putimage(0, 0, &Choose);
						putimage(341, 495, &choose, SRCAND);
						putimage(341, 495, &choose_black, SRCPAINT);
						choosem = 2;

					}
					if (msg.x >= 495 && msg.x <= 688 && msg.y >= 305 && msg.y <= 487)//ѡ������ŵ�ͼ
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
	//����ͬ�ĵ�ͼ�����������ǵ���Ƥ��
	switch (choosem)
	{
	case 1:
		putimage(0, 0, &one_1);//��һ���ͼ
		//��һ�е���ֻ����
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
		putimage(0, 276, &one_2);//�ڶ����ͼ
		//�ڶ��е���ֻ����
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

		putimage(0, 407, &one_3);//�������ͼ
		//�����е���ֻ����
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
		putimage(0, 534, &one_4);//���Ŀ��ͼ
		break;
	case 2:
		putimage(0, 0, &two_1);//��һ���ͼ
		//��һ�е���ֻ����
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
		putimage(0, 274, &two_2);//�ڶ����ͼ
		//�ڶ��е���ֻ����
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

		putimage(0, 402, &two_3);//�������ͼ
		//�����е���ֻ����
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
		putimage(0, 531, &two_4);//���Ŀ��ͼ
		break;
	case 3:
		putimage(0, 0, &three_1);//��һ���ͼ
		//��һ�е���ֻ����
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
		putimage(0, 272, &three_2);//�ڶ����ͼ
		//�ڶ��е���ֻ����
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

		putimage(0, 400, &three_3);//�������ͼ
		//�����е���ֻ����
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
		putimage(0, 529, &three_4);//���Ŀ��ͼ
		break;

	}

	//������Ƥ��
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
	//Ѫ��
	for (int i = 0; i < lifeBar_num; i++)
	{
		putimage(250 + (i * 100), 30, &lifeBar_black, SRCAND);//Ѫ�� 
		putimage(250 + (i * 100), 30, &lifeBar, SRCPAINT);//Ѫ�� 

	}
	
	//�÷�(67,28)�ͽ��(67,118)��ֵ
	settextcolor(BLACK);
	char str1[20];
	sprintf_s(str1, "%06d", cp.score);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(25, 0, "����");
	outtextxy(67, 28, str1);

	char str2[20];
	sprintf_s(str2, "%06d", cp.money);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(25, 0, "����");
	
	outtextxy(67, 118, str2);
	//��Чͼ��
	if (musicSwitch == 0)
	{
		putimage(550, 16, &black, SRCPAINT);
		putimage(550, 16, &music_up, SRCAND);//��������ͼƬ
	}
	else
	{
	
		putimage(550, 16, &black, SRCPAINT);
		putimage(550, 16, &music_down, SRCAND);//�ر�����ͼƬ--�ÿ���ǰ�����ͼ����
	}



}

void initGame()
{
	//����x,y���ꡢ��ߣ���ȣ���ʼ״̬��ʼ��
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
	
	//����x,y���ꡢ�߶ȣ���ȣ���ʼ״̬��ʼ��
	cz.x = HAMMER_BEGIN_X;
	cz.y = HAMMER_BEGIN_Y;
	cz.w = HAMMER_WIDTH;
	cz.h = HAMMER_HEIGHT;
	cz.isDown = 0;

	
}

void shop()
{
	//����ͼƬ
	loadimage(&shopBack, "./�ز�/menu/background.png", 720, 675);

	loadimage(&back, "./�ز�/menu/return0.png", 70, 70);

	loadimage(&hammerOne, ".\\41.png", 180, 160, true);

	loadimage(&hammerTwo, ".\\11.png", 180, 160, true);

	loadimage(&hammerOnes, ".\\three_upBlack.jpg", 180, 160, true);

	loadimage(&hammerTwos, ".\\four_upBlack.jpg", 180, 160, true);
	while (true) {
		BeginBatchDraw();
		/*���ñ����������������ɫ*/
		putimage(0, 0, &shopBack);
		settextcolor(BLACK);
		setlinecolor(BLACK);
		setbkmode(TRANSPARENT);//�������屳��
		//settextstyle(40, 0, _T("����"),90,0,0,false,false,false);//�����ֺš�����
		outtextxy(ax - 150, ay + 420, "����Ƥ��");//��ӡ����۸�λ��
		settextstyle(20, 0, _T("����"));//�����ֺš�����
		//����
		fillrectangle(ax - 10, ay - 10, bx - 15, by);
		fillrectangle(ax + 295, ay - 10, bx + 290, by);
		outtextxy(ax, ay, "Purchase");//��ӡ����۸�λ��
		outtextxy(ax + 305, ay, "Purchase");//��ӡ����۸�λ��
		int i;//��i����Ӧѡ��ĵ��߶��ڵ���ţ����к�������
		//������
		/*putimage(hammerX1, hammerY1, &hammerOne);*/
		putimage(hammerX1, hammerY1, 180, 160, &hammerOnes, 0, 0, SRCAND);
		putimage(hammerX1, hammerY1, 180, 160, &hammerOne, 0, 0, SRCPAINT);
		putimage(hammerX2, hammerY2, 180, 160, &hammerTwo, 0, 0, SRCAND);
		putimage(hammerX2, hammerY2, 180, 160, &hammerTwos, 0, 0, SRCPAINT);
		

		//��ӡ�̵���棨����ͼ�꣬���Σ����ӣ�
		putimage(5, 5, &back);					//���ر�־

		//putimage(, 0, &);//���̵�ķ���ͼ��
		//putimage(hammerX1, hammerY1,,hammmerLength &);//���̵�Ĵ���1ͼ��
		//putimage(hammerX2, hammerY2, &);//���̵�Ĵ���2ͼ��

		//չʾ���
		char str[20];

		sprintf_s(str, "%06d", cp.money);//����û����ͽ����

		outtextxy(mx - 80, my, "�������");//��Ҵ�ӡλ��

		outtextxy(mx, my, str);//��Ҵ�ӡλ��

		outtextxy(ax, ay - 80, "*****");//��ӡһ�Ŵ��Ӽ۸�λ��

		outtextxy(ax, ay - 40, "��ң�10");//��ӡһ�Ŵ��Ӽ۸�λ��

		outtextxy(ax + 305, ay - 80, "*****");//��ӡ���Ŵ��Ӽ۸�λ��

		outtextxy(ax + 305, ay - 40, "��ң�20");//��ӡ���Ŵ��Ӽ۸�λ��

		EndBatchDraw();
		MOUSEMSG msg;

		//���أ�����Ƥ������������Ƥ���Ͷ�Ӧ�Ľ���Ϸ���߸��ֵ��ߺͶ�Ӧ�Ľ�ҵ�����

		HWND hWnd = GetHWnd();
		int hammerLength = 305; //�����ļ��

		if (MouseHit())
		{
			msg = GetMouseMsg();

			if (msg.uMsg == WM_LBUTTONDOWN)//����ʱ
			{
				i = 0;
				if (msg.x > 5 && msg.x < 90 && msg.y < 90 && msg.y>5)//exit
				{
					menu();
				}

				if (msg.x - (ax + (i + 1) * hammerLength) > 0)//�ж������ĸ����ӵĹ�����
				{
					i++;
				}

				if (msg.x > ax + i * hammerLength && msg.x < (ax + 100 + i * hammerLength) && msg.y <by && msg.y>ay)//�������x�ŵ�����
				{
					if (cp.money >= goods[i])//�жϽ���Ƿ��㹻
					{
						int is = MessageBox(hWnd, "����ɹ�", "��ʾ", MB_OK);//��czPf������飬�������Ա�����Ƥ������ʾ�Ѿ�����ɹ�

						if (is == IDOK) {


							cp.czPf[i] = 1;//hammer������
							printf("%d\n", cp.czPf[i]);
							printf("%d 0��Ƥ��%d 1��Ƥ��%d\n", cp.cczpf, cp.czPf[0], cp.czPf[1]);
							cp.money = cp.money - goods[i];//�ý�ɫ����������
						}	//������ʱ����nong
						sprintf_s(str, "%06d", cp.money);//����û����ͽ����

						outtextxy(mx, my, str);//��Ҵ�ӡλ��

					}
					else
					{
						int it = MessageBox(hWnd, "��Ҳ���", "��ʾ", MB_OK);//��ʾ���ڣ���Ҳ����������ť�Զ������̵����

						if (it == IDOK) {
							shop();
						}
					}

				}
			}
		}
	}

}



void drawAlpha(IMAGE* picture, int  picture_x, int picture_y) //xΪ����ͼƬ��X���꣬yΪY����
{

	// ������ʼ��
	DWORD* dst = GetImageBuffer();    // GetImageBuffer()���������ڻ�ȡ��ͼ�豸���Դ�ָ�룬EASYX�Դ�
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //��ȡpicture���Դ�ָ��
	int picture_width = picture->getwidth(); //��ȡpicture�Ŀ�ȣ�EASYX�Դ�
	int picture_height = picture->getheight(); //��ȡpicture�ĸ߶ȣ�EASYX�Դ�
	int graphWidth = getwidth();       //��ȡ��ͼ���Ŀ�ȣ�EASYX�Դ�
	int graphHeight = getheight();     //��ȡ��ͼ���ĸ߶ȣ�EASYX�Դ�
	int dstX = 0;    //���Դ������صĽǱ�

	// ʵ��͸����ͼ ��ʽ�� Cp=��p*FP+(1-��p)*BP �� ��Ҷ˹���������е���ɫ�ĸ��ʼ���
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //���Դ������صĽǱ�
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA��͸����
			int sr = ((src[srcX] & 0xff0000) >> 16); //��ȡRGB���R
			int sg = ((src[srcX] & 0xff00) >> 8);   //G
			int sb = src[srcX] & 0xff;              //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //���Դ������صĽǱ�
				int dr = ((dst[dstX] & 0xff0000) >> 16);
				int dg = ((dst[dstX] & 0xff00) >> 8);
				int db = dst[dstX] & 0xff;
				draw[dstX] = ((sr * sa / 255 + dr * (255 - sa) / 255) << 16)  //��ʽ�� Cp=��p*FP+(1-��p)*BP  �� ��p=sa/255 , FP=sr , BP=dr
					| ((sg * sa / 255 + dg * (255 - sa) / 255) << 8)         //��p=sa/255 , FP=sg , BP=dg
					| (sb * sa / 255 + db * (255 - sa) / 255);              //��p=sa/255 , FP=sb , BP=db
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
		if (msg.uMsg == WM_LBUTTONDOWN)//����������
		{
			if (msg.x >= 0 && msg.y >= 0 && msg.x <= 55 && msg.y <= 55)//
			{
				menu();
			}
			if (msg.x >= 135 && msg.y >= 123 && msg.x <= 320 && msg.y <= 300)flag = 1;//ѡ��һ������
			if (msg.x >= 389 && msg.y >= 123 && msg.x <= 573 && msg.y <= 300)flag = 0;//ѡ�ڶ�������

			if (flag)//ѡ��һ������
			{
				if (cp.czPf[0]== 1)//�ж���û���������
				{
					int is = MessageBox(hWnd, "�𾴵���ң����ѳɹ�������Ƥ��", "��ʾ", MB_OK);
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
					MessageBox(hWnd, "�𾴵���ң�����δ�����Ƥ��", "��ʾ", MB_OK);
				}
				
				
			}
			else
			{
				if (cp.czPf[1] == 1)
				{
					int is = MessageBox(hWnd, "�𾴵���ң����ѳɹ�������Ƥ��", "��ʾ", MB_OK);
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
					MessageBox(hWnd, "�𾴵���ң�����δ�����Ƥ��", "��ʾ", MB_OK);
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

	//��ӡ���а�
	loadimage(&back, "./back.png", 60, 60);
	putimage(0, 0, &back);

	//��ӡ����
	loadimage(&rankingList, "./rankingList.png");
	putimage(271, 15, &rankingList);
	loadimage(&rank, "./rank.png");
	putimage(35, 164, &rank);
	putimage(390, 164, &rank);

	//��ӡ�û���
	loadimage(&name, "./name.png");
	putimage(121, 158, &name);
	putimage(478, 158, &name);

	//��ӡ����
	loadimage(&score, "./score.png");
	putimage(230, 160, &score);
	putimage(587, 160, &score);

	for (int i = 0; i < PNUM; i++)
	{
		int flag = 0;//���Ƶ����л���
		int m = 0;
		if (i > 4)
		{
			flag = 1;
			m = 5;
		}

		//����
		char rank[20];
		sprintf_s(rank, "%d", i+1);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "����");
		outtextxy(45 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), rank);

		//����
		char name[20];
		strcpy_s(name, peoList.peo[i].name);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "����");
		outtextxy(135 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), name);

		//����
		char str[20];
		sprintf_s(str, "%04d", peoList.peo[i].maxScore);
		settextcolor(BLACK);
		setbkmode(TRANSPARENT);
		settextstyle(25, 0, "����");
		outtextxy(270 + flag * 360, 210 + ((i + 1 - m) * ROLE_DISTANSE), str);
		EndBatchDraw();
	}
	while (1)
	{
		if (MouseHit())
		{
			MOUSEMSG msg = GetMouseMsg();

			if (msg.uMsg == WM_LBUTTONDOWN)//����ʱ
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
	loadimage(&over, "./����.png", 200, 150);
	loadimage(&gis, "./�������˵�.png", 200, 150);
	loadimage(&backguound, "./���ñ���.png");
	//loadimage(&backguound,  L"./map_one.jpg");//Ҫ����ͼƬ��С
	//drawAlpha(&backguound,0, 0 );//����
	drawAlpha(&backguound, 0, 0);
	drawAlpha(&gis, 140, 230);
	drawAlpha(&over, 360, 230);
	while (1)
	{
		MouseHit();
		MOUSEMSG msg = GetMouseMsg();
		if (msg.uMsg == WM_LBUTTONDOWN)//����������
		{
			if (msg.x >= 140 && msg.y >= 230 && msg.x <= 340 && msg.y <= 380)//������Ϸ
			{
				
				menu();
			}
			if (msg.x >= 360 && msg.y >= 230 && msg.x <= 560 && msg.y <= 380)//�˳���Ϸ
			{
				
				exit(1); //�˳���Ϸ
			}
		}
	}
}


LRESULT CALLBACK CBHookProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	HWND hwnd = (HWND)wParam;
	if (nCode == HCBT_ACTIVATE)
	{
		SetDlgItemText(hwnd, IDYES, "������Ϸ");//��һ���ַ���
		SetDlgItemText(hwnd, IDNO, "�˳���Ϸ");
		//�ɸ����Լ������޸�������ť
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
		SetDlgItemText(hwnd, IDYES, "����һ��");//��һ���ַ���
		SetDlgItemText(hwnd, IDNO, "�˳���Ϸ");
		//�ɸ����Լ������޸�������ť
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
	//���ô��ڱ���
	SetWindowText(hnd, "�������Ϸ");
	char arr2[] = "�������";
	char arr1[] = "��Ϸ�ѽ���";
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
			musicSwitch = 1;//Ϊ�´ε����׼��--Ϊ���뿪��
			Music(0);
		}
		//��������
		else
		{
			musicSwitch = 0;//Ϊ�´ε����׼��--Ϊ����ر�
			Music(1);
		}
		menu();
	}
}

void pause()
{
	//���󲻶�
	key = 0;//Կ�׹رգ���Ϊ0
	srand((unsigned int)time(NULL));//������
	HWND hnd = GetHWnd();
	
	KillTimer(hnd, 10086);
	//���ô��ڱ���
	SetWindowText(hnd, "�������Ϸ");
	char arr2[] = "��ͣ";
	char arr1[] = "��Ϸ�Ѿ���ͣ";
	int isYes = MyMessageBox(hnd, arr1, arr2, MB_YESNO);
	
	if (isYes == IDYES)
	{
		SetTimer(hnd, 10086, 20, (TIMERPROC)timerProc);
		key = 1;//�û������������ƶ�Կ�״�

	}
	else if (isYes == IDNO)
	{
		gameChoose = 1;
		cp.clife = lifeBar_num;
		musicSwitch = 0;
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
		compareData();
		cleardevice();
		//writeData(&peoList);//��¼����
		menu();//�������˵�
	}

}

int main()
{
	HWND hWnd = initgraph(720, 675);//��ʼ�����ڲ���þ��

	
	
	initInfoPeo();
	loadRes();
	menu();


	return 0;
}


