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
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)//���һ��"|"���ô�
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//���һ��"---"���ô�
		{
			//��ӡ�ָ���
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)//���һ��"|"���ô�
					printf("|");
			}
			printf("\n");
		}
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	printf("���������\n");
	int x = 0;
	int y = 0;
	//�ж������Ƿ�Ϸ�
	while (1)
	{
		printf("���������꣺");
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
				printf("���̱�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
	
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	
	while (1)
	{
		int x = rand() % row;//����һ��0-2�������
		int y = rand() % col;//����һ��0-2�������
			if (board[x][y] == ' ')
			{
				board[x][y] = '$';
				break;
			}
	}	
}

//����������˷���1�������򷵻�0
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

//���Ӯ - '*'
//����Ӯ - '$'
// ƽ�� - 'Q'
// ���� - 'C'
char Iswin(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	//�л�ʤ
	for (x = 0; x < row; x++)
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
		{
			return board[x][0];
		}
	}

	//����һ�л�ʤ
	for (y = 0; y < col; y++)
	{
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[0][y] != ' ')
		{
			return board[0][y];
		}
	}

	//��б���ʤ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	//��б���ʤ
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

	//�ж������Ƿ����������ֱ��������δ�ֳ�ʤ��֤����ƽ��
	if (Isfull(board, row, col))
	{
		return 'Q';
	}

	//��Ϸ����
	return 'C';
}