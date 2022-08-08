#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*******  1.enter  0.exit  ********\n");
	printf("**********************************\n");
}
void game()
{
	//棋盘程序
	char board[ROW][COL] = {0};
	Initialboard(board, ROW , COL);
	Display(board, ROW, COL);
	
	//下棋程序
	char ret = 0;
	while (1)
	{
		Playermove(board, ROW, COL);
	   
		ret = Iswin(board, ROW, COL);//判断胜负
		
		Display(board, ROW, COL);//再次打印棋盘，观看结果

		if (ret != 'C')
		{
			break;
		}
		
		Computermove(board, ROW , COL);
		
		//Display(board, ROW, COL);//电脑下完后再次打印棋盘
		
		ret = Iswin(board, ROW, COL);//判断胜负
		
		Display(board, ROW, COL);//再次打印棋盘，观看结果
		
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '$')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));//初始化随机数,设置随机数的
	int choose = 0;

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (choose);
	return 0;
}