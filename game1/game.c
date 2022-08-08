#include"game.h"

void Initialboard(char board[ROW][COL], int row, int colum)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colum; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//最后一列"|"不用打
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//最后一行"---"不用打
		{
			//打印分割行
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//最后一列"|"不用打
					printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	printf("请玩家下棋\n");
	int x = 0;
	int y = 0;
	//判断坐标是否合法
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("棋盘被占用，请重新落子\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}
	
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	
	while (1)
	{
		int x = rand() % row;//产生一个0-2的随机数
		int y = rand() % col;//产生一个0-2的随机数
			if (board[x][y] == ' ')
			{
				board[x][y] = '$';
				break;
			}
	}	
}

//如果棋盘满了返回1，不满则返回0
Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
			return 0;
		}
	}
	return 1;
}

//玩家赢 - '*'
//电脑赢 - '$'
// 平局 - 'Q'
// 继续 - 'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	//行获胜
	for (x = 0; x < row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
		{
			return board[x][0];
		}
	}

	//连成一列获胜
	for (y = 0; y < col; y++)
	{
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[0][y] != ' ')
		{
			return board[0][y];
		}
	}

	//负斜向获胜
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	//正斜向获胜
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//判断棋盘是否下满，如果直到下满还未分出胜负证明是平局
	if (Isfull(board, row, col))
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}