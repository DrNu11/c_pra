#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    char shuju[] = "Hi,50214,Nihao";
    int shuzi = 0;
    int zimu = 0;
    int kongge = 0;
    int qita = 0;
    int i;
    for (i = 0; i < shuju[i] != '\0'; i++)
    {
        char c = shuju[i];
        if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
        {

            zimu++;
        }
        else if ((c > '0' && c < '9'))
        {

            shuzi++;
        }

        else if ((c = ' '))
        {

            kongge++;
        }
        else
        {

            qita++;
        }

        printf("分析完毕！\n");
        printf("原始数据: %s\n", shuju);
        printf("--------------------\n");
        printf("英文字母: %d 个\n", zimu);
        printf("数字字符: %d 个\n", shuzi);
        printf("空格数量: %d 个\n", kongge);
        printf("其他符号: %d 个\n", qita);
    };
}