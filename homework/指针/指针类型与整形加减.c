#include <stdio.h>
int main()
{
    //指针与整形加减的作用：将首地址向前或向后移动 
    char * pc;
    pc=100;
    pc = pc+1;
    printf("pc = %u\n",pc)



    // 同类型指针进行减法运算的作用：计算元素之间相隔的个数
    int arr[10];
    printf("&arr[0] = %p\n",&arr[0]);   //&arr[0] = 856
    printf("&arr[5] = %p\n",&arr[5]);   //&arr[5] = 876
    //&arr[5] - &arr[0]=20/sizeof(int) = 5(相隔五个元素)
    printf("&arr[5] - &arr[0] = %p\n",&arr[5] - &arr[0]); 



    //使用指针访问数组
    //获取首地址:数组名------>第一个元素
    int arr[5] = {111,222,333,444,555}
    printf("arr = %u\n",arr)
    printf("arr[0] = %u",&arr[0])
    return 0;
}