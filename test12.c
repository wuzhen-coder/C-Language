#include<stdio.h>
#include<time.h>
void menu()
{
	printf("***************\n");
	printf("***************\n");
	printf("*1.PLAY 0.EXIT*\n");
	printf("***************\n");
	printf("***************\n");
}
void game()
{
	int ret = 0;//生成随机数
	int guess = 0;
	ret = rand() % 100 + 1;//生成1-100的随机数
	while (1)//执行循环
	{
		printf("请猜数字: >");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;//跳出循环
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择 >");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}