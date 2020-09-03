/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int seq_search(int ar[], int key)
{
	int i;
	for (i = 0; i < 5; i++) // 배열개수 만큼 반복
	{
		if (ar[i] == key)  // 찾고자하는 값과 맞는지 확인
			return i;      // 맞으면 인덱스값을 반환
	}
	return -1;
}
int main(void)
{
	int arr[] = { 5,3,2,1,4 };  // 5개의 숫자는 메뉴 번호이다. 배열 순서대로 과일들이 담아져있다.
	int idx, n;
	clock_t start, stop;
	double duration;

	while (1) // 종료하기 전까지는 메뉴판이 반복적으로 출력된다.
	{
		printf("☞5개의 과일상자가 있다.원하는 과일의 번호를 입력하세요☜\n");
		printf("-------------메뉴---------------\n");
		printf("1.사과\n");
		printf("2.배\n");
		printf("3.포도\n");
		printf("4.딸기\n");
		printf("5.바나나\n");
		printf("6.없음, 종료\n");
		printf("----------------------------------\n");
		scanf("%d", &n);
		if (n == 6) return 0;                         // 6을 누르면 종료
		start = clock();                                 // 수행 시간 측정 시작
	idx = seq_search(arr, n);  // 함수 호출 
		stop = clock();                               // 수행 시간 측정 종료 
		if (idx == -1)
			printf("탐색 실패, 숫자1~6중 하나를 입력해주세요.\n");
		else
			printf(">>>>찾고자하시는 과일은 %d번째 박스에 있습니다.\n", idx + 1);
		duration = (double)(stop - start) / CLOCKS_PER_SEC;
		printf(">>>>수행시간은 %f초입니다\n", duration);
		printf("\n");
		printf("\n");
		printf("\n");
	}
	return 0;
}*/