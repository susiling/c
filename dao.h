#pragma once
#define NUM 9//地鼠数量
#define PNUM 10 //角色数量
#define MAX_NAME 20//名字最大值
#define HAMMER_NUM 5//锤子的不同皮肤

//地鼠
#define GOPHER_DISTANCE 188//地鼠间的间隔
#define GOPHER_HEIGHT 120//地鼠身高
#define GOPHER_WIDTH 110 //地鼠宽度

#define MAP1_MOUSE_FIRST_X 125//第一排第一只地鼠x坐标
#define MAP1_MOUSE_SECOND_X 321//第一排第二只地鼠x坐标
#define MAP1_MOUSE_THIRD_X 507//第一排第只地鼠x坐标

#define MAP1_MOUSE_BEGIN_Y 276 //第一排地鼠初始高度
#define MAP1_MOUSE_MID_Y 407 //第二排地鼠初始高度
#define MAP1_MOUSE_LAST_Y 534 //第三排地鼠初始高度

//锤子
#define HAMMER_BEGIN_X 570//锤子初始x坐标
#define HAMMER_BEGIN_Y 525//锤子初始y坐标
#define HAMMER_HEIGHT 150//锤子高度
#define HAMMER_WIDTH 150//锤子宽度

//角色 继续游戏
#define ROLE_DISTANSE 50

//商店界面
#define hammerX1 175		//锤子1图片x的坐标
#define hammerX2 455	    //锤子2图片x的坐标
#define hammerY1 150		//锤子1图片y的坐标
#define hammerY2 150		//锤子2图片y的坐标
#define ax		 225	//ax表示购买框左上角的x坐标
#define ay		 400	//ay表示购买框的上方y坐标
#define bx 		 325	//bx表示购买框左下方的x坐标
#define by		 450	//by表示购买框下方的y坐标
//#define hammerLength  105;//每个锤子图片的宽度
//用户金币位置
#define mx		 250	
#define my		 35	

#define IMAGE_NUM 20//每个数组保存图片的最大数量--这个加上
//地鼠
typedef struct Gopher
{
	//地鼠坐标
	int x;
	int y;
	//地鼠图片拉伸宽度和高度
	int w;
	int h;
	int isLive = 1;//判断地鼠是否被锤子击中，1表示没被击中，0表示被击中。初始值为1
	int fx;
}Gopher;


//锤子
typedef struct hammer
{
	//锤子坐标
	int x;
	int y;
	//锤子图片拉伸宽度和高度
	int w;
	int h;
	int isDown = 0;//判断锤子是否落下，1表示落下，0表示没落下.初始值为

}hammer;
//角色
typedef struct people
{
	char name[MAX_NAME];//角色名
	int score;//角色单句得分 每局都需重置
	int money;//角色金币
	int czPf[2] = {1,0};//0表示有，1表示没有
	int maxScore;//个人最高得分
	int cczpf = 0;//现在使用的锤子皮肤
	int clife;//个人非结束游戏退出时的血量
}people;

//角色信息
typedef struct infoPeo
{
	people peo[PNUM];
	int numData = 0;//表示当前有几人有数据
}infoPeo;

//炸弹（有时间再说）
struct bomb
{
	//炸弹坐标
	int x;
	int y;
	//炸弹图片拉伸宽度和高度
	int w;
	int h;
	int isBomb = 1;//判断炸弹是否被锤子击中，1表示没被击中，0表示被击中。初始值为1
};
typedef	struct goods
{
	int money;
}goods;		//商品价格
//函数声明


/*
	负责人：
	功能：将文件中的每个人的数据读到角色数组中
		FILE* pfRead = fopen("peodata.dat","rb");//读取二进制文件
		

		//读取文件存放到infoPeo中
		people tmp = { 0 };//临时变量，存放读入的数据
		
		//如果需要读的很多实际上没这么多，只会返回实际的个数
		//读到哪里，多大，读几个，从哪里读.fread这个函数是读到几个sizeof(people)返回几个的值，
		while (fread(&tmp, sizeof(Peoinfo), 1, pfRead))
		{
			int i = 0;
			peoList->peo[i] = tmp;
			i++;
		}
		
		//关闭流
		fclose(pfRead);
		pfRead = NULL;

	参数：infoPeo* peoList
	返回值：无
*/
void readData(infoPeo* peoList);
/*
	负责人：
	功能：将每个人的数据写入到文件中
		 FILE* pfWrite = fopen("peodata.dat","wb");//以二进制方式写入文件中
		if (pfWrite == NULL)
		{
			return;
		}
		//将通讯录中的数据写到文件中去 ,一个人一个人写入（简易版）
		for (int i = 0; i < pc->size; i++)
		{
			fwrite(&(peoList->peo[i]),sizeof(People),1,pfWrite);//从哪里写，写的东西多大，写几个，写到哪里（或者说通过什么写）
		}

		//关闭流
		fclose(pfWrite);
		pfWrite = NULL;


	参数：infoPeo* peoList
	返回值：
*/
void writeData(infoPeo* peoList);


