/*#include <stdio.h>
#include<time.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101
typedef struct { 			// ���׽� ����ü Ÿ�� ����
	int degree;			// ���׽��� ����
	float coef[MAX_DEGREE];	// ���׽��� ���
} polynomial;

polynomial a;
polynomial b;
polynomial c1;
polynomial c2;

// C = A+B ���⼭ A�� B�� ���׽��̴�. ����ü�� ��ȯ�ȴ�. 
polynomial poly_add1(polynomial A, polynomial B)
{
	polynomial C;				// ��� ���׽�
	int Apos = 0, Bpos = 0, Cpos = 0;	// �迭 �ε��� ����
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = MAX(A.degree, B.degree); // ��� ���׽� ����

	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {  // A�� > B��
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {  // A�� == B��
			C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
			degree_a--; degree_b--;
		}
		else {			// B�� > A��
			C.coef[Cpos++] = B.coef[Bpos++];
			degree_b--;
		}
	}
	return C;
}
// C = A-B ���⼭ A�� B�� ���׽��̴�. ����ü�� ��ȯ�ȴ�. 
polynomial poly_subtract(polynomial A, polynomial B)
{
	polynomial C;				// ��� ���׽�
	int Apos = 0, Bpos = 0, Cpos = 0;	// �迭 �ε��� ����
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = MAX(A.degree, B.degree); // ��� ���׽� ����

	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {  // A�� > B��
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {  // A�� == B��
			C.coef[Cpos++] = A.coef[Apos++] - B.coef[Bpos++];
			degree_a--; degree_b--;
		}
		else {			// B�� > A��
			C.coef[Cpos++] = B.coef[Bpos++];
			degree_b--;
		}
	}
	return C;
}


void print_poly(polynomial p)
{
	for (int i = p.degree; i>0; i--)
		printf("%3.1fx^%d + ", p.coef[p.degree - i], i);
	printf("%3.1f \n", p.coef[p.degree]);
}
polynomial input(polynomial p)
{
	int i, n;
	printf("���׽��� ������ �Է��ϼ���");
	scanf("%d", &p.degree);
	n = p.degree;
	for (i = 0; i <= n; i++)
	{
		printf("%d���� ����� �Է��ϼ���", p.degree);
		scanf("%f", &p.coef[i]);
		p.degree--;
	}
	p.degree = n;
	return p;
}
// ���Լ�
int main(void)
{
	clock_t start, stop; // start, stop ����
	double duration;
	a = input(a);
	b = input(b);
	print_poly(a);
	print_poly(b);
	start = clock();         // ����ð� ���� ���� 
	c1 = poly_add1(a, b);          // ���� �Լ� ȣ��
	c2 = poly_subtract(a, b);     // ���� �Լ� ȣ��
	printf("--------------------------------------  \n");
	printf("�������: ");
	print_poly(c1);           // ���� ��� ���
	printf("���� ���: ");
	print_poly(c2);           //���� ��� ���
	stop = clock();                // ���� �ð� ���� ���� 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;   // ����ð� ���
	printf("����ð��� %f���Դϴ�\n", duration);   // ���� �ð� ���
	return 0;
}*/