#include <stdio.h>
int peach = 1;
int Day;
int main()
{
    for (Day = 9; Day >= 1; Day--)
    {

        peach = (peach + 1) * 2;
    }

    printf("第一天摘了%d\n", peach);
    return 0;
}