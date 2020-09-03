/*#include<stdio.h>
int fib(int n)
{
	if (n == 1) return 0;     //n이 1이면 0을 반환
	if (n == 2) return 1;     //n이 1이면 1을 반환
	return (fib(n - 1) + fib(n - 2));
}
int main(void)
{
	int n,i;
	printf("몇번째까지의 피보나치 수열을 보고싶나요:");
	scanf("%d", &n);                // 입력 
	for (i = 1; i <= n; i++)
		printf("%d ", fib(i));    //n번째까지의 수열을 나열한다.
	return 0;
}*/