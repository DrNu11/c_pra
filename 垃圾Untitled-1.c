#include <stdio.h>
void text()
{
    static  a = 1;
    a++;
    printf("%d", a);
}
int main()
{
    int i = 0;
    while (i < 10)
    {
        i++;
        text();
    }

    return 0;
}