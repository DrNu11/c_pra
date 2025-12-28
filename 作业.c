#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. 定义学生结构体
struct Student
{
    char name[50];     // 姓名
    char gender[10];   // 性别
    int birth_year;    // 出生年
    int birth_month;   // 出生月
    float score_math;  // 数学
    float score_eng;   // 英语
    float score_c;     // C语言
    char intro[100];   // 简介
    float total_score; // 总分（自动计算）
};

// 全局变量：班级大名单和当 前人数
struct Student db[100];
int count = 0;

// --- 函数声明 ---
void add_student();
void delete_student();
void print_all_and_sort();
void calculate_total();

int main()
{
    system("chcp 65001"); // 防止中文乱码
    int choice;

    while (1)
    {
        printf("\n========== 班级档案管理系统 ==========\n");
        printf("1. 录入新同学 (增加)\n");
        printf("2. 开除某同学 (删除)\n");
        printf("3. 显示全班排名 (按总分排序)\n");
        printf("0. 退出系统\n");
        printf("请选择功能: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            delete_student();
            break;
        case 3:
            print_all_and_sort();
            break;
        case 0:
            return 0;
        default:
            printf("输入错误，重来！\n");
        }
    }
    return 0;
}

// 功能1：录入学生
void add_student()
{
    if (count >= 100)
    {
        printf("班级满了，装不下了！\n");
        return;
    }

    printf("\n--- 请输入第 %d 位同学的信息 ---\n", count + 1);
    printf("姓名: ");
    scanf("%s", db[count].name);
    printf("性别: ");
    scanf("%s", db[count].gender);
    printf("出生年份 (如 2005): ");
    scanf("%d", &db[count].birth_year);
    printf("出生月份 (如 8): ");
    scanf("%d", &db[count].birth_month);
    printf("三门课成绩 (数学 英语 C语言): ");
    scanf("%f %f %f", &db[count].score_math, &db[count].score_eng, &db[count].score_c);
    printf("个人简介 (一句话): ");
    scanf("%s", db[count].intro);

    // 自动计算总分
    db[count].total_score = db[count].score_math + db[count].score_eng + db[count].score_c;

    count++; // 人数加1
    printf("✅ 录入成功！\n");
}

void delete_student()
{
    char target_name[50];
    int found_index = -1; // 找不到默认是 -1
    int i;

    printf("\n请输入要删除的学生姓名: ");
    scanf("%s", target_name);

    // 1. 先找人在哪里
    for (i = 0; i < count; i++)
    {
        if (strcmp(db[i].name, target_name) == 0)
        { // 名字一样
            found_index = i;
            break;
        }
    }

    if (found_index == -1)
    {
        printf("❌ 查无此人！\n");
        return;
    }

    // 2. 移位覆盖 (后面的人往前补)
    // 比如删第2个，那么第3个要变成第2个，第4个变成第3个...
    for (i = found_index; i < count - 1; i++)
    {
        db[i] = db[i + 1]; // 结构体可以直接赋值覆盖
    }

    count--; // 总人数减1
    printf("🗑️ 已删除 %s 的信息。\n", target_name);
}

// 功能3：排序并显示 (加分项)
void print_all_and_sort()
{
    if (count == 0)
    {
        printf("班级里还没人呢！先录入吧。\n");
        return;
    }

    // 冒泡排序：按总分从高到低
    int i, j;
    struct Student temp; // 临时交换用的容器
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - 1 - i; j++)
        {
            if (db[j].total_score < db[j + 1].total_score)
            { // 如果后者分高，就交换
                temp = db[j];
                db[j] = db[j + 1];
                db[j + 1] = temp;
            }
        }
    }

    // 打印表格头
    printf("\n%-10s %-6s %-10s %-8s %-6s %-6s %-6s %-15s\n",
           "姓名", "性别", "出生年月", "总分", "数学", "英语", "C语言", "简介");
    printf("----------------------------------------------------------------------\n");

    // 循环打印每一个人
    for (i = 0; i < count; i++)
    {
        printf("%-10s %-6s %d-%02d     %-8.1f %-6.0f %-6.0f %-6.0f %-15s\n",
               db[i].name,
               db[i].gender,
               db[i].birth_year, db[i].birth_month,
               db[i].total_score,
               db[i].score_math, db[i].score_eng, db[i].score_c,
               db[i].intro);
    }
}