#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int stepen(int y) {
	int k = 0;
	while (y / 2 != 0 && k==0) {
		k = y % 2;
		y = y / 2;
	}
	if (k == 0) {
		return 1;
	}
	else return 0;
}
int main() {
	srand(time(NULL));
	int c;
	FILE *i1, *o1;
	i1 = fopen("c:\\1\\test1.txt", "w");
	o1 = fopen("c:\\1\\test2.txt", "w");
	if (i1 == NULL) {
		printf("ERROR");
		exit(0);
	}
	for (int i = 0; i < 40; i++) {
		fprintf(i1, "%d\t", rand()%50+10);
	}
	fclose(i1);
	FILE *o2;
	o2 = fopen("c:\\1\\test1.txt", "r");
	if (o1 == NULL) {
		printf("ERROR");
		exit(0);
	}
	if (o2 == NULL) {
		printf("ERROR");
		exit(0);
	}
	for (int i = 0; i < 40; i++) {
		fscanf(o2, "%d", &c);
		if (stepen(c)) {
			fprintf(o1,"%d\t",c);
		}
	}
	fclose(o1);
	fclose(o2);
	return 0;
}