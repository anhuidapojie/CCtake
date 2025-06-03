#include "board.h"

// 完成棋盘的初始化
void initBoard(int board[15][15])
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            board[i][j] = 0;
        }
    }
}


// 棋盘展示，展示处理过的数组
void printBoard(int board[15][15])
{
    cout << "   ";
    for (int i = 0; i < 15; i++)
    { 
        cout << left << setw(3) << i;   //左对齐   
    }
    cout << endl;

    for (int i = 0; i < 15; i++)
    {
        cout << left << setw(3) << i;
        for (int j = 0; j < 15; j++)
        {
            
            if (board[i][j] == 0)
            {
                cout << left << setw(3) << '+';   //如果是没人落子，展示出来是+
            }
            else if (board[i][j] == 1)
            {
                cout << left << setw(3) << 'X';   //如果玩家1落过子，展示 X
            }
            else
            {
                cout << left << setw(3) << 'O';   //如果玩家2落过子，展示 O
            }
        }
        cout<<endl;
    }
}