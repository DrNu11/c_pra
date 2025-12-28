#include <stdio.h>
#include <string.h>
int main()
{
 
    char s[] = "0123456789";
    char a[100];
    int len = 0;
    len = strlen(s);        
    strcpy(a, s); 
   char *p =&a;
    printf("%d\n", len);
    printf("%d\n", p);
}