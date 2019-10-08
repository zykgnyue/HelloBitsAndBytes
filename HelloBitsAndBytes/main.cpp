#include <cstdio>
int sum(int x, int y);

int sum(int x, int y)
{
	return x + y;
}

int main()
{
    printf("hello from HelloBitsAndBytes on WSL!\n");
		printf("5+2=%d\n", sum(5, 2));

		//singed int shify
		int x = -8;
		printf("X>>1=%d,%.4x\n", x >> 1,x>>1);
		x >>= 2;

		printf("X>>2=%d,%.4x\n", x, x);

//		int lval = 0xFEDCBA98 << 32;
		int lval = 0xFEDCBA98;
		
		lval <<= 32;

		printf("lval << 32:lval=%.8x, int bytes=%d\n", lval,sizeof(int));

		lval <<= 33;
		printf("lval<<33:lval=%.8x, int bytes=%d\n", lval, sizeof(int));


		printf("(lval<<32)=%.8x, int bytes=%d\n", lval << 32, sizeof(int));
		printf("(lval>>33)=%.8x, int bytes=%d\n", lval >>33, sizeof(int));

		//constant shift by compiler 
		lval = 0xFEDCBA98<<32;
		printf("lval=%.8x, int bytes=%d\n", lval, sizeof(int));

    return 0;
}

