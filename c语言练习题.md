# c语言练习题

![image-20220419161439489](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220419161439489.png)

```c
int main()
{
	int a = 0;
	scanf("%d", &a);
	double p = 3.14;
	printf("%.2lf", a * a - (a * a * 1.0 / 4)*p);

}

```

中间那边×1.0，是为了浮点数与整数进行乘除，得出来的答案也是浮点数





![image-20220419162739593](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220419162739593.png)

```c
int main()
{
	int a, b, c,max;
	scanf("%d%d%d", &a, &b, &c);
	max = a;
	if (max <b )
		max = b;
	if (max < c)
		max = c;
	printf("%d", max);
}

```





![image-20220419170608110](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220419170608110.png)

```c
int main()
{
    int n=0;
    scanf("%d",&n);
    if(0<n&&n<=10)
    printf("%d",n*6);
    else if(10<n&&n<20)
    printf("%d",60+(n-10)*2);
        else if(20<n<=40)
            printf("%d",80+n-20);
}
```







![image-20220419174837669](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220419174837669.png)

```c
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int a = 0;
    int arr[55] = {0};        //如果arr[]不赋值的话默认为0，然后后面循环的时候就越界了
    int k = 0;
    double sum = 0;
    for (a; a < n; a++)
    {
        scanf("%d", &k);
        arr[a] = k;
         sum += arr[a];
    }
    double r = sum / n;
    printf("%.2lf", r);
}

```





![image-20220419181617695](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220419181617695.png)

```c
int main()
{
    int a = 0;//a是为了说明有几次
    int b = 0;//b是为了说明是谁
    scanf("%d%d", &a, &b);
    int k = b;
    int c = 0;    //3 2  2  22  222
    int sn = 0;
    for (c; c < a-1; c++)
    {
        k = k * 10 + b;
        sn += k;
    }
    printf("%d", sn+b);
}

    
```

 中间for循环可这么代替：

for (int i = 0; i < n; i++) 

{
        result += num;
        num = num * 10 + a;
    }







![image-20220422110707931](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422110707931.png)



```c
int main()
{
    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }

}
```





![image-20220422110746751](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422110746751.png)

```c
int main()
{
 
	int N;  //N表示的是要输的值
	scanf("%d", &N);
	int q;
	int j = 0;
	for (int i = 2; i <= N; i++)
	{
		q = 0;        
		for (j=2; j < i; j++)
		{
			if(!(i%j))    
			{
				q = 1;    
				break;
			}
		}
		if (!q)       
		printf("%d\n", i);
	}
	return 0;
	
}
```







![image-20220422124000750](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422124000750.png)



```c
int main()                //二分猜测法是：如果太大就上限等于中值-1；太小就下限=中值+1
{
	
	int n;
	int  max, mid, min;//court表示次数
	int court = 0;
	max = 100;
	min = 0;
	scanf_s("%d", &n);
	do 
	{
		court++;
		mid = (max + min) / 2;
		if (mid > n)
			max = mid - 1;
		else if(mid < n)
			min = mid + 1;
		printf("%d\n", mid);

	} while (mid != n);
	
		printf("检测第%d次",court);
}
```

这边用do while的原因是因为这里，是需要先进去测一次看看中不中，然后再判断条件，这种思路就很适合用do while





![image-20220422132949114](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422132949114.png)



```c
int main()                
{
	
	int a = 0;
	scanf_s("%d", &a);
    //a表示的是行数，空格就是a-1  然后每行就是继续-1
	int i = 0; 
	for (i; i < a; i++)
	{
		int q = 0;
		for (q;q<a-i-1;q++)
		{
			printf(" ");
		}
		int g = 0;
		for (g; g < 2 * i + 1; g++)
		{
			printf("*");
		
		}
		printf("\n");
	}
	int q = 0;
	for (q; q < a - 1; q++)
	{
		int i = 0;
		for (i;i<q+1;i++)
		{
			printf(" ");
		}
		int k = 0;
		for (k; k < (a-2-q)*2+1;k++)               //  7   5  3   1  这边还要考虑万一是大于7的呢
		{                                       //第五次，记住每次q进来是越来越大了  规律(a-2)*2+1，然后每行-2
			printf("*");
		}
		printf("\n");
	}
}
```

以后这种要定义变量的时候就写在相应的那个for的前面



法②：终极无敌之强者写法（利用坐标轴的形式来进行）

```c
int main()                
{
    //--变量声明--
    //菱形边长
    int n;

    //--接收输入--
    scanf_s("%d", &n);

    //--数据处理--
    /*
        用坐标系的思路
        设坐标点(x,y)
        当x的绝对值 + y的绝对值  小于n时,  这个坐标点在菱形内
        当x的绝对值 + y的绝对值  大于等于n时, 这个坐标点在菱形外
        如: (2,2)在菱形内, (3,2)在菱形外, (-4,0)在菱形内, (4,1)在菱形外
    */
    //--输出--
    // 当n为5时, 坐标系的上下限分别是-4~4  最大高/宽度为9
    for (int i = -n + 1; i < n; i++) 
    {
        for (int j = -n + 1; j < n; j++)    
        {
            // i的绝对值+j的绝对值 小于n  则在菱形范围内
            if (abs(i) + abs(j) < n) 
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

```

abs()是对括号里的内容进行去绝对值的意思

