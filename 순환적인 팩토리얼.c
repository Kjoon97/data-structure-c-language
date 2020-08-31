/*#include<stdio.h>
int factorial(int n)           // 팩토리얼 함수
{
	if (n <= 1) return (1);         // n이 1이하일 경우 1반환
	else return (n*factorial(n - 1));   // n이 1보다 클 경우 n*factorial(n-1)로 factorial()이 순환된다.
}

int main(void)
{ 
	int n;                              // 입력할 숫자가 저장될 공간이자 factorial()의 매개변수를 위한 변수
	int result;                         // 함수 호출하기 위한 변수 result
	
	printf("숫자를 입력하세요:");
	scanf("%d", &n);                  // 입력한 숫자가 n에 저장됨

	result = factorial(n);            // 함수 호출

	printf("펙토리얼 값은 %d입니다\n", result);     // 호출값을 출력 

	return 0;
}*/