#include<stdio.h>
int main(void)
{
	int sign = 1;//sign:���ź���
	double deno = 2.0, sum = 1.0, term;//deno:��ĸ 
	while (deno <= 100)
	{
		sign = -sign;
		term = sign / deno;//��ʽ
		sum = sum + term;
		deno = deno + 1;//��ĸ����
	}
	printf("%f\n", sum);
		return 0;
	 
}