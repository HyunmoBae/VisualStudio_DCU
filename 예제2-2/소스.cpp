#include <stdio.h>

int main(void)
{

	int i;
	int score[3] = { 91,86,97 };
	char grade[3] = { 'A','B','A' };

	printf("\n *** 학년별 리그 학점 ***\n\n");

	for (i = 0; i < 3; i++) {
		printf("%3d 학년 : 총점 = %d, 등급 = %c\n", i + 1, score[i], grade[i]);

	}

	getchar(); getchar();

}