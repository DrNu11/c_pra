#include <stdio.h>

int main(void)
{
    int a, b;

    /* 不要在自动评测中输出提示语，直接读取输入 */
    if (scanf("%d %d", &a, &b) != 2) {
        /* 输入格式错误时直接返回非零状态 */
        return 1;
    }

    printf("%d+%d=%d ", a, b, a + b);
    printf("%d-%d=%d ", a, b, a - b);
    printf("%d*%d=%d ", a, b, a * b);
    if (b != 0) {
        printf("%d/%d=%.2f", a, b, (double)a / b);
    } else {
        printf("DivByZero");
    }

    printf("\n");
    return 0;
}