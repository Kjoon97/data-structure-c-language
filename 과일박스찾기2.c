/*
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int seq_search(int ar[], int key)
{
	int i;
	for (i = 0; i < 5; i++) // �迭���� ��ŭ �ݺ�
	{
		if (ar[i] == key)  // ã�����ϴ� ���� �´��� Ȯ��
			return i;      // ������ �ε������� ��ȯ
	}
	return -1;
}
int main(void)
{
	int arr[] = { 5,3,2,1,4 };  // 5���� ���ڴ� �޴� ��ȣ�̴�. �迭 ������� ���ϵ��� ������ִ�.
	int idx, n;
	clock_t start, stop;
	double duration;

	while (1) // �����ϱ� �������� �޴����� �ݺ������� ��µȴ�.
	{
		printf("��5���� ���ϻ��ڰ� �ִ�.���ϴ� ������ ��ȣ�� �Է��ϼ����\n");
		printf("-------------�޴�---------------\n");
		printf("1.���\n");
		printf("2.��\n");
		printf("3.����\n");
		printf("4.����\n");
		printf("5.�ٳ���\n");
		printf("6.����, ����\n");
		printf("----------------------------------\n");
		scanf("%d", &n);
		if (n == 6) return 0;                         // 6�� ������ ����
		start = clock();                                 // ���� �ð� ���� ����
	idx = seq_search(arr, n);  // �Լ� ȣ�� 
		stop = clock();                               // ���� �ð� ���� ���� 
		if (idx == -1)
			printf("Ž�� ����, ����1~6�� �ϳ��� �Է����ּ���.\n");
		else
			printf(">>>>ã�����Ͻô� ������ %d��° �ڽ��� �ֽ��ϴ�.\n", idx + 1);
		duration = (double)(stop - start) / CLOCKS_PER_SEC;
		printf(">>>>����ð��� %f���Դϴ�\n", duration);
		printf("\n");
		printf("\n");
		printf("\n");
	}
	return 0;
}*/