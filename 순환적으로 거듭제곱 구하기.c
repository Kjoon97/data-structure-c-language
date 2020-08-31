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
	int a, b;                     // 밑을 저장할 a, 지수를 저장할 b 선언
	printf("밑을 입력하세요;");
	scanf("%d", &a);
	printf("지수를 입력하세요:");
	scanf("%d", &b);
	
	printf("결과는 %d입니다.", power(a,b));   // 사용자가 입력한 값을 power( , )함수에 넣은 값 출력

	return 0;
	
}*/