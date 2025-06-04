#include <stdio.h>

void func(int n)
{
    printf("%d\n",n);
    func(n+1);
}

int main()
{
    func(0);
    return 0;
}