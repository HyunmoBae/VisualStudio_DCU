#include <stdio.h>
#define MAX_DEGREE 101
#define _CRT_SECURE_NO_WARNINGS
typedef struct {

	int degree;

	float coef[MAX_DEGREE];

}Polynomial;
void print_poly(Polynomial p)

{

	int i;

	printf("\t%s");

	for (i = 0; i < p.degree; i++) {

		printf("%5.1f x^%d ", p.coef[i], p.degree - i);

		if (p.coef[i + 1] > 0)

			printf("+");

	}

	printf("%4.1f\n", p.coef[p.degree]);

}

Polynomial mult_poly(Polynomial a, Polynomial b)

{

	int i, j;

	Polynomial p;

	for (i = 0; i < a.degree + b.degree + 1; i++)              //배열 초기화

		p.coef[i] = 0;



	p.degree = a.degree + b.degree;



	for (i = 0; i < a.degree + 1; i++)

		for (j = 0; j < b.degree + 1; j++)

			p.coef[i + j] += a.coef[i] * b.coef[j];



	return p;

}
int main(void) {

	int i;

	Polynomial x, y, a, b;

	Polynomial A;
	printf("다항식의 최고 차수 입력: ");
	scanf_s("%d", &A.degree);
	printf("각 항의 계수를 입력하시오 : ", A.degree + 1);
	for (i = 0; i <= A.degree; i++)
		scanf_s("%f", A.coef + i);

	Polynomial B;
	printf("다항식의 최고 차수 입력: ");
	scanf_s("%d", &B.degree);
	printf("각 항의 계수를 입력하시오 ): ", B.degree + 1);
	for (i = 0; i <= B.degree; i++)
		scanf_s("%f", B.coef + i);

	b = mult_poly(A, B);

	print_poly(A);
	print_poly(B);
	print_poly(b);



	return 0;

}