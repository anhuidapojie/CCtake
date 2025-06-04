#include <stdio.h>
int main()
{
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));

    printf("%d\n",sizeof(unsigned short));
    printf("%d\n",sizeof(unsigned int));
    printf("%d\n",sizeof(unsigned long));
    printf("%d\n",sizeof(unsigned long long));

    printf("%f\n",sizeof(float));
    printf("%f\n",sizeof(double));
    return 0;
}