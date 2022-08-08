#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void Initialboard(char board[ROW][COL], int row, int colum);

//打印棋盘
void Display(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);

//判断输赢
char Iswin(char board[ROW][COL], int row, int col);
