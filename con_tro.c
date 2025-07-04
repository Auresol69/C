#include <stdio.h>

void loww(char *c)
{
    *c += 32;
}

int main()
{
    char c = 'N';
    char *p = &c;
    printf("gia tri cua c: %c\ngia tri cua p: %p\ndia chi cua c: %p\ndia chi cua p: %p\n ", *p, p, &c, &p);
    loww(p);
    printf("sau khi thay doi...\n");
    printf("gia tri cua c: %c\ndia chi cua c: %p\n", *p, &c);
    return 0;
}