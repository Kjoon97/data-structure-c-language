/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct ListNode { 	// 노드 타입
	double credit;
	int num;
	char name[30];
	struct ListNode *link;
} ListNode;
// 리스트의 항목 출력
void print_list(ListNode* head)
{
	ListNode* p;

	if (head == NULL) return;
	p = head->link;
	do {
		printf("%d->", p->num);
		printf("%s->", p->name);
		printf("%.1lf->", p->credit);
		p = p->link;
	} while (p != head); // 마지막 노드 출력
	printf("%d->", p->num);
	printf("%s->", p->name);
	printf("%.1lf->", p->credit);
}
ListNode* insert_first(ListNode* head, int num, char name[], double credit)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->num = num;
	node->credit = credit;
	strcpy(node->name, name);
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;	// (1)
		head->link = node;		// (2)
	}
	return head;	// 변경된 헤드 포인터를 반환한다. 
}
ListNode* insert_last(ListNode* head, int num, char name[], double credit)
{
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->num = num;
	node->credit = credit;
	strcpy(node->name, name);
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;	// (1)
		head->link = node;		// (2)
		head = node;		// (3)
	}
	return head;	// 변경된 헤드 포인터를 반환한다. 
}
// 원형 연결 리스트 테스트 프로그램

int search(ListNode* head, int count) {

	for (int i = 0; i<4; i++) {
		if (head->credit <= 3.5) {
			head = head->link;
			count = count + 1;
		}
		else head = head->link;
	}
	return count;
}
int main(void)
{
	ListNode *head = NULL;
	int count = 0;
	head = insert_last(head, 2017156001, "강준혁", 4.0);
	head = insert_last(head, 2017156002, "박재민", 3.5);
	head = insert_last(head, 2017156003, "김수정", 3.2);
	head = insert_first(head, 2017156004, "한태혁", 2.5);
	print_list(head);
	count = search(head, count);
	printf("\n");
	printf("자료구조 학점이 3.5이하인 학생 수: %d\n", count);
	return 0;
}*/