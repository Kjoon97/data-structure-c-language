/*#include<stdio.h>
#include<time.h>
#define MAX_ELEMENTS 10
int scores[MAX_ELEMENTS];

typedef struct _values // 2���� ���� ��ȯ��Ű������ ����ü �̿�
{
	int largest;    // ���� ���� ���� �����ϱ����� ����
	int num;        // �л� ��ȣ �����ϱ� ���� ����
}values;

values get_max_score(int n, int num) // ������ ���� ����� �л� ��ȣ�� ���� ��ȯ�ϴ� �Լ�
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
	
	for (i = 0; i < 10; i++)        // �л��� ���� �Է� 10�� �ݺ� 
	{
		printf("%d���л��� ������ �Է��ϼ���:", i + 1);
		scanf("%d", &scores[i]);
	}
	start = clock();                 // ����ð� ���� ���� 
	val = get_max_score(10 , 0);
	stop = clock();                // ���� �ð� ���� ���� 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;
	printf(">>>>>>>������ ���� ����� �л��� %d�� �л�, �л��� ������%d���Դϴ� \n", val.num +1 ,val.largest);
	printf("����ð��� %f���Դϴ�\n", duration);
	return 0;
}*/