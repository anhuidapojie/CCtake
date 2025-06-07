#include <stdio.h>
//void *x,void*y只保存首地址
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    int temp;
    a = 1;
    b = 2;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}