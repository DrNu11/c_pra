#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
typedef struct
{
    int yeay;    // 什么年
    int month;   // 月份吧
    int day;     // 几号啊
    float score; // 考多少分啊？？？？

} Birthday;

typedef struct
{
    int age;      // 什么年龄
    int id;       // 学号
    char diploma; // 什么学历？？
    float score;  // 考多少分啊？？？？
    Birthday birthday;
    //....
} Student;

int main()
{
    system("chcp 65001");
    Student stu;
    stu.id = 110;
    stu.age = 18;
    stu.birthday.yeay = 1990;
    stu.birthday.month = 5;
    stu.birthday.day = 1;
    printf("学生的id是%d\n", stu.id);
    printf("学生的年龄是%d\n", stu.age);
    printf("学生的年是%d\n", stu.birthday.yeay);
}