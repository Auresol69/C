#include <stdio.h>

// declare
int power(int, int); // function prototype

// definition
int power(int coso, int somu) // tham số = parameters
{
    int ket_qua = 1;
    for (int i = 1; i <= somu; i++)
    {
        ket_qua *= coso;
    }
    return ket_qua;
}

int main()
{
    int a = 2, b = 3;

    printf("%d\n", power(a, b)); // đối số = arguments
    // Note: cái mà truyền vào hàm power là 2, 3(không phải a, b)
    // truyền tham trị = pass by value
    return 0;
}