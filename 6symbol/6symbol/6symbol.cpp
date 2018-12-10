#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int right, left=0, temp, r=0,l=0, n;
	bool flag = 1;
	scanf_s("%d", &n);
	right = n - 1;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 50;
		printf("%d ", a[i]);
	}
	while (flag) {
		flag = 0;
		for (int i = left; i < right; i++) {
			if (a[i] > a[i + 1]) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				flag = 1;
				r = i;
			}
		}
		right = r;
		for (int i = right; i < left; i--) {
			if (a[i] < a[i - 1]) {
				temp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = temp;
				flag = 1;
				l = i;
			}
		}
		left = l;
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	delete[]a;
	return 0;
}