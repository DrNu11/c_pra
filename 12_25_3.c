#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "0123456789";
    char s[11];
    int len = 0;
    len = strlen(a);
    strcpy(s, a);
    void *p = &s;
    char *d = &a;
    printf("length is %d\n", len);
    printf("%s\n", d);
    printf("%s\n", s);
    printf("%p\n", p);
    printf("%x\n", p);
    printf("%x\n", d);

    return 0;
}