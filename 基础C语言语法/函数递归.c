#include <stdio.h>

/**
 * @brief 用于函数递归
 */
void func(int n)
{
    if (n == 5)  //递推结束条件
        return;  //回归，return 表示结束当前函数的执行，返回到调用它的地方，
        //先调用的函数等待后调用的函数完成后再继续执行后面的代码
    
    printf("before %d\n",n);
    func(n+1);      //递推规则
    printf("after %d\n",n);
}



//阶×计算
int f(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n*f(n-1);
}


//斐波那契数列

int fb(int n)
{
    if (n<=2)
    {
        return 1;
    }
    return fb(n-1)+fb(n-2);
}

int main()
{
    // int result = f(5);
    // printf("%d\n",result);

    int result = fb(5);
    printf("%d",result);
    return 0;
}