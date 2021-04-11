#include <stdio.h>
#define MAX_DEGREE 50

typedef struct {
	int degree; 
	float coef[MAX_DEGREE];
}polynomial;

polynomial multPoly(polynomial, polynomial);
void printPoly(polynomial);

void main() {
	int i;
	polynomial A, B;

	printf("ù��° ���׽��� �ְ� ������ �Է��ϼ��� : ");
	scanf_s("%d", &A.degree);
	printf("�� ���� ����� �Է��ϼ���. :");
	for (i = 0; i <= A.degree; i++) {
		scanf_s("%f", A.coef + i);;
	}

	printf("�ι�° ���׽��� �ְ� ������ �Է��ϼ��� : ");
	scanf_s("%d", &B.degree);
	printf("�� ���� ����� �Է��ϼ���. :");
	for (i = 0; i <= B.degree; i++) {
		scanf_s("%f", B.coef + i);;
	}
	polynomial C;
	C = multPoly(A, B);
	printf("\nA(x) = "); printPoly(A);
	printf("\nb(x) = "); printPoly(B);
	printf("\nC(x) = "); printPoly(C);
}

polynomial multPoly(polynomial A, polynomial B) {
	polynomial C;
	int i, j;
	for(i=0;i<A.degree+B.degree+1;i++){
		C.coef[i] = 0;
	}
	C.degree = A.degree + B.degree;

	for (i = 0; i < A.degree + 1; i++) {
		for (j = 0; j < B.degree + 1; j++) {
			C.coef[i + j] += A.coef[i] * B.coef[j];

		}
	}
	return C;
}

void printPoly(polynomial P) {
	int i, degree;
	degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0fx^%d", P.coef[i], degree--);
		if (i < P.degree) printf(" +");
	}
	printf("\n");
}