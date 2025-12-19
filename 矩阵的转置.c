#include <stdio.h>

int main()
{
    // 1. 定义逆矩阵 A_inv (我们刚才辛苦算出来的)
    // 为了精度，用 double 类型
    double A_inv[3][3] = {
        {1.0, 0.0, -0.25},
        {-0.5, 0.0833333, 0.125}, // 1/12 ≈ 0.0833333
        {-2.0, 0.3333333, 1.5}    // 1/3 ≈ 0.3333333
    };

    // 2. 定义结果向量 B
    double B[3] = {0, 30, 0};

    // 3. 定义存放结果的数组 X (I1, I2, U1)
    double X[3] = {0};

    // 4. 矩阵乘法运算：行 x 列
    // X[i] = Sum( A_inv[i][j] * B[j] )
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            X[i] += A_inv[i][j] * B[j];
        }
    }

    // 5. 输出结果
    printf("计算结果：\n");
    printf("I1 = %.2f A\n", X[0]);
    printf("I2 = %.2f A\n", X[1]);
    printf("U1 = %.2f V\n", X[2]);

    return 0;
}