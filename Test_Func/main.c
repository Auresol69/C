#include <stdio.h>

const unsigned int a = 3, b = 4;

void caculate(unsigned int *x){
	if (*x & 0b001)
		printf("%u + %u = %d\n", a, b, a+b);
	if (*x & 0b010)
		printf("%u - %u = %d\n", a, b, a-b);
	if (*x & 0b100)
		printf("%u * %u = %d\n", a, b, a*b);
}

int main(void)
{
	unsigned int x = 0b100 | 0b001;
	printf("Nhap thao tac ban muon: ");
	scanf("%u",&x);
	caculate(&x);
	return 0U;
}
