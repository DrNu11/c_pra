#include <stdio.h>
#include <stdlib.h> // 用于生成随机数模拟传感器

// --- 1. 函数定义 ---
// 这里的 int *arr 就像一个“传送门”，它只接收数组的入口地址
// size 告诉函数这个数组后面有多长
float calc_average(int *arr, int size)
{
    // 建议用 long long 防止数据太多导致总和溢出（虽然存温度一般不会）
    long long sum = 0;

    for (int i = 0; i < size; i++)
    {
        // arr[i] 的本质：
        // 拿到基地址 arr，往后偏移 i 个单位，取出里面的值
        sum += arr[i];
    }

    // 强制转换为 float 算出带小数点的平均值
    return (float)sum / size;
}

// --- 2. 主函数 ---
int main()
{
    // 定义一个能存 1000 个数据的数组（模拟内存开销）
    int temp_data[1000];
    int data_count = 1000;

    printf("正在模拟采集 1000 次温度数据...\n");

    // --- 模拟传感器工作 ---
    // 我们用循环给数组填入模拟数据，假装是传感器读进来的
    for (int i = 0; i < data_count; i++)
    {
        // 模拟 20度 到 30度 之间的波动
        temp_data[i] = 20 + (rand() % 11);
    }

    // 打印前几个看看样子
    printf("采集完成。前5个数据是: %d, %d, %d, %d, %d ...\n",
           temp_data[0], temp_data[1], temp_data[2], temp_data[3], temp_data[4]);

    // --- 3. 关键时刻：传递指针 ---
    // 注意：这里我们直接传了 temp_data
    // 实际上发生的事情：系统只把数组的“首地址”（比如 0x61FE00）传给了函数
    // 没有发生 1000 个数据的复制！速度极快！
    float avg = calc_average(temp_data, data_count);

    // --- 4. 输出结果 ---
    printf("\n---------------------------\n");
    printf("计算结果：这 1000 次采样的平均温度是: %.2f 度\n", avg);
    printf("---------------------------\n");

    return 0;
}