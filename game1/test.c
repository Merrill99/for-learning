#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("*******  1.enter  0.exit  ********\n");
	printf("**********************************\n");
}
void game()
{
	//���̳���
	char board[ROW][COL] = {0};
	Initialboard(board, ROW , COL);
	Display(board, ROW, COL);
	
	//�������
	char ret = 0;
	while (1)
	{
		Playermove(board, ROW, COL);
	   
		ret = Iswin(board, ROW, COL);//�ж�ʤ��
		
		Display(board, ROW, COL);//�ٴδ�ӡ���̣��ۿ����

		if (ret != 'C')
		{
			break;
		}
		
		Computermove(board, ROW , COL);
		
		//Display(board, ROW, COL);//����������ٴδ�ӡ����
		
		ret = Iswin(board, ROW, COL);//�ж�ʤ��
		
		Display(board, ROW, COL);//�ٴδ�ӡ���̣��ۿ����
		
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '$')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));//��ʼ�������,�����������
	int choose = 0;

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (choose);
	return 0;
}