#include <stdio.h> // 引入标准输入输出库，这一行必须有，不然没法用printf和scanf
#include <stdlib.h>
struct Student
{
    char name[50];   // 定义一个字符数组，用来存学生的名字，最长支持50个字符
    float scores[6]; // 定义一个浮点数数组，用来存6门课的成绩
    float average;   // 定义一个浮点数变量，用来存计算出来的平均分
};

int main()
{
    system("chcp 65001");
    // 定义一个结构体数组，用来存5个学生的信息
    struct Student students[5];
    // 这是一个大循环，用来依次录入5个学生的数据
    // i 从 0 开始，到 4 结束，一共循环 5 次
    for (int i = 0; i < 5; i++)
    {
        // 提示用户输入名字，%d是占位符，会显示是第几个学生
        printf("请输入第 %d 个学生的姓名: ", i + 1);
        scanf("%s", students[i].name); // 读取用户输入的名字，存到name里

        float sum = 0.0; // 定义一个变量sum，用来存这6门课的总分，初始化为0

        // 这是一个小循环，用来依次录入该学生的6门成绩
        // j 从 0 开始，到 5 结束，一共循环 6 次
        for (int j = 0; j < 6; j++)
        {
            printf("  请输入第 %d 门课的成绩: ", j + 1);
            scanf("%f", &students[i].scores[j]); // 读取成绩，存到scores数组里

            // 把刚输入的这一门成绩加到总分sum里
            sum = sum + students[i].scores[j];
        }

        // 计算平均分：总分除以6，结果存到average里
        students[i].average = sum / 6.0;

        // 打印在这个学生录入完之后换一行，为了美观
        printf("\n");
    }

    // --- 数据录入完毕，下面开始打印结果 ---

    printf("--- 学生成绩统计表 ---\n");
    // 再次循环5次，把刚才存进去的数据和算好的平均分打印出来
    for (int i = 0; i < 5; i++)
    {
        // %.2f 的意思是保留两位小数
        printf("姓名: %s, 平均分: %.2f\n", students[i].name, students[i].average);
    }

    return 0; // 程序正常结束
}