/*
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// ===== 원형큐 코드 시작 ======
#define MAX_QUEUE_SIZE 5
typedef char element;
typedef struct { // 큐 타입
	element  data[MAX_QUEUE_SIZE];
	int  front, rear;
} QueueType;
// 오류 함수
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// 공백 상태 검출 함수
void init_queue(QueueType *q)
{
	q->front = q->rear = 0;
}
// 공백 상태 검출 함수
int is_empty(QueueType *q)
{
	return (q->front == q->rear);
}
// 포화 상태 검출 함수
int is_full(QueueType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
// 원형큐 출력 함수
void queue_print(QueueType *q)
{
	printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d | ", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}
// 삽입 함수
void enqueue(QueueType *q, element item)
{
	if (is_full(q))
		error("큐가 포화상태입니다");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}
// 삭제 함수
element dequeue(QueueType *q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
// 삭제 함수
element peek(QueueType *q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}
// ===== 원형큐 코드 끝 ======

int main(void)
{
	clock_t start, stop;
	double duration;
	QueueType queue;
	int element;    
	int sum = 0;      // 덧셈을 위한 변수 추가
	int mul = 1;      // 곱셈을 위한 변수 추가
	int sub;      // 뺄셈을 위한 변수 추가
	int div;      // 나눗셈을 위한 변수 추가
	init_queue(&queue);         // 큐 초기화
	printf("--데이터 추가 단계--\n");
	start = clock();
	while (!is_full(&queue))
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
		sum = sum + element;      // 덧셈을 위한 식
		mul = mul *element;      // 곱셈을 위한 식
		printf("입력된 정수들의 합: %d \n", sum);   // 합 출력
		printf("입력된 정수들의 곱: %d \n", mul);   // 곱 출력
		printf("\n");
		sub = sum;           // 합의 결과를 sub에 저장한다.
		div = mul;          // 곱의 결과를 div에 저장한다.
	} 
	printf("큐는 포화상태입니다.\n\n");
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>수행시간은 %f초입니다\n", duration);

	printf("\n--데이터 삭제 단계--\n");
	start = clock();
	while (!is_empty(&queue))
	{
		element = dequeue(&queue);
		printf("꺼내진 정수: %d \n", element);
		queue_print(&queue);
		sub = sub - element;               // 뺄셈을 위한 식
		div = div / element;              // 나눗셈을 위한 식
		printf("꺼낸 정수를 뺀 값:%d \n", sub);        //뺀 뒤의 결과 값 출력
		printf("꺼낸 정수를 나눈 값:%d \n", div);     //나눈 뒤의 결과 값 출력
		printf("\n");
	}
	printf("큐는 공백상태입니다.\n");
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>수행시간은 %f초입니다\n", duration);
	return 0;
}*/