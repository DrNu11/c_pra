#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    float height;
};
int main()
{
    system("chcp 65001");
    struct Student stu[5];
    struct Student temp;
    int i, j;
    printf("请输入学生的姓名和身高:\n");
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个同学:", i + 1);
        scanf("%s %f", stu[i].name, &stu[i].height);
    }
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (stu[j].height < stu[j + 1].height)
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    printf("最后的结果出来了!!!!\n");
    for (i = 0; i < 5; i++)
    {

        printf("姓名:%s,身高:%.2f\n", stu[i].name, stu[i].height);
    }
    return 0;
}
