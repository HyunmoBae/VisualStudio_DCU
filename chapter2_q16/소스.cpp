#include <stdio.h>

void main(){
	int i,stu[10],kor[10], eng[10], math[10], total[10],evg[10];
	for (i = 0; i <= 9; i++) {
		printf("���� ���� : ");
		scanf_s("%d", &kor[i]);
		printf("���� ���� : ");
		scanf_s("%d", &eng[i]);
		printf("���� ���� : ");
		scanf_s("%d", &math[i]);
		stu[i] = i + 1;
		total[i] = kor[i] + eng[i] + math[i];
		evg[i] = total[i] / 3;
		printf("\n");
	}
	
	printf("\t�й�\t����\t����\t����\t����\t���\n");
	printf("*********************************************************\n");
	for (i = 0; i <= 9; i++) {

		printf("\t %d\t %d\t %d\t %d\t %d\t %d\n", stu[i],kor[i],eng[i],math[i],total[i],evg[i]);
	}
}