/*#include<stdio.h>
int power(int x, int n)
{
	if (n == 0) return 1;               
	else if ((n % 2) == 0)
		return power(x*x, n / 2);
	else return x*power(x*x, (n - 1) / 2);
}
int main(void)
{
	int a, b;                     // ���� ������ a, ������ ������ b ����
	printf("���� �Է��ϼ���;");
	scanf("%d", &a);
	printf("������ �Է��ϼ���:");
	scanf("%d", &b);
	
	printf("����� %d�Դϴ�.", power(a,b));   // ����ڰ� �Է��� ���� power( , )�Լ��� ���� �� ���

	return 0;
	
}*/