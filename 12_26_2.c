#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *array, int count)
{
    int i, j;
    int temp;
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    system("chcp 65001");
    int a[7] = {1, 2, 5, 3, 9, 100, 213};
    int i;
    printf("排序前\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    printf("排序后\n");
    BubbleSort(a, 7);
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}