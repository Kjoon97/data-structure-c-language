/*#include <stdio.h>
#include<stdlib.h>
void get_integers(int list[], int num)
{
	printf("%d개의 정수를 입력하시오\n", num);
	for (int i = 0; i < num; ++i)
	{
		printf("%d번째 정수:", i+1);
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
	printf("몇 개의 정수를 입력할 것입니까");
	scanf("%d", &num);
	list = (int *)malloc(num * sizeof(int));
	if (list == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(0);
	}
	get_integers(list, num);
	printf("합 = %d \n", cal_sum(list,num));
	free(list);
	return 0;
}*/