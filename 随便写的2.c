#include <stdio.h> // 引入标准库

// --- 第一步：函数声明 (带分号) ---
// 这就像是把“菜单”先贴出来，告诉编译器：“我有这个功能，你先别管具体怎么做，反正我有。”
// 注意：这里必须加分号！
int calculate_area(int length, int width);

// --- 第二步：主函数 main ---
// 因为上面已经“声明”过了，所以 main 函数敢直接用它
int main()
{
    int l = 10; // 定义长
    int w = 5;  // 定义宽

    // 调用函数：这里虽然还没看到具体的代码，但编译器知道它存在
    int area = calculate_area(l, w);

    printf("矩形的面积是: %d\n", area);

    return 0;
}

// --- 第三步：函数定义 (带花括号) ---
// 这才是真正的“厨房”，具体干活的地方
// 注意：这里不能加分号，要用花括号把逻辑包起来
int calculate_area(int length, int width)
{
    int result = length * width; // 计算面积
    return result;               // 把结果返回给 main 函数
}