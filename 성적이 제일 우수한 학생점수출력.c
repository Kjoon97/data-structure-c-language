/*#include<stdio.h>
#include<time.h>
#define MAX_ELEMENTS 10
int scores[MAX_ELEMENTS];

typedef struct _values // 2개의 값을 반환시키기위해 구조체 이용
{
	int largest;    // 가장 높은 성적 저장하기위한 변수
	int num;        // 학생 번호 저장하기 위한 변수
}values;

values get_max_score(int n, int num) // 성적이 제일 우수한 학생 번호와 성적 반환하는 함수
{
	int i, largest;
	values t;
    largest = scores[0];
	for (i = 1; i < n; i++) {
		if (scores[i] > largest) {
			largest = scores[i];
			num = i;
		}
	}
	t.largest = largest;
	t.num = num;
	return t;
}

int main(void)
{
	values val;
	clock_t start, stop;   
	double duration;
	int i;
	
	for (i = 0; i < 10; i++)        // 학생의 점수 입력 10번 반복 
	{
		printf("%d번학생의 점수를 입력하세요:", i + 1);
		scanf("%d", &scores[i]);
	}
	start = clock();                 // 수행시간 측정 시작 
	val = get_max_score(10 , 0);
	stop = clock();                // 수행 시간 측정 종료 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>>>>성적이 제일 우수한 학생은 %d번 학생, 학생의 점수는%d점입니다 \n", val.num +1 ,val.largest);
	printf("수행시간은 %f초입니다\n", duration);
	return 0;
}*/