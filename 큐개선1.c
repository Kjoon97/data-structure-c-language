/*#include <stdio.h>
#include <stdlib.h>
#define MAX 100 // 10�� �¼� ��ŭ ����/���� ���� �����غ� ��
#define MAX_QUEUE_SIZE 300
int black_cnt, red_cnt, blue_cnt, error_cnt, error_percent, total_cnt, black_err,blue_err,red_err;
typedef char element;
typedef struct { // ť Ÿ��
	element  data[MAX_QUEUE_SIZE];
	int  front, rear;
} QueueType;
// ���� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
// ���� ���� ���� �Լ�
void init_queue(QueueType *q)
{
	q->front = q->rear = 0;
}
// ���� ���� ���� �Լ�
int is_empty(QueueType *q)
{
	return (q->front == q->rear);
}
// ��ȭ ���� ���� �Լ�
int is_full(QueueType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}
// ����ť ��� �Լ�
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
// ���� �Լ�
void enqueue(QueueType *q, element item)
{
	if (is_full(q))
		error("ť�� ��ȭ�����Դϴ�");
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}
// ���� �Լ�
element dequeue(QueueType *q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
// ���� �Լ�
element peek(QueueType *q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");
	return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}
// ===== ����ť �ڵ� �� ======
int main()
{
	QueueType queue;
	init_queue(&queue);
	srand(time(NULL));
	const int error_percent = MAX * 5 / 100; // 5%�� �ҷ���

	for (int i = 0; i < MAX; i++)
	{
		int rand1 = rand() % MAX;
		enqueue(&queue, rand1);
		printf("%03d�� ������� -> �����ȣ%d\n\n", i, rand1);
		if (rand1 % 10 == 0)
			red_cnt++;
		if (rand1 % 10 == 1)
			blue_cnt++;
		if ((rand1 % 10 >= 2) && (rand1 % 10 <= 9))
			black_cnt++;
	}
	total_cnt = black_cnt + red_cnt + blue_cnt;
	printf("\n\n�ѻ��꺼�� %d=> ��%d, ��%d, ��%d \n\n", total_cnt, black_cnt, red_cnt, blue_cnt);
    printf("�ҷ���%d%%\n\n", error_percent);
	for (int i = 0; i < error_percent; i++)
	{
		int rand2 = rand();
		if (rand2 % 5 == 0) {
			int rand1 = dequeue(&queue);
			printf("�ҷ� ���� :������ ,��ȣ:%d\n", rand1);
			red_err++;
		}
		if (rand2 % 5 == 1) {
			int rand1 = dequeue(&queue);
			printf("�ҷ� ���� :�Ķ��� ,��ȣ:%d\n", rand1);
			blue_err++;
		}
		if ((rand2 % 5 >= 2) && (rand2 % 5 <= 4)) {
			int rand1 = dequeue(&queue);
			printf("�ҷ� ���� :������ ,��ȣ:%d\n", rand1);
			black_err++;
		}
	}
	return 0;
}*/