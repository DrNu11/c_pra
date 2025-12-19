#include <REGX52.H>
#include <INTRINS.H>

// 1. 这个函数必须放在 main 的外面（上面）！
// 2. 注意参数 xms，它能接收你输入的 200
void Delay(unsigned int xms)
{
    unsigned char i, j;
    while (xms--) // xms 是多少，就循环多少次 1ms
    {
        _nop_(); // 空指令，微调时间用的
        i = 2;
        j = 199;
        do
        {
            while (--j)
                ;
        } while (--i);
    }
}

void main()
{
    while (1)
    {
        // 第 1 个灯
        P2 = 0xFE;
        Delay(200); // 现在 Delay 函数能听懂 200 是什么意思了

        // 第 2 个灯
        P2 = 0xFD;
        Delay(200);
        // 第 3 个灯
        P2 = 0xFB;
        Delay(200);

        // 第 4 个灯
        P2 = 0xF7;
        Delay(200);

        // 第 5 个灯
        P2 = 0xEF;
        Delay(200);

        // 第 6 个灯
        P2 = 0xDF;
        Delay(200);

        // 第 7 个灯
        P2 = 0xBF;
        Delay(200);

        // 第 8 个灯
        P2 = 0x7F;
        Delay(200);
    }
}