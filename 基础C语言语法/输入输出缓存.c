#include <stdio.h>
#include <conio.h>
int main()
{
    char c1,c2;
    c1 = getchar();
    putchar(c1);
    c2 = getchar();
    putchar(c2);



    char str[20];
    int i = 0;
    while (i<20-1)
    {
        char c;
        c = getchar();
        str[i++] = c;
        if (c == '\n')
        {
            break;
        }
    }
    str[i] = '\0';
    printf(str);
    scanf("%s",str);
    printf(str);




    while (1)
    {
        char c;
        c = getch();
        putchar(c);
        if (c == 'q')
        {
            break;
        }
    }





    while (1)
    {
        char c;
        c = getche();
        putchar(c);
        if (c == 'q')
        {
            break;
        }
    }
    
    return 0;
}