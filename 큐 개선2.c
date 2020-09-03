/*#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// ===== ����ť �ڵ� ���� ======
#define MAX_QUEUE_SIZE 500
typedef char element;
int apple, sell_apple, data;
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

int main(void)
{
	QueueType queue;

	init_queue(&queue);

	srand(time(NULL));

	for (int i = 0; i < MAX_QUEUE_SIZE; i++)
	{
		int rand1 = rand() % 100;
		enqueue(&queue, rand1);
		if (rand1 % 5 == 0) {	// 5�� ������ �������� 
			apple++;
		}
	}
	printf("A������ ����� ����� �� :%d\n", apple);

	for (int i = 0; i < apple; i++) 
	{
		int rand2 = rand() % 20;
		if (rand2 % 10 == 0) {
			data = dequeue(&queue);
			sell_apple++;
		}
	}
	printf("A�������� �ǸŵǴ� ����� �� :%d\n",sell_apple);
	return 0;
}*/