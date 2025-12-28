#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    char gender[10];
    int year;
    int month;
    float math;
    float english;
    float c_language;
    char intro[10];
    float total_score;
};
struct Student all[100];
int count = 0;
void add_student();
void delete_student();
void print();
void total();
int main()
{
    int choice;
    system("chcp 65001");
    while (2)
    {
        printf("-----班级学生管理系统？？！！-----");
        printf("1.开始增加学生\n");
        printf("2.开始删除学生\n");
        printf("3.显示全班排名\n");
        printf("0.退出系统\n");
        printf("请选择功能");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            delete_student();
        case 3:
            print();
        case 0:
            return 0;
        default:
            printf("输入错误了~~\n");
        }
    }

    return 0;
}

