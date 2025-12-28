#include <stdio.h>
#include <stdlib.h>
int main()
{
    float h = 100;
    float s = 100;
    int i;
    for (i = 2; i <= 10; i++)
    {
        h = h / 2;
        s = s + h * 2;
    }

    printf("s=%f ,d=%f", s, h);
    return 0;
}