#include<stdio.h>
#include<windows.h>
#include<conio.h>

int mark = 0, x, y, f;//x�ǵ�ǰ¥��,y��Ŀ��¥��,mark�Ǳ�־�ϴ�¥��

void equal(int x, int mark)//�ӵ�ǰfloor������floor
{
	while (mark != x && mark != 0)
	{
		if (mark < x)
		{
			mark++;
			Sleep(5000);
			printf(">_<***ǰ�������ϳ�¥���У���ǰ¥��:%d\n", mark);
		}
		else
		{
			mark--;
			Sleep(5000);
			printf(">_<***ǰ�������ϳ�¥���У���ǰ¥��:%d\n", mark);
		}
	}
}

int run(int x, int y, int mark)
{
	printf(">_<***�����ϳ�¥��:%d\tĿ��¥��:%d\n", x, y);

	equal(x, mark);

	printf("���ϳ�---In\n");
	Sleep(2000);

	while (x != y)
	{
		if (x < y)
		{
			x++;
			Sleep(1000);
			printf(">_<***��ǰ¥��:%d\n", x);
		}
		else
		{
			x--;
			Sleep(1000);
			printf(">_<***��ǰ¥��:%d\n", x);
		}
	}

	printf("����Ŀ�ĵ�,���³�---Out\n");
	Sleep(2000);
	printf("---Free\n");
	return x;

}

int main()
{
	printf("��ѡ������������͡�\n");
	printf("1.������ݡ�\n");
	printf("2.�����ݡ�\n");
	scanf_s("%d", &f);

	switch (f)
	{
	case 1:
		printf("1.����Ŀǰ��¥��-��ȥ��¥�㣬1��2��\n");
		printf("2.�˳���������Q���ɡ�\n");

		while (scanf_s("%d-%d", &x, &y))//������x,y��ʼѭ�����������
		{
			system("cls");  //��������
			if (x > 2 || x == y)
			{
				printf("¥����Ϊ1����2���Ҳ�����ͬ���ٰ�һ��\n");
				continue;
			}
			printf("******��������!\n");
			mark = run(x, y, mark);
		}
		break;
	case 2:
		printf("1.������ȥ��¥�㣬��Ҫ����1��20¥�ķ�Χ������2��3¥�������³���\n");
		printf("2.�����ʽΪ*-*,����5-20��ʾ��5¥�ϳ���20¥�³���\n");
		printf("3.�˳���������Q���ɡ�\n");

		while (scanf_s("%d-%d", &x, &y))//������x,y��ʼѭ�����������
		{
			system("cls");  //��������
			if (x == 2 || x == 3 || y == 2 || y == 3 || x == y)
			{
				printf("������¥�������³���Ҳ����������һ������,�ٰ�һ��\n");
				continue;
			}
			printf("******��������!\n");
			mark = run(x, y, mark);
		}
		break;
	default:

		break;
	}

	return 0;
}