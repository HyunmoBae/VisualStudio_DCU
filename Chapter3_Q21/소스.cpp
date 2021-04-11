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

	printf("첫번째 다항식의 최고 차수를 입력하세요 : ");
	scanf_s("%d", &A.degree);
	printf("각 항의 계수를 입력하세요. :");
	for (i = 0; i <= A.degree; i++) {
		scanf_s("%f", A.coef + i);;
	}

	printf("두번째 다항식의 최고 차수를 입력하세요 : ");
	scanf_s("%d", &B.degree);
	printf("각 항의 계수를 입력하세요. :");
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