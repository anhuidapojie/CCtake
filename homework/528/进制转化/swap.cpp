#include <iostream>
using namespace std;

int main() {
    char binary[5]; // 4位二进制数加上字符串结束符'\0'
    cout << "请输入一个四位二进制数: ";
    cin >> binary;
    
    int decimal = 0;
    int power = 8; // 2^3 = 8, 从最高位开始
    
    for (int i = 0; i < 4; i++) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power /= 2; // 每次向右移动一位，权重除以2
    }
    
    cout << "十进制结果: " << decimal << endl;
    
    return 0;
}