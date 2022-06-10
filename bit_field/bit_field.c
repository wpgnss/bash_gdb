#include <stdio.h>

typedef struct bit_field {
    unsigned int a : 2;
    unsigned int b : 10;
    unsigned int c : 32;
} BitField_t;

typedef struct normal_struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
} NormalStruct_t;

typedef struct mixed_struct {
    unsigned int a: 3;
    unsigned int b;
    unsigned int c;
} MixedStruct_t;

int main()
{
    BitField_t bf;

    bf.a = 10000;
    bf.b = 10000;
    bf.c = 10000;

    printf("%u\n", bf.a);    //  0:     10000 & b11 (2bit)
    printf("%u\n", bf.b);    //  784:   10000 & b1111111111 (10bit) 
    printf("%u\n", bf.c);    //  10000: 10000 & b1111.....1111 (32bit) 
	
	printf("bitfield struct sizeof (%d)\n", sizeof(BitField_t));
	printf("normal struct sizeof (%d)\n", sizeof(NormalStruct_t));
	printf("mixed struct sizeof (%d)\n", sizeof(MixedStruct_t));
    return 0;
}