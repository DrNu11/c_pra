#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    system("chcp 65001");
    int arr[5] = {3, 2, 3, 4, 5};

    // 选项 B 的情况：打印 arr[0] 的值
    printf("arr[0] 的值 (那个人): %d \n", arr[0]);

    printf("arr 的值 (门牌号): %p\n", arr);

    printf("&arr[0] 的值 (第一个人的门牌号): %p \n", &arr[1]);

    return 0;
}