/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct ListNode { 	// ��� Ÿ��
	double credit;
	int num;
	char name[30];
	struct ListNode *link;
} ListNode;
// ����Ʈ�� �׸� ���
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
	} while (p != head); // ������ ��� ���
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
	return head;	// ����� ��� �����͸� ��ȯ�Ѵ�. 
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
	return head;	// ����� ��� �����͸� ��ȯ�Ѵ�. 
}
// ���� ���� ����Ʈ �׽�Ʈ ���α׷�

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
	head = insert_last(head, 2017156001, "������", 4.0);
	head = insert_last(head, 2017156002, "�����", 3.5);
	head = insert_last(head, 2017156003, "�����", 3.2);
	head = insert_first(head, 2017156004, "������", 2.5);
	print_list(head);
	count = search(head, count);
	printf("\n");
	printf("�ڷᱸ�� ������ 3.5������ �л� ��: %d\n", count);
	return 0;
}*/