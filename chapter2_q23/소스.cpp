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
		printf("\n\n\t\t\t����� �����ϼ���\n\n");
		printf("1�� : ��Ϻ���\n2�� : �߰��ϱ�\n3�� : Ž���ϱ�\n4�� : �����ϱ�\n");
		scanf_s("%d", &q);
		switch (q) {

		case 1:
			printf("\n\n�̸�\t\t\t\t��ȭ��ȣ\t\t\t�ּ�\t\t\t����\n");
			for (y = 0; y <= j - 1; y++) {
				printf("%-11s\t\t\t", Addbook[y].name);
				printf("%-13s\t\t\t", Addbook[y].phoneNum);
				printf("%-13s\t\t", Addbook[y].address);
				printf("%-15s\n", Addbook[y].birthday);
			}
			continue;
		case 2:
			printf("\n\n�̸� : ");
			scanf("%s", Addbook[j].name);
			printf("��ȭ��ȣ : ");
			scanf("%s", Addbook[j].phoneNum);
			printf("�ּ� : ");
			scanf("%s", Addbook[j].address);
			printf("���� : ");
			scanf("%s", Addbook[j].birthday);
			j++;
			continue;
		case 3:
			printf("\nã�� �̸��� �˻��ϼ��� : ");
			scanf("%s", fname);
			for (i = 0; i < j; i++) {
				if (strcmp(fname, Addbook[i].name) == 0) {
					printf("\n\n�̸�\t\t\t\t��ȭ��ȣ\t\t\t�ּ�\t\t\t����\n");
					printf("%-11s\t\t\t", Addbook[i].name);
					printf("%-13s\t\t\t", Addbook[i].phoneNum);
					printf("%-13s\t\t", Addbook[i].address);
					printf("%-15s\n", Addbook[i].birthday);
					break;
				}
			}
			if (strcmp(fname, Addbook[i].name) != 0) {
				printf("\n�ش� �̸��� �����ϴ�.\n");
			}
			continue;
		case 4:
			printf("\n\n������ �̸��� �Է��ϼ��� : ");
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