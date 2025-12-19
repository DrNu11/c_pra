#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
    system("chcp 65001");
    int i,j;
    for(i=1;i<=9;i++)
    {


for(j=0;j<i;j++)
    {
printf("%d*%d=%-2d ",i,j+1,i*(j+1));

    }
    printf("\n");
}




    printf("\n");
    return 0;
    }



