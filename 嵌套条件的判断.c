#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
    system("chcp 65001");
    int a, b;
    char c;
    while(1){
    printf("请输入你的成绩");
    scanf("%d", &a);
    c = (a >= 90) ? 'A' : ((a >= 60) ? 'B' : 'C');
    printf("grade=%c\n", c);
}
   return 0;
}