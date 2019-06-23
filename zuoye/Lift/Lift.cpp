#include<stdio.h>
#include<windows.h>
#include<conio.h>

int mark = 0, x, y, f;//x是当前楼层,y是目标楼层,mark是标志上次楼层

void equal(int x, int mark)//从当前floor到请求floor
{
	while (mark != x && mark != 0)
	{
		if (mark < x)
		{
			mark++;
			Sleep(5000);
			printf(">_<***前往请求上车楼层中，当前楼层:%d\n", mark);
		}
		else
		{
			mark--;
			Sleep(5000);
			printf(">_<***前往请求上车楼层中，当前楼层:%d\n", mark);
		}
	}
}

int run(int x, int y, int mark)
{
	printf(">_<***请求上车楼层:%d\t目标楼层:%d\n", x, y);

	equal(x, mark);

	printf("请上车---In\n");
	Sleep(2000);

	while (x != y)
	{
		if (x < y)
		{
			x++;
			Sleep(1000);
			printf(">_<***当前楼层:%d\n", x);
		}
		else
		{
			x--;
			Sleep(1000);
			printf(">_<***当前楼层:%d\n", x);
		}
	}

	printf("到达目的地,请下车---Out\n");
	Sleep(2000);
	printf("---Free\n");
	return x;

}

int main()
{
	printf("请选择电梯与人类型。\n");
	printf("1.两层电梯。\n");
	printf("2.多层电梯。\n");
	scanf_s("%d", &f);

	switch (f)
	{
	case 1:
		printf("1.输入目前的楼层-想去的楼层，1或2。\n");
		printf("2.退出程序输入Q即可。\n");

		while (scanf_s("%d-%d", &x, &y))//当输入x,y开始循环，否则结束
		{
			system("cls");  //清屏函数
			if (x > 2 || x == y)
			{
				printf("楼层需为1或者2，且不能相同，再按一遍\n");
				continue;
			}
			printf("******电梯启动!\n");
			mark = run(x, y, mark);
		}
		break;
	case 2:
		printf("1.输入想去的楼层，不要超过1到20楼的范围，其中2到3楼不能上下车。\n");
		printf("2.输入格式为*-*,例如5-20表示从5楼上车到20楼下车。\n");
		printf("3.退出程序输入Q即可。\n");

		while (scanf_s("%d-%d", &x, &y))//当输入x,y开始循环，否则结束
		{
			system("cls");  //清屏函数
			if (x == 2 || x == 3 || y == 2 || y == 3 || x == y)
			{
				printf("二到三楼不能上下车，也别输入两个一样的数,再按一遍\n");
				continue;
			}
			printf("******电梯启动!\n");
			mark = run(x, y, mark);
		}
		break;
	default:

		break;
	}

	return 0;
}