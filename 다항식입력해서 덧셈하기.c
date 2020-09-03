/*#include <stdio.h>
#include<time.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MAX_DEGREE 101
typedef struct { 			// 다항식 구조체 타입 선언
	int degree;			// 다항식의 차수
	float coef[MAX_DEGREE];	// 다항식의 계수
} polynomial;

polynomial a;
polynomial b;
polynomial c1;
polynomial c2;

// C = A+B 여기서 A와 B는 다항식이다. 구조체가 반환된다. 
polynomial poly_add1(polynomial A, polynomial B)
{
	polynomial C;				// 결과 다항식
	int Apos = 0, Bpos = 0, Cpos = 0;	// 배열 인덱스 변수
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = MAX(A.degree, B.degree); // 결과 다항식 차수

	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {  // A항 > B항
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {  // A항 == B항
			C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
			degree_a--; degree_b--;
		}
		else {			// B항 > A항
			C.coef[Cpos++] = B.coef[Bpos++];
			degree_b--;
		}
	}
	return C;
}
// C = A-B 여기서 A와 B는 다항식이다. 구조체가 반환된다. 
polynomial poly_subtract(polynomial A, polynomial B)
{
	polynomial C;				// 결과 다항식
	int Apos = 0, Bpos = 0, Cpos = 0;	// 배열 인덱스 변수
	int degree_a = A.degree;
	int degree_b = B.degree;
	C.degree = MAX(A.degree, B.degree); // 결과 다항식 차수

	while (Apos <= A.degree && Bpos <= B.degree) {
		if (degree_a > degree_b) {  // A항 > B항
			C.coef[Cpos++] = A.coef[Apos++];
			degree_a--;
		}
		else if (degree_a == degree_b) {  // A항 == B항
			C.coef[Cpos++] = A.coef[Apos++] - B.coef[Bpos++];
			degree_a--; degree_b--;
		}
		else {			// B항 > A항
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
	printf("다항식의 차수를 입력하세요");
	scanf("%d", &p.degree);
	n = p.degree;
	for (i = 0; i <= n; i++)
	{
		printf("%d차의 계수를 입력하세요", p.degree);
		scanf("%f", &p.coef[i]);
		p.degree--;
	}
	p.degree = n;
	return p;
}
// 주함수
int main(void)
{
	clock_t start, stop; // start, stop 선언
	double duration;
	a = input(a);
	b = input(b);
	print_poly(a);
	print_poly(b);
	start = clock();         // 수행시간 측정 시작 
	c1 = poly_add1(a, b);          // 덧셈 함수 호출
	c2 = poly_subtract(a, b);     // 뺄셈 함수 호출
	printf("--------------------------------------  \n");
	printf("덧셈결과: ");
	print_poly(c1);           // 덧셈 결과 출력
	printf("뺄셈 결과: ");
	print_poly(c2);           //뺄셈 결과 출력
	stop = clock();                // 수행 시간 측정 종료 
	duration = (double)(stop - start) / CLOCKS_PER_SEC;   // 수행시간 계산
	printf("수행시간은 %f초입니다\n", duration);   // 수행 시간 출력
	return 0;
}*/