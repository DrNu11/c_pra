#include <stdio.h>
int main()
{
    float h = 100;
    float s = 100;
    int i;

    for (i = 1; i < 10; i++)
    {
        h = h / 2;
        s = h * 2 + s;
    }
    printf("%f\n", s);
    printf("%f\n", h / 2);
}