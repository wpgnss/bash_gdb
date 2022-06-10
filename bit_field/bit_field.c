#include <stdio.h>

typedef struct bit_field {
    unsigned int a : 2;
    unsigned int b : 10;
    unsigned int c : 32;
} BitField_t;

int main()
{
    BitField_t bf;

    bf.a = 10000;
    bf.b = 1000;
    bf.c = 10000;

    printf("%u\n", bf.a);    //   1:        1, 비트 1개만 저장됨
    printf("%u\n", bf.b);    //   7:      111, 비트 3개만 저장됨
    printf("%u\n", bf.c);    // 127: 111 1111, 비트 7개만 저장됨
	
	printf("struct sizeof (%d)\n", sizeof(BitField_t));
//	printf("uint sizeof (%d)\n", sizeof(unsigned int));
//	printf("uint sizeof (%d)\n", sizeof(unsigned short));
//	printf("struct sizeof (%d)\n", sizeof(f1.a));
    return 0;
}