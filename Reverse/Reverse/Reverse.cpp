#include <iostream>
#include <stdio.h>
#include <stdlib.h>
unsigned int Reverse(unsigned int n, int f) {
	for (int i = 0; i < f / 2; i++) {
		if ((bool((1 << f-1-i)  &  n)) != (bool((1 << i)  &  n)))
		{
			if ((n&(1 << f - 1 - i))) {
				n ^=(1 << f - 1 - i);
			}
			else n ^=(1 << f - 1 - i);
			if ((n&(1 << i))) {
				n ^=(1 << i);
			}
			else n ^=(1 << i);
		}
	}
	for (int i = 1; i <= f; i++) {
		if (n&(1 << f - i)) {
			printf("1");
		}
		else printf("0");
	}
	return n;
}
int main() {
	unsigned int a=0;
	char k[100];
	int n;
	gets_s(k);
	n = strlen(k);
	for (int i = 0; i<strlen(k); i++) {
		if (k[i] == '1') {
			a = a | (1 << (strlen(k)-1-i));
		}
	}
	Reverse(a, n);
	return 0;
}