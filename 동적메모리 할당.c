/*#include <stdio.h>
#include<stdlib.h>
void get_integers(int list[], int num)
{
	printf("%d���� ������ �Է��Ͻÿ�\n", num);
	for (int i = 0; i < num; ++i)
	{
		printf("%d��° ����:", i+1);
		scanf("%d", &list[i]);
	}

}

int cal_sum(int list[], int num)
{
	int sum = 0;
	for (int i = 0; i < num; ++i) {
		sum += *(list + i);
	}
	return sum;
}

int main(void)
{
	int * list;
	int num;
	printf("�� ���� ������ �Է��� ���Դϱ�");
	scanf("%d", &num);
	list = (int *)malloc(num * sizeof(int));
	if (list == NULL) {
		printf("�޸𸮰� �����մϴ�.\n");
		exit(0);
	}
	get_integers(list, num);
	printf("�� = %d \n", cal_sum(list,num));
	free(list);
	return 0;
}*/