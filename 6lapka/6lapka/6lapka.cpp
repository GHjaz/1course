#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n,min,k=0;
	char c[100];
	gets_s(c);
	n = strlen(c);
	c[n + 1] = ' ';
	min = 100;
	
	for (int i = 0; i<strlen(c)+1; i++) {
		if (c[i] != ' ') {
			k++;
		}
		else { 
			if ((k < min)&&(k)) {
				min = k;
			}
			k = 0;
		}
	}
	printf("\n%d", min);
}