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
		printf("\t\t\t����� �����ϼ���\n\n");
		printf("1�� : ��� ����\t2�� : �߰��ϱ�\t3�� : Ž���ϱ�\t4�� : �����ϱ�\n");
		scanf_s("%d", &q);
		switch (q) {

		case 1:
			printf("�̸�\t\t\t��ȭ��ȣ\t\t\t\t�ּ�\t\t\t����\n");
			for (y = 0; y <= j - 1; y++) {
				printf("%7s\t\t\t", Addbook[y].name);
				printf("%13s\t\t   ", Addbook[y].phoneNum);
				printf("%13s\t\t", Addbook[y].address);
				printf("%10s\n", Addbook[y].birthday);
			}
			continue;
		case 2:
			printf("�̸� : ");
			scanf_s("%s", Addbook[j].name, sizeof(Addbook[j].name));
			printf("��ȭ��ȣ : ");
			scanf_s("%s", Addbook[j].phoneNum, sizeof(Addbook[j].phoneNum));
			printf("�ּ� : ");
			scanf_s("%s", Addbook[j].address, sizeof(Addbook[j].address));
			printf("���� : ");
			scanf_s("%s", Addbook[j].birthday, sizeof(Addbook[j].birthday));
			j++;
			continue;
		case 3:
			printf("ã�� �̸��� �˻��ϼ���\n");
			scanf_s("%s",name2,sizeof(name2[0]));
			for (i = 0; i < j; i++) {
				if (strcmp(name2, Addbook[i].name) == 0) {
					printf("�̸�\t\t\t��ȭ��ȣ\t\t\t\t�ּ�\t\t\t����\n");
					printf("%7s\t\t\t", Addbook[i].name);
					printf("%13s\t\t   ", Addbook[i].phoneNum);
					printf("%13s\t\t", Addbook[i].address);
					printf("%10s\n", Addbook[i].birthday);
				}
				else
					printf("�ش� �̸��� �����ϴ�.\n");
				break;
			}
			continue;
		case 4:
			/*printf("������ ���� �����ϼ��� : ");
			scanf("%d", &d);
			for (i = d; i < j; i++) {
				Addbook[i - 1].name = Addbook[i].name;
				Addbook[i - 1].address = Addbook[i].address;
				j--;*/
			continue;
		}

	}
}