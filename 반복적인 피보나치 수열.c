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
    printf("���°������ �Ǻ���ġ ������ ����ͳ���:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    printf("%d ", fib(i));

   return 0;
}*/