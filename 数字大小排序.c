#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int x, y, z;
    int max = (x > y ? x : y) > z ? (x > y ? x : y) : z;
    int min = z < (x < y ? x : y) ? z : (x < y ? x : y);
    int mid = x + y + z - max - min;
    printf("请输入三个整数，以空格分隔：");
    scanf("%d %d %d", &x, &y, &z);
    printf("排序前：%d %d %d\n", x, y, z);
    printf("最大的数字是%d\n", (x > y ? x : y) > z ? (x > y ? x : y) : z);
    printf("最小的数字是%d\n", z < (x < y ? x : y) ? z : (x < y ? x : y));
    printf("中间的数字是%d\n", mid);

    return 0;
}