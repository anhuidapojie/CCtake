#include <stdio.h>
// #define 符号常量名 值
int main()
{
    //变量声明后立即初始化
    int a = 100;
    //变量先声明，在赋值,
    int b;
    b = 100;
    printf("%d\n",a);
    printf("%d\n",b);

    //printf的第一个参数必须是字符串 （\数值，\a表示报警，\b表示退格，\f表示换页，\t水平制表,\v垂直制表，\r回车）转义字符
    char a = 'a';
    printf("包含的是字符串");
    printf("字符常量由单引号包括%c",a);
    return 0;
}