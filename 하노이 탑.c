/*#include<stdio.h>
#include<time.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1) printf("원판1을 %c에서 %c으로 옮긴다.\n", from, to);
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판%d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}

}
int main(void)
{
	clock_t start, stop; // start, stop 선언
	double duration;
	start = clock();         // 수행시간 측정 시작 
	hanoi_tower(4, 'A', 'B', 'C');
	
	stop = clock();                // 수행 시간 측정 종료 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;   // 수행시간 계산
	printf("수행시간은 %f초입니다\n", duration);   // 수행 시간 출력
	return 0;
}*/