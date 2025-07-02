#include <stdio.h>

int main()
{
    size_t intsize;
    intsize = sizeof(int);
    printf("Kich thuoc cua kieu int: %zd byte\n", intsize);
    typedef long long ll;
    ll longsize;
    longsize = sizeof(ll);
    return 0;
}