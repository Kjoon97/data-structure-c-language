/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[100];
} element;

typedef struct ListNode { 	// 노드 타입
	element data;
	struct ListNode *link;
} ListNode;

// 오류 처리 함수
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
ListNode* insert_first(ListNode *head, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	//(1)
	p->data = value;					// (2)
	p->link = head;	// 헤드 포인터의 값을 복사	//(3)
	head = p;	// 헤드 포인터 변경		//(4)
	return head;
}

void print_list(ListNode *head) //리스트를 출력하는 함수
{
	for (ListNode *p = head; p != NULL; p = p->link)
		printf("%s /", p->data.name);
	printf("NULL \n");
}

ListNode* concat_list(ListNode *head1, ListNode *head2) //리스트를 합치는 함수
{
	if (head1 == NULL) return head2;
	else if (head2 == NULL) return head2;
	else {
		ListNode *p;
		p = head1;
		while (p->link != NULL)
			p = p->link;
		p->link = head2;
		return head1;
	}
}
ListNode* reverse(ListNode *head)  //리스트를 역순으로하는 함수
{
	// 순회 포인터로 p, q, r을 사용
	ListNode *p, *q, *r;

	p = head;         // p는 역순으로 만들 리스트
	q = NULL;        // q는 역순으로 만들 노드
	while (p != NULL) {
		r = q;          // r은 역순으로 된 리스트.    
						// r은 q, q는 p를 차례로 따라간다.
		q = p;
		p = p->link;
		q->link = r;      // q의 링크 방향을 바꾼다.
	}
	return q;
}
// 테스트 프로그램
int main(void)
{
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	ListNode *reverse_total = NULL;
	element data;
	char a[100];
	int i;
	printf("------첫 번째 리스트에 과일 이름을 입력하세요--------\n");
	for (i = 0; i < 3; i++) {
		printf("과일 이름을 입력하세요:");
		scanf("%s", &a);
		strcpy(data.name, a);
		head1 = insert_first(head1, data);
	}
	printf("\n");
	printf("입력 완료! :");
	print_list(head1);
	printf("\n");
	printf("------두 번째 리스트에 과일 이름을 입력하세요--------\n");
	for (i = 0; i < 3; i++) {
		printf("과일 이름을 입력하세요:");
		scanf("%s", &a);
		strcpy(data.name, a);
		head2 = insert_first(head2, data);
	}
	printf("\n");
	printf("입력 완료! :");
	print_list(head2);

	ListNode *total = concat_list(head1, head2);
	printf("\n");
	printf(">>>>>전체 과일 리스트 출력: ");
	print_list(total);
	printf("\n");

	reverse_total = reverse(total);
	printf(">>>>>전체 과일 리스트 역순으로 출력: ");
	print_list(reverse_total);
	printf("\n");
	return 0;
}*/