/*#include <stdio.h>
#include <stdlib.h>
#include<time.h>

typedef char element[100];
typedef struct ListNode { 	// 노드 타입
	element data;
	struct ListNode *link;
} ListNode;

typedef struct CListType {
	ListNode *head;
} CListType;

// 리스트의 항목 출력
void print_list(CListType* L)
{
	ListNode* p;

	if (L->head == NULL) return;
	p = L->head->link;
	do {
		printf("%s->", p->data);
		p = p->link;
	} while (p != L->head);
	printf("%s->", p->data); // 마지막 노드 출력
}

void insert_first(CListType* L, element data)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	strcpy(node->data, data);
	if (L->head == NULL) {
		L->head = node;
		node->link = L->head;
	}
	else {
		node->link = L->head->link;	// (1)
		L->head->link = node;		// (2)
	}
}
// 원형 연결 리스트 테스트 프로그램
int main(void)
{
	srand(time(NULL));
	int diceA, diceB;

	CListType list = { NULL };

	insert_first(&list, "KIM");
	insert_first(&list, "PARK");
	insert_first(&list, "CHOI");

	ListNode* p = list.head;
	for (int i = 0; i< 50; i++) {
		printf("현재 차례=%s \n", p->data);
		diceA = rand() % 6 + 1;
		diceB = rand() % 6 + 1;
		printf("주사위A :%d, 주사위B :%d\n", diceA, diceB);
		if (diceA == diceB) {
			printf("현재 차례=%s 한 번 더! \n", p->data);
			p = p->link;
		}
		else
			p = p->link;
	}
	return 0;
}
*/