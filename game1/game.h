#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//��ʼ������
void Initialboard(char board[ROW][COL], int row, int colum);

//��ӡ����
void Display(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char Iswin(char board[ROW][COL], int row, int col);
