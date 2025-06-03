/**
* &（取地址运算符）数据对象：获取数据对象首地址和所需存储空间大小
* int n;
* 指针变量格式（目标数据类型 * 变量名）----------->保存变量n首地址和所需存储空间大小
* int * pn = &n;
*/


#include <stdio.h>
int main()
{
    //指针类型的值就是目标对象的首地址
    // int n1;
    // int n2;
    // int n3;
    // int n4;

    // int * pn1 = &n1;
    // int * pn2 = &n2;
    // int * pn3 = &n3;
    // int * pn4 = &n4;

    // printf("pn1 = %u\n",pn1);
    // printf("pn2 = %u\n",pn2);
    // printf("pn3 = %u\n",pn3);
    // printf("pn4 = %u\n",pn4);


    //pn(存储首地址)    *pn(根据pn的首地址与大小找到数据对象的值也就是n的值)指针：根据指针存储的首地址和空间大小找到目标数据对象
    // int n = 123;
    // int * pn = &n;
    // printf("%p\n",pn);
    // printf("%d\n",*pn);


    //指针所占内存空间大小
    // int n = 0;
    // int * pn = &n;
    // char c = 0;
    // char * pc = &c;
    // printf("sizeof pn = %d\n",sizeof(pn));
    // printf("sizeof pc = %d\n",sizeof(pc));


    //取值运算重新赋值
    // *pn = 123;
    // *pc = 'A';
    // printf("n = %d\n",n);
    // printf("c = %c\n",c);
    // printf("n = %d\n",*pn);
    // printf("c = %c\n",*pc);

    // 强制转化指针类型
    int n = 1234665;
    int * pn = &n;
    char * pc = (char *)pn;
    return 0;
}
