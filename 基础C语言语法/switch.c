#include <stdio.h>
int main()
{
    printf("请输入一个字符");
    char ch;
    scanf("%s",&ch);
    switch (ch)
    {
    case 'A':
        printf("alpha");
        break;
    case 'B':
        printf("bravo");
        break;
    case 'C':
        printf("charlie");
        break;
    case 'D':
        printf("delta");
        break;
    case 'E':
        printf("echo");
        break;
    case 'F':
        printf("foxtrot");
        break;
    case 'G':
        printf("golf");
        break;
    default:
        break;
    }
    return 0;
}