#include <iostream>
using namespace std;

const int SIZE = 15; // 棋盘大小

int main() {
    char board[SIZE][SIZE]; // 二维数组表示棋盘
    char currentPlayer = 'X'; // 当前玩家
    bool gameOver = false;
    
    // 初始化棋盘
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '.';
        }
    }
    
    while (!gameOver) {
        // 打印棋盘
        cout << "  ";
        for (int i = 0; i < SIZE; i++) {
            cout << i % 10 << " ";
        }
        cout << endl;
        
        for (int i = 0; i < SIZE; i++) {
            cout << i % 10 << " ";
            for (int j = 0; j < SIZE; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        
        // 玩家输入
        cout << "玩家 " << currentPlayer << " 的回合，输入行和列(0-14): ";
        int row, col;
        cin >> row >> col;
        
        // 检查输入有效性
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != '.') {
            cout << "无效输入，请重新尝试!" << endl;
            continue;
        }
        
        // 落子
        board[row][col] = currentPlayer;
        
        // 检查是否获胜 - 水平方向
        int count = 1;
        for (int i = 1; i < 5; i++) {
            if (col + i < SIZE && board[row][col + i] == currentPlayer) count++;
            else break;
        }
        for (int i = 1; i < 5; i++) {
            if (col - i >= 0 && board[row][col - i] == currentPlayer) count++;
            else break;
        }
        if (count >= 5) gameOver = true;
        
        // 垂直方向
        if (!gameOver) {
            count = 1;
            for (int i = 1; i < 5; i++) {
                if (row + i < SIZE && board[row + i][col] == currentPlayer) count++;
                else break;
            }
            for (int i = 1; i < 5; i++) {
                if (row - i >= 0 && board[row - i][col] == currentPlayer) count++;
                else break;
            }
            if (count >= 5) gameOver = true;
        }
        
        // 对角线1(左上到右下)
        if (!gameOver) {
            count = 1;
            for (int i = 1; i < 5; i++) {
                if (row + i < SIZE && col + i < SIZE && board[row + i][col + i] == currentPlayer) count++;
                else break;
            }
            for (int i = 1; i < 5; i++) {
                if (row - i >= 0 && col - i >= 0 && board[row - i][col - i] == currentPlayer) count++;
                else break;
            }
            if (count >= 5) gameOver = true;
        }
        
        // 对角线2(右上到左下)
        if (!gameOver) {
            count = 1;
            for (int i = 1; i < 5; i++) {
                if (row + i < SIZE && col - i >= 0 && board[row + i][col - i] == currentPlayer) count++;
                else break;
            }
            for (int i = 1; i < 5; i++) {
                if (row - i >= 0 && col + i < SIZE && board[row - i][col + i] == currentPlayer) count++;
                else break;
            }
            if (count >= 5) gameOver = true;
        }
        
        // 检查平局
        if (!gameOver) {
            bool full = true;
            for (int i = 0; i < SIZE && full; i++) {
                for (int j = 0; j < SIZE && full; j++) {
                    if (board[i][j] == '.') full = false;
                }
            }
            if (full) {
                cout << "平局!" << endl;
                gameOver = true;
            }
        }
        
        // 切换玩家
        if (!gameOver) {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            cout << "玩家 " << currentPlayer << " 获胜!" << endl;
        }
    }
    
    return 0;
}
