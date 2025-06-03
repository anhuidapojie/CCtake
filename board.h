#ifndef _BOARD_
#define _BOARD_

#include<iostream>
#include<iomanip>
using namespace std;

//初始化棋盘，将棋盘每一个元素进行初始化
//对应玩家落子操作实际进行的数组，即，玩家落子实际上是修改这个数组里面的元素
void initBoard(int board[15][15]);  

//游戏界面，展示给玩家的界面，需要对上面的实际数组进行一系列操作
void printBoard(int board[15][15]);

#endif