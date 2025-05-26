#include <stdio.h>
#include <math.h>
float mianji(float a, float b, float c)
{
    if (a+b>c && a+c>b && b+c>a)
    {
        float p = (a+b+c)/2;
        float s = sqrt(p*(p-a)*(p-b)*(p-c));
        return s;
    }
    else
    {
        printf("不能组成三角形");
    }
    return 0;
}

int main(float a,float b ,float c)
{
    float result;
    printf("请输入三个整数");
    scanf("%f %f %f",a,b,c);
    result = mianji(a,b,c);
    printf("%d",result);
    return 0;
}