意思就是以这个菱形的中心来定义，定义上限和下限





![image-20220422164910551](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422164910551.png)













⭐

![image-20220422203036787](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220422203036787.png)

define的话，中间是名字                       typedef的话 中间是本尊

int*a,b     *说明a是一个指针变量，int说明的是指向的类型是int类型的  

*给了a，b没有，所以是定义了一个整型指针，和一个整型变量

如果想要定义两个指针的话就要这么写int*p1, *p2



typedef是直接给这一整个换了名字，把这两个绑在一起，相当于变成float那样是一个完整的个体，所以这两个都是指针变量







![image-20220502201512227](C:\Users\司令\AppData\Roaming\Typora\typora-user-images\image-20220502201512227.png)

```c
int ids[5] = { 10001,10002,10003,10004 };
char names[5][10] = { "张三", "李四", "王五", "赵六" };
char password[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };
int uNum=4;

char*selectUserById(int uid)   //这时的uid表示输进来的编号
{
    for (int i = 0; i < uNum; i++)
    {
        if (ids[i] == uid)
        {
            return names[i];
        }
    }
    return NULL;
}
int main()
{
    //uid是一个整数如果发现和
    int a = 0;
    scanf("%d", &a);
    if(selectUserById(a)!=NULL)
    printf( "%s", selectUserById(a));
}

```





```c
/*
    功能: 传入用户id和密码, 根据上面两个函数(selectUserById, selectPassById)来获取相应用户数据, 并判断是否登录成功
        传入用户id 查询用户名是否存在, 并获取用户密码
        如果用户存在  则判断密码是否正确
    参数:
        uid: 用户账户
        password: 用户密码
    返回值:
        如果账号不存在, 返回1         这种账号的东西可以通过比较名字来进行比较
        如果密码错误, 返回2
        如果登录成功, 返回0
*/

int ids[5] = { 10001,10002,10003,10004 };           //id是编号的意思
char names[5][10] = { "张三", "李四", "王五", "赵六" };
char password[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };//这个表示的是密码，输入名字然后把对应的密码给写出来
int uNum = 4;                       

//通过键盘输入编号，然后进行比较，如果一样就返回名字然后后面输出，通过相对应名字的首地址来进行返回
char* selectUserById(int uid)    
{
    for (int i = 0; i < uNum; i++)
    {
        if (ids[i] == uid) 
        {
            return names[i];
        }
    }
    return NULL;
}

//通过键盘输入编号，然后进行比较，一样就输出密码，通过然会密码的首地址
char* selectPassById(int uid)     
{
    for (int i = 0; i < uNum; i++)
    {
        if (ids[i] == uid)
        {
            return password[i];
        }
    }
    return NULL;
}


    int login(int uid, char* password)
    {
        if (selectUserById(uid) == NULL)
        {
            return 1;
        }
        char* pass = selectPassById(uid);
        if (strcmp(password, pass) != 0)
        {
            return 2;
        }
        return 0;

    }

int main()
{
    int a = 0;
    scanf("%d", &a);   //用的时候不需要把函数类型也给写上去的
    printf("%d",login(a,  selectPassById(a)));
}



```



### switch

掌握好switch 和case的用法

switch(数字)

{

case 数字:

​         //然后把要执行的东西放在第二行

case 数字:          //然后继续下一个case

default：       //上述所有情况都没有的情况下然后就可以用default 

}





```c
/*
    功能: 提示用户输入账号密码, 根据login函数判断是否登录成功,
    如果登录成功提示正在进入首页
    如果登录失败
        密码错误: 提示密码错误, 并让用户重新登录
        账号不存在: 提示账号不存在, 并提示正在进入注册界面
    参数: 无
    返回值: 无
*/

int ids[5] = { 10001,10002,10003,10004 };           //id是编号的意思
char names[5][10] = { "张三", "李四", "王五", "赵六" };
char password[5][16] = { "aaaaa","bbbbb","ccccc","ddddd" };//这个表示的是密码，输入名字然后把对应的密码给写出来
int uNum = 4;                       

//通过键盘输入编号，然后进行比较，如果一样就返回名字然后后面输出，通过相对应名字的首地址来进行返回
char* selectUserById(int uid)    
{
    for (int i = 0; i < uNum; i++)
    {
        if (ids[i] == uid) 
        {
            return names[i];
        }
    }
    return NULL;
}

//通过键盘输入编号，然后进行比较，一样就输出密码，通过然会密码的首地址
char* selectPassById(int uid)     
{
    for (int i = 0; i < uNum; i++)
    {
        if (ids[i] == uid)
        {
            return password[i];
        }
    }
    return NULL;
}


    int login(int uid, char* password)
    {
        if (selectUserById(uid) == NULL)
        {
            return 1;   //1是不存在
        }
        char* pass = selectPassById(uid);
        if (strcmp(password, pass) != 0)
        {
            return 2;//2是错误
        }
        return 0;//0是成功

    }

int main()
{
    int a = 0;
    scanf("%d", &a);   //用的时候不需要把函数类型也给写上去的
   
    int b = 0;
    b = login(a, selectPassById(a));
    switch (b)
    {
    case 1:
        printf("提示账号不存在,");
    case 2:
        printf("提示密码错误");
    case 0:
        printf("正在进入首页");
    }


}

```



















