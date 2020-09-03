/*#include <stdio.h>
#include <string.h>
#include<stdlib.h>
typedef struct {
	int num;
	char name[7];
	char bloadtype[4];
	double credit;
	char address[50];
}element;
typedef struct TreeNode {
	element student;
	struct TreeNode *left, *right;
} TreeNode;

// ��ȯ���� Ž�� �Լ�
TreeNode * search(TreeNode * node, int key)
{
	if (node == NULL) return NULL;
	if (key == node->student.num) return node;
	else if (key < node->student.num)
		return search(node->left, key);
	else
		return search(node->right, key);
}
TreeNode * new_node(int item , char name[7], char bloadtype[4], double credit, char address[50])
{
	TreeNode * temp = (TreeNode *)malloc(sizeof(TreeNode));
	temp->student.num = item;
	strcpy(temp->student.name,name);
	strcpy(temp->student.bloadtype, bloadtype);
	temp->student.credit = credit;
	strcpy(temp->student.address, address);
	temp->left = temp->right = NULL;
	return temp;
}
TreeNode * insert_node(TreeNode * node, int key, char name[7], char bloadtype[4], double credit,char address[50])
{
	// Ʈ���� �����̸� ���ο� ��带 ��ȯ�Ѵ�. 
	if (node == NULL) return new_node(key,name, bloadtype, credit, address);

	// �׷��� ������ ��ȯ������ Ʈ���� ��������. 
	if (key < node->student.num)
		node->left = insert_node(node->left, key, name, bloadtype, credit, address);
	else if (key > node->student.num)
		node->right = insert_node(node->right, key, name, bloadtype, credit, address);

	// ����� ��Ʈ �����͸� ��ȯ�Ѵ�. 
	return node;
}
TreeNode * min_value_node(TreeNode * node)
{
	TreeNode * current = node;

	// �� ���� �ܸ� ��带 ã���� ������
	while (current->left != NULL)
		current = current->left;

	return current;
}
// ���� Ž�� Ʈ���� Ű�� �־����� Ű�� ����� ��带 �����ϰ� 
// ���ο� ��Ʈ ��带 ��ȯ�Ѵ�. 
TreeNode * delete_node(TreeNode * root, int key)
{
	if (root == NULL) return root;

	// ���� Ű�� ��Ʈ���� ������ ���� ���� Ʈ���� �ִ� ����
	if (key < root->student.num)
		root->left = delete_node(root->left, key);
	// ���� Ű�� ��Ʈ���� ũ�� ������ ���� Ʈ���� �ִ� ����
	else if (key > root->student.num)
		root->right = delete_node(root->right, key);
	// Ű�� ��Ʈ�� ������ �� ��带 �����ϸ� ��
	else {
		// ù ��°�� �� ��° ���
		if (root->left == NULL) {
			TreeNode * temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			TreeNode * temp = root->left;
			free(root);
			return temp;
		}
		// �� ��° ���
		TreeNode * temp = min_value_node(root->right);

		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
		root->student = temp->student;
		// �߿� ��ȸ�� �İ� ��带 �����Ѵ�. 
		root->right = delete_node(root->right, temp->student.num);
	}
	return root;
}

// ���� ��ȸ
void inorder(TreeNode * root) {
	if (root) {
		inorder(root->left);// ���ʼ���Ʈ�� ��ȸ
		printf("[%d] ", root->student.num);  // ��� �湮
		printf("[%s] ", root->student.name);
		printf("[%s] ", root->student.bloadtype);
		printf("[%.1lf��] ", root->student.credit);
		printf("[%s]\n", root->student.address);
		inorder(root->right);// �����ʼ���Ʈ�� ��ȸ
	}
}

int main(void)
{
	int deleteStudentnum, checkedStudentnum;
	TreeNode * root = NULL;
	TreeNode * tmp = NULL;
	TreeNode * check = NULL;
	root = insert_node(root, 2017156001,"������","O��",4.1,"101ȣ");
	root = insert_node(root, 2017156016,"�����", "B��", 3.5, "111ȣ");
	root = insert_node(root, 2017156005,"������", "A��", 3.0, "105ȣ");
	root = insert_node(root, 2019156006, "�ּ�ȣ", "AB��", 4.0, "115ȣ");
	root = insert_node(root, 2018156014, "�躸��", "B��", 3.9, "211ȣ");
	root = insert_node(root, 2017156027, "������", "0��", 3.7, "213ȣ");

	printf("���� Ž�� Ʈ�� ���� ��ȸ ��� \n");
	inorder(root);
	printf("\n\n");
		printf("������ �л��� �й��� �Է��ϼ���:");
		scanf("%d", &deleteStudentnum);
		root = delete_node(root, deleteStudentnum);
		printf("���� Ž�� Ʈ�� ���� ��� \n");
		inorder(root);
		printf("\n\n");
		printf("��ȸ�� �л��� �й��� �Է��ϼ���:");
		scanf("%d", &checkedStudentnum);
		if (search(root, checkedStudentnum) != NULL) {
			check = search(root, checkedStudentnum);
			printf("���� Ž�� Ʈ������ �л� ������ �߰���\n");
			printf("�̸�: %s  \n", check->student.name);
			printf("������: %s \n", check->student.bloadtype);
			printf("����: %.1lf \n", check->student.credit);
			printf("�ּ�: %s \n", check->student.address);
		}
	else
		printf("���� Ž�� Ʈ������ �ش� �л� ������ �߰߸��� \n");
	return 0;
}*/