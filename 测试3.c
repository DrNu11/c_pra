#include <stdio.h>
int calculate_area(int length, int widgth);
int main(void)
{
    int chang = 100;
    int kuan = 50;
    int area = calculate_area(chang, kuan);
    printf("这个矩形的面积是%d\n", area);
    return 0;
}
int calculate_area(int length, int widgth)
{
int result =length*widgth;
return result;

}
