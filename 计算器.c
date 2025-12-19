#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // 检查有没有给我传参数（argc 至少是 1，因为程序名本身算一个）
    system("chcp 65001");
    if (argc > 1) {
        printf("你好，%s！\n", argv[1]); 
    } 
    else 
    {
        printf("你好，陌生人！(试着在启动命令后面加个名字)\n");
    }
    return 0;
    system("pause");
}
