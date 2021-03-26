#include <stdio.h>
#include <string.h>

struct employee {
	char name[10];
	int year;
	int pay;

};

void main() {
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy_s(Sptr->name, "이순신");
	Sptr->year = 2015;
	Sptr->pay = 5900;

	printf("\nÀÌ¸§ : %s", Sptr->name);
	printf("\nÀÔ»ç : %d", Sptr->year);
	printf("\n¿¬ºÀ : %d", Sptr->pay);

	getchar();
}
