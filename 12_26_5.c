#include <stdio.h>
#include <stdlib.h> // 用于abs函数

int main()
{
    system("chcp 65001");
    int n, i, j;
    int mid; // 中心行号

    // 要求用户输入大小，体现通用性
    printf("请输入菱形的总行数(必须是奇数): ");
    if (scanf("%d", &n) !=1 || n % 2 == 0 || n <= 0 )
    {
        printf("输入错误：请输入一个正奇数。\n");
        return 1; // 异常退出
    }

    mid = n / 2; // 计算中心点，比如7行，中心索引就是3 (0-6)

    // 一个大循环解决所有问题，体现数学归纳能力
    // 这里的逻辑利用了“距离中心的距离”
    // y 轴范围从 -mid 到 mid
    for (i = -mid; i <= mid; i++)
    {

        // 计算当前行距离中心的距离（绝对值）
        int distance = abs(i);

        // 1. 打印空格：距离中心越远（绝对值越大），空格越多
        for (j = 0; j < distance; j++)
        {
            printf(" ");
        }

        // 2. 打印星星：总宽度减去两边的空格就是星星数
        // 星星数 = 总列数 - 2 * 空格数
        // 这里用简单的数学公式推导：n - 2 * distance
        for (j = 0; j < n - 2 * distance; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}