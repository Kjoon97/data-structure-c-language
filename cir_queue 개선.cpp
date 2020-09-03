/*
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
// ===== ����ť �ڵ� ���� ======
#define MAX_QUEUE_SIZE 5
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

int main(void)
{
	clock_t start, stop;
	double duration;
	QueueType queue;
	int element;    
	int sum = 0;      // ������ ���� ���� �߰�
	int mul = 1;      // ������ ���� ���� �߰�
	int sub;      // ������ ���� ���� �߰�
	int div;      // �������� ���� ���� �߰�
	init_queue(&queue);         // ť �ʱ�ȭ
	printf("--������ �߰� �ܰ�--\n");
	start = clock();
	while (!is_full(&queue))
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
		sum = sum + element;      // ������ ���� ��
		mul = mul *element;      // ������ ���� ��
		printf("�Էµ� �������� ��: %d \n", sum);   // �� ���
		printf("�Էµ� �������� ��: %d \n", mul);   // �� ���
		printf("\n");
		sub = sum;           // ���� ����� sub�� �����Ѵ�.
		div = mul;          // ���� ����� div�� �����Ѵ�.
	} 
	printf("ť�� ��ȭ�����Դϴ�.\n\n");
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>����ð��� %f���Դϴ�\n", duration);

	printf("\n--������ ���� �ܰ�--\n");
	start = clock();
	while (!is_empty(&queue))
	{
		element = dequeue(&queue);
		printf("������ ����: %d \n", element);
		queue_print(&queue);
		sub = sub - element;               // ������ ���� ��
		div = div / element;              // �������� ���� ��
		printf("���� ������ �� ��:%d \n", sub);        //�� ���� ��� �� ���
		printf("���� ������ ���� ��:%d \n", div);     //���� ���� ��� �� ���
		printf("\n");
	}
	printf("ť�� ��������Դϴ�.\n");
	stop = clock();
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>����ð��� %f���Դϴ�\n", duration);
	return 0;
}*/