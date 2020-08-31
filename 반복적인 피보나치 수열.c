/*#include<stdio.h>

int fib(int n)
{
    if (n == 1) return 0;
    if (n == 2) return 1;

    int pp = 0;
	int p = 1;
	int result = 0;

	for (int i = 1; i <= n; i++)
	{
		result = p + pp;
		pp = p;
		p = result;
	}
	return result;
}
int main(void)
{
    int n,i;
    printf("몇번째까지의 피보나치 수열을 보고싶나요:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    printf("%d ", fib(i));

   return 0;
}*/