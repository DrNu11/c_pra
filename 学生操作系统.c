#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 定义一个结构体，用来把“姓名”和“身高”绑在一起
struct Student
{
    char name[50]; // 姓名，用字符数组存储
    float height;  // 身高，用浮点数存储
};

int main()
{
    system("chcp 65001");
    // 定义一个数组，存放5个学生
    struct Student stus[5];
    struct Student temp; // 用于交换时的临时变量
    int i, j;

    // 2. 循环输入5个学生的信息
    printf("请输入5位同学的姓名和身高（例如：张三 175.5）：\n");
    for (i = 0; i < 5; i++)
    {
        printf("请输入第 %d 位同学: ", i + 1);
        scanf("%s %f", stus[i].name, &stus[i].height);
    }

    // 3. 开始排序（冒泡排序法）
    // 外层循环：控制比较的轮数
    for (i = 0; i < 5 - 1; i++)
    {
        // 内层循环：两两比较
        for (j = 0; j < 5 - 1 - i; j++)
        {
            // 如果后面的人(j+1)比前面的人(j)高，就交换位置
            // 因为题目要求是从高到矮
            if (stus[j].height < stus[j + 1].height)
            {
                temp = stus[j];
                stus[j] = stus[j + 1];
                stus[j + 1] = temp;
            }
        }
    }

    // 4. 输出结果
    printf("\n--- 排序结果（从高到矮） ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("姓名: %s, 身高: %.2f\n", stus[i].name, stus[i].height);
    }

    return 0;
}
