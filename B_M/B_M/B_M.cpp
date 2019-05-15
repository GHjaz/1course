#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int BM(char s[100],char p[100]) {
	int Tab[255], i, k, n, len,m;
	m = strlen(p);
	for (int j = 0; j < 255; j++) {
		Tab[j] = strlen(p);
	}
	for (int j = 0; j < strlen(p); j++) {
		Tab[int(p[j])] = strlen(p) - 1 - j;
	}
	i = strlen(p) - 1;
	while (i <= (strlen(s) - 1))
	{
		int k = 0;
		while (k <= m - 1 && p[m - k] == s[i - k + 1])
		{
			k = k + 1;
		}

		if (k == m)
			return i - m + 1;
		else
		{
			i = i + Tab[int(s[i + 1])]; 
		}
	}
	return -1;
}
int main() {
	int r;
	char str[100], pstr[100];
	gets_s(str);
	gets_s(pstr);
	r = BM(str, pstr);
	if (r == -1) {
		puts("Not Find");
	}
	else
		printf("Position: %d", r);
	return 0;
}
