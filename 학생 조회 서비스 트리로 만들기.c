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

// 순환적인 탐색 함수
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
	// 트리가 공백이면 새로운 노드를 반환한다. 
	if (node == NULL) return new_node(key,name, bloadtype, credit, address);

	// 그렇지 않으면 순환적으로 트리를 내려간다. 
	if (key < node->student.num)
		node->left = insert_node(node->left, key, name, bloadtype, credit, address);
	else if (key > node->student.num)
		node->right = insert_node(node->right, key, name, bloadtype, credit, address);

	// 변경된 루트 포인터를 반환한다. 
	return node;
}
TreeNode * min_value_node(TreeNode * node)
{
	TreeNode * current = node;

	// 맨 왼쪽 단말 노드를 찾으러 내려감
	while (current->left != NULL)
		current = current->left;

	return current;
}
// 이진 탐색 트리와 키가 주어지면 키가 저장된 노드를 삭제하고 
// 새로운 루트 노드를 반환한다. 
TreeNode * delete_node(TreeNode * root, int key)
{
	if (root == NULL) return root;

	// 만약 키가 루트보다 작으면 왼쪽 서브 트리에 있는 것임
	if (key < root->student.num)
		root->left = delete_node(root->left, key);
	// 만약 키가 루트보다 크면 오른쪽 서브 트리에 있는 것임
	else if (key > root->student.num)
		root->right = delete_node(root->right, key);
	// 키가 루트와 같으면 이 노드를 삭제하면 됨
	else {
		// 첫 번째나 두 번째 경우
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
		// 세 번째 경우
		TreeNode * temp = min_value_node(root->right);

		// 중외 순회시 후계 노드를 복사한다. 
		root->student = temp->student;
		// 중외 순회시 후계 노드를 삭제한다. 
		root->right = delete_node(root->right, temp->student.num);
	}
	return root;
}

// 중위 순회
void inorder(TreeNode * root) {
	if (root) {
		inorder(root->left);// 왼쪽서브트리 순회
		printf("[%d] ", root->student.num);  // 노드 방문
		printf("[%s] ", root->student.name);
		printf("[%s] ", root->student.bloadtype);
		printf("[%.1lf점] ", root->student.credit);
		printf("[%s]\n", root->student.address);
		inorder(root->right);// 오른쪽서브트리 순회
	}
}

int main(void)
{
	int deleteStudentnum, checkedStudentnum;
	TreeNode * root = NULL;
	TreeNode * tmp = NULL;
	TreeNode * check = NULL;
	root = insert_node(root, 2017156001,"강준혁","O형",4.1,"101호");
	root = insert_node(root, 2017156016,"박재민", "B형", 3.5, "111호");
	root = insert_node(root, 2017156005,"한주혁", "A형", 3.0, "105호");
	root = insert_node(root, 2019156006, "최성호", "AB형", 4.0, "115호");
	root = insert_node(root, 2018156014, "김보라", "B형", 3.9, "211호");
	root = insert_node(root, 2017156027, "이현경", "0형", 3.7, "213호");

	printf("이진 탐색 트리 중위 순회 결과 \n");
	inorder(root);
	printf("\n\n");
		printf("삭제할 학생의 학번을 입력하세요:");
		scanf("%d", &deleteStudentnum);
		root = delete_node(root, deleteStudentnum);
		printf("이진 탐색 트리 삭제 결과 \n");
		inorder(root);
		printf("\n\n");
		printf("조회할 학생의 학번을 입력하세요:");
		scanf("%d", &checkedStudentnum);
		if (search(root, checkedStudentnum) != NULL) {
			check = search(root, checkedStudentnum);
			printf("이진 탐색 트리에서 학생 정보를 발견함\n");
			printf("이름: %s  \n", check->student.name);
			printf("혈액형: %s \n", check->student.bloadtype);
			printf("학점: %.1lf \n", check->student.credit);
			printf("주소: %s \n", check->student.address);
		}
	else
		printf("이진 탐색 트리에서 해당 학생 정보를 발견못함 \n");
	return 0;
}*/