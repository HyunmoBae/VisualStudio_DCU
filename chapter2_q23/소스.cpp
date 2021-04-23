#include <Stdio.h>
#include <string.h>
#include <stdlib.h>

struct addressbook {
	char name[12];
	char phoneNum[15];
	char address[30];
	char birthday[20];
};

int main(void) {
	int i, q, y, d, k,j = 0;
	char fname[15];
	struct addressbook Addbook[100] = { NULL };

	while (true) {
		printf("\n\n\t\t\t기능을 선택하세요\n\n");
		printf("1번 : 목록보기\n2번 : 추가하기\n3번 : 탐색하기\n4번 : 삭제하기\n");
		scanf_s("%d", &q);
		switch (q) {

		case 1:
			printf("\n\n이름\t\t\t\t전화번호\t\t\t주소\t\t\t생일\n");
			for (y = 0; y <= j - 1; y++) {
				printf("%-11s\t\t\t", Addbook[y].name);
				printf("%-13s\t\t\t", Addbook[y].phoneNum);
				printf("%-13s\t\t", Addbook[y].address);
				printf("%-15s\n", Addbook[y].birthday);
			}
			continue;
		case 2:
			printf("\n\n이름 : ");
			scanf("%s", Addbook[j].name);
			printf("전화번호 : ");
			scanf("%s", Addbook[j].phoneNum);
			printf("주소 : ");
			scanf("%s", Addbook[j].address);
			printf("생일 : ");
			scanf("%s", Addbook[j].birthday);
			j++;
			continue;
		case 3:
			printf("\n찾을 이름을 검색하세요 : ");
			scanf("%s", fname);
			for (i = 0; i < j; i++) {
				if (strcmp(fname, Addbook[i].name) == 0) {
					printf("\n\n이름\t\t\t\t전화번호\t\t\t주소\t\t\t생일\n");
					printf("%-11s\t\t\t", Addbook[i].name);
					printf("%-13s\t\t\t", Addbook[i].phoneNum);
					printf("%-13s\t\t", Addbook[i].address);
					printf("%-15s\n", Addbook[i].birthday);
					break;
				}
			}
			if (strcmp(fname, Addbook[i].name) != 0) {
				printf("\n해당 이름은 없습니다.\n");
			}
			continue;
		case 4:
			printf("\n\n삭제할 이름을 입력하세요 : ");
			scanf("%s", fname);
			for (i = 0; i < j; i++) {
				if (strcmp(fname, Addbook[i].name) == 0) {
					Addbook[i] = { NULL };
					for(i;i < j; i++)
					Addbook[i] = Addbook[i + 1];
				}
				continue;
			}

		}
	}
}