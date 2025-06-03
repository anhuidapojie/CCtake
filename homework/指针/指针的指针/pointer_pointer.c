#include <stdio.h>
int main()
{
    int n = 123;
    int * pn = &n;
    printf("pn = %u\n",pn);
    printf("&pn = %u\n",&pn);

    int n = 123;
    int * pn = &n;
    int **pnn = &pn; //二级指针
    printf("*pnn =  %d\n",**pnn)


    // 指针数组
    int arr1[5] = [1,2,3,4,5];
    int arr2[5] = [11,22,33,44,55];
    int arr3[5] = [111,222,333,444,555];

    int * pToArr[3];     //int *[3]数组
    pToArr[0] = arr1;
    pToArr[1] = arr2;
    pToArr[2] = arr3;

    for (int i = 0; i < 3; i++)
    {
        int **p = pToArr + i;      //数组转化为指向首元素的指针------>int *[3]-------->int **p---------->p+1(类型为int** 指向pToArr的第一个元素)
        for (int j = 0; i < 5; j++)
        {
            printf("%d ", *(*p + j)); //
        }
        printf("\n");
    }
    

    //从函数中返回指针
    int * p = func();
    printf("%d\n", *p);



    // 返回多个
    int * a =NULL;   //------->符号常量==>#define NULL 0
    int * b = NULL;
    func(&a,&b);
    if (a !=NULL && b!= NULL)
    {
        printf("a= %d b= %d\n", *a, *b);
    }
    return 0;
}
    //从函数中返回指针
    int * func()
    {
        static int n= 100;   //------函数结束后被系统回收，因此失效加上static后仍然有效
        return &n;
    }



void func(int **a, int **b)
{
    static int x = 100;
    static int y = 200;
    *a = &x;
    *b = &y;
}



//数组指针
#include <stdio.h>
int main()
{
    int B[5][10] = {
        {0,1,2,3,4,5,6,7,8,9},
        {0}
    }
}

int(*pInt10)[10] = B;
printf(sizeof(pInt10))
printf(sizeof(*pInt10))
return 0;