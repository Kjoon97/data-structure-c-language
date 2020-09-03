/*#include <stdio.h>
#include <stdlib.h>
#define MAX 100 // 10의 승수 만큼 감소/증가 시켜 실험해볼 것
#define MAX_QUEUE_SIZE 300
int black_cnt, red_cnt, blue_cnt, error_cnt, error_percent, total_cnt, black_err,blue_err,red_err;
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
int main()
{
	QueueType queue;
	init_queue(&queue);
	srand(time(NULL));
	const int error_percent = MAX * 5 / 100; // 5%의 불량률

	for (int i = 0; i < MAX; i++)
	{
		int rand1 = rand() % MAX;
		enqueue(&queue, rand1);
		printf("%03d개 볼펜생산 -> 볼펜번호%d\n\n", i, rand1);
		if (rand1 % 10 == 0)
			red_cnt++;
		if (rand1 % 10 == 1)
			blue_cnt++;
		if ((rand1 % 10 >= 2) && (rand1 % 10 <= 9))
			black_cnt++;
	}
	total_cnt = black_cnt + red_cnt + blue_cnt;
	printf("\n\n총생산볼펜 %d=> 검%d, 빨%d, 파%d \n\n", total_cnt, black_cnt, red_cnt, blue_cnt);
    printf("불량률%d%%\n\n", error_percent);
	for (int i = 0; i < error_percent; i++)
	{
		int rand2 = rand();
		if (rand2 % 5 == 0) {
			int rand1 = dequeue(&queue);
			printf("불량 볼펜 :빨간색 ,번호:%d\n", rand1);
			red_err++;
		}
		if (rand2 % 5 == 1) {
			int rand1 = dequeue(&queue);
			printf("불량 볼펜 :파란색 ,번호:%d\n", rand1);
			blue_err++;
		}
		if ((rand2 % 5 >= 2) && (rand2 % 5 <= 4)) {
			int rand1 = dequeue(&queue);
			printf("불량 볼펜 :검은색 ,번호:%d\n", rand1);
			black_err++;
		}
	}
	return 0;
}*/