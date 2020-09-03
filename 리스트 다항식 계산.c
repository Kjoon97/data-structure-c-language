/*#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode { // ��� Ÿ��
	int coef;
	int expon;
	struct ListNode *link;
} ListNode;

// ���� ����Ʈ ���
typedef struct ListType { // ����Ʈ ��� Ÿ��
	int size;
	ListNode *head;
	ListNode *tail;
} ListType;

// ���� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

//  ����Ʈ ��� ���� �Լ�
ListType* create()
{
	ListType *plist = (ListType *)malloc(sizeof(ListType));
	plist->size = 0;
	plist->head = plist->tail = NULL;
	return plist;
}

// plist�� ���� ����Ʈ�� ����� ����Ű�� ������, coef�� ���, 
// expon�� ����
void insert_last(ListType* plist, int coef, int expon)
{
	ListNode* temp =
		(ListNode *)malloc(sizeof(ListNode));
	if (temp == NULL) error("�޸� �Ҵ� ����");
	temp->coef = coef;
	temp->expon = expon;
	temp->link = NULL;
	if (plist->tail == NULL) {
		plist->head = plist->tail = temp;
	}
	else {
		plist->tail->link = temp;
		plist->tail = temp;
	}
	plist->size++;
}

// list3 = list1 + list2
void poly_add(ListType* plist1, ListType* plist2, ListType* plist3)
{
	ListNode* a = plist1->head;
	ListNode* b = plist2->head;
	int sum;

	while (a && b) {
		if (a->expon == b->expon) {   // a�� ���� > b�� ����
			sum = a->coef + b->coef;
			if (sum != 0) insert_last(plist3, sum, a->expon);
			a = a->link; b = b->link;
		}
		else if (a->expon > b->expon) {  // a�� ���� == b�� ���� 
			insert_last(plist3, a->coef, a->expon);
			a = a->link;
		}
		else {					// a�� ���� < b�� ����
			insert_last(plist3, b->coef, b->expon);
			b = b->link;
		}
	}

	// a�� b���� �ϳ��� ���� ������ �Ǹ� �����ִ� �׵��� ��� 
	// ��� ���׽����� ����
	for (; a != NULL; a = a->link)
		insert_last(plist3, a->coef, a->expon);
	for (; b != NULL; b = b->link)
		insert_last(plist3, b->coef, b->expon);
}

void poly_sub(ListType* plist1, ListType* plist2, ListType* plist4)
{
	ListNode* a = plist1->head;
	ListNode* b = plist2->head;
	int sub;

	while (a && b) {
		if (a->expon == b->expon) {    // a�� ���� == b�� ����
			sub = a->coef - b->coef;
			if (sub != 0) insert_last(plist4, sub, a->expon);
			a = a->link; b = b->link;
		}
		else if (a->expon > b->expon) {  // a�� ���� > b�� ����
			insert_last(plist4, a->coef, a->expon);
			a = a->link;
		}
		else {					// a�� ���� < b�� ����
			insert_last(plist4, -b->coef, b->expon);
			b = b->link;
		}
	}

	// a�� b���� �ϳ��� ���� ������ �Ǹ� �����ִ� �׵��� ��� 
	// ��� ���׽����� ����
	for (; a != NULL; a = a->link)
		insert_last(plist4, a->coef, a->expon);
	for (; b != NULL; b = b->link)
		insert_last(plist4, -b->coef, b->expon);
}


void poly_print(ListType* plist)
{
	ListNode* p = plist->head;

	for (; p; p = p->link) {
		printf("%d^%d + ", p->coef, p->expon);
	}
	printf("\n");
}

//
int main(void)
{
	ListType *list1, *list2, *list3, *list4;
	int c1, c2, e1, e2;
	int i;
	// ���� ����Ʈ ��� ����
	list1 = create();
	list2 = create();
	list3 = create();
	list4 = create();

	// ���׽� 1�� ���� 
	printf("���׽� 1�� ���� \n");
	for (i = 0; i < 3; i++) {
		printf("%d���� ����� ������ �Է��ϼ���:", i+1);
		scanf("%d", &c1);
		scanf("%d", &e1);
		insert_last(list1, c1, e1);
	}
	// ���׽� 2�� ���� 
	printf("���׽� 2�� ���� \n");
	for (i = 0; i < 3; i++) {
		printf("%d���� ����� ������ �Է��ϼ���:", i + 1);
		scanf("%d", &c2);
		scanf("%d", &e2);
		insert_last(list2, c2, e2);
	}
	printf("���׽�1: ");
	poly_print(list1);
	printf("���׽�2: ");
	poly_print(list2);

	// ���׽� 3 = ���׽� 1 + ���׽� 2
	poly_add(list1, list2, list3);
	printf("���׽�1 + ���׽�2: ");
	poly_print(list3);
	poly_sub(list1, list2, list4);
	printf("���׽�1 - ���׽�2: ");
	poly_print(list4);
	free(list1); free(list2); free(list3); free(list4);
}*/