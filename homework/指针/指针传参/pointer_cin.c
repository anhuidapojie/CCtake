#include <stdio.h>
void swap(int * x,int * y)
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
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);


    //void * 类型指针 (void * x:只保存首地址不保存存储空间大小)
    void swap(void * x, void * y, int size)
    {
        char *px = (char *)x; //char*可以对一个字节进行操作

        for (int i = 0; i < size; i++)
        {
            temp[i] = px[i];
        }
        
    }
}
return 0;