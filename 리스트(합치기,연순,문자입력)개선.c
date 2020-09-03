/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[100];
} element;

typedef struct ListNode { 	// ��� Ÿ��
	element data;
	struct ListNode *link;
} ListNode;

// ���� ó�� �Լ�
void error(char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
ListNode* insert_first(ListNode *head, element value)
{
	ListNode *p = (ListNode *)malloc(sizeof(ListNode));	//(1)
	p->data = value;					// (2)
	p->link = head;	// ��� �������� ���� ����	//(3)
	head = p;	// ��� ������ ����		//(4)
	return head;
}

void print_list(ListNode *head) //����Ʈ�� ����ϴ� �Լ�
{
	for (ListNode *p = head; p != NULL; p = p->link)
		printf("%s /", p->data.name);
	printf("NULL \n");
}

ListNode* concat_list(ListNode *head1, ListNode *head2) //����Ʈ�� ��ġ�� �Լ�
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
ListNode* reverse(ListNode *head)  //����Ʈ�� ���������ϴ� �Լ�
{
	// ��ȸ �����ͷ� p, q, r�� ���
	ListNode *p, *q, *r;

	p = head;         // p�� �������� ���� ����Ʈ
	q = NULL;        // q�� �������� ���� ���
	while (p != NULL) {
		r = q;          // r�� �������� �� ����Ʈ.    
						// r�� q, q�� p�� ���ʷ� ���󰣴�.
		q = p;
		p = p->link;
		q->link = r;      // q�� ��ũ ������ �ٲ۴�.
	}
	return q;
}
// �׽�Ʈ ���α׷�
int main(void)
{
	ListNode *head1 = NULL;
	ListNode *head2 = NULL;
	ListNode *reverse_total = NULL;
	element data;
	char a[100];
	int i;
	printf("------ù ��° ����Ʈ�� ���� �̸��� �Է��ϼ���--------\n");
	for (i = 0; i < 3; i++) {
		printf("���� �̸��� �Է��ϼ���:");
		scanf("%s", &a);
		strcpy(data.name, a);
		head1 = insert_first(head1, data);
	}
	printf("\n");
	printf("�Է� �Ϸ�! :");
	print_list(head1);
	printf("\n");
	printf("------�� ��° ����Ʈ�� ���� �̸��� �Է��ϼ���--------\n");
	for (i = 0; i < 3; i++) {
		printf("���� �̸��� �Է��ϼ���:");
		scanf("%s", &a);
		strcpy(data.name, a);
		head2 = insert_first(head2, data);
	}
	printf("\n");
	printf("�Է� �Ϸ�! :");
	print_list(head2);

	ListNode *total = concat_list(head1, head2);
	printf("\n");
	printf(">>>>>��ü ���� ����Ʈ ���: ");
	print_list(total);
	printf("\n");

	reverse_total = reverse(total);
	printf(">>>>>��ü ���� ����Ʈ �������� ���: ");
	print_list(reverse_total);
	printf("\n");
	return 0;
}*/