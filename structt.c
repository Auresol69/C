#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    char color[20];
} Car;

int main(void)
{
    Car car1 = {"Toyota", 5, "Red"};
    Car car2 = {"Honda", 3, "Blue"};
    Car car3 = {"Ford", 2, "Black"};

    Car cars[] =
        {car1, car2, car3};

    // lấy chiều dài mảng struct
    int size = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%s %d %s\n", cars[i].name, cars[i].age, cars[i].color);
    }

    return 0;
}