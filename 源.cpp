#include<stdio.h>
int main(void)
{
	int sign = 1;//sign:符号函数
	double deno = 2.0, sum = 1.0, term;//deno:分母 
	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;//分式
		sum = sum + term;
		deno = deno + 1;//分母增大
	}
	printf("%f\n", sum);
		return 0;
	 
}