#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mm();


int main() {
	char* p;
	p = mm();
	strcpy(p, "Hello");
	printf("%s\n", p);

}

char* mm() {
	char* p;
	p = (char*)malloc(sizeof(char) * 10);
	return p;
}