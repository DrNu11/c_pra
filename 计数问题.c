#include <stdio.h>
int main(int argc, const char *argv[])
{
    int g, s, b;
    int count = 0;
    for (g = 1; g < 5; g++)
    {
        for (s = 1; s < 5; s++)
        {
            for (b = 1; b < 5; b++)
            {
                if (g != s && g != b && s != b)

                {

                    printf("%d,%d,%d\n", b, s, g);
                    count++;
                }
            }
        }
    }
    printf("Total=%d\n", count);
    return 0;
}