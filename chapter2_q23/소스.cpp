#include <Stdio.h>
#include <string.h>
#include <stdlib.h>

struct addressbook {
	char name[12];
	char phoneNum[15];
	char address[30];
	char birthday[15];
};

int main(void) {
	int i,q,y,d,j= 0;
	char name2[15];
	struct addressbook Addbook[100];

	while (true) {
		printf("\t\t\t기능을 선택하세요\n\n");
		printf("1번 : 목록 보기\t2번 : 추가하기\t3번 : 탐색하기\t4번 : 삭제하기\n");
		scanf_s("%d", &q);
		switch (q) {

		case 1:
			printf("이름\t\t\t전화번호\t\t\t\t주소\t\t\t생일\n");
			for (y = 0; y <= j - 1; y++) {
				printf("%7s\t\t\t", Addbook[y].name);
				printf("%13s\t\t   ", Addbook[y].phoneNum);
				printf("%13s\t\t", Addbook[y].address);
				printf("%10s\n", Addbook[y].birthday);
			}
			continue;
		case 2:
			printf("이름 : ");
			scanf_s("%s", Addbook[j].name, sizeof(Addbook[j].name));
			printf("전화번호 : ");
			scanf_s("%s", Addbook[j].phoneNum, sizeof(Addbook[j].phoneNum));
			printf("주소 : ");
			scanf_s("%s", Addbook[j].address, sizeof(Addbook[j].address));
			printf("생일 : ");
			scanf_s("%s", Addbook[j].birthday, sizeof(Addbook[j].birthday));
			j++;
			continue;
		case 3:
			printf("찾을 이름을 검색하세요\n");
			scanf_s("%s",name2,sizeof(name2[0]));
			for (i = 0; i < j; i++) {
				if (strcmp(name2, Addbook[i].name) == 0) {
					printf("이름\t\t\t전화번호\t\t\t\t주소\t\t\t생일\n");
					printf("%7s\t\t\t", Addbook[i].name);
					printf("%13s\t\t   ", Addbook[i].phoneNum);
					printf("%13s\t\t", Addbook[i].address);
					printf("%10s\n", Addbook[i].birthday);
				}
				else
					printf("해당 이름은 없습니다.\n");
				break;
			}
			continue;
		case 4:
			/*printf("삭제할 행을 선택하세요 : ");
			scanf("%d", &d);
			for (i = d; i < j; i++) {
				Addbook[i - 1].name = Addbook[i].name;
				Addbook[i - 1].address = Addbook[i].address;
				j--;*/
			continue;
		}

	}
}