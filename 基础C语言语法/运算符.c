#include <stdio.h>

int main()
{
    int a = 2;
    int b = 3;
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    printf("%d %d\n",a++,b++);
    printf("%d %d\n",--a,--b);
    printf("%d\n",1>2);
    printf("%d\n",1>=2);
    printf("%d\n",1<2);
    printf("%d\n",1<=2);
    printf("%d\n",1==2);
    printf("%d\n",a>=2 || a<=4);
    printf("%d\n",a>=2 && a<=4);
    return 0;
}