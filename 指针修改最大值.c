#include <stdio.h>
#include <stdlib.h>
int Findmax(int *array, int count)
{
    int i;
    int max = array[0];
    for (i = 0; i < count; i++)
    {
        if (array[i] > max)
        {

            max = array[i];
        }
    }
    return max;
}
int main()
{
    system("chcp 65001");
    int a[6] = {1, 2, 560, 70, 9, 60};
    int Max;
    Max = Findmax(a, 6);
    printf("最大的%d\n", Max);
}
