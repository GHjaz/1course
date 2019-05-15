#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main() {
	char *s, *ps;
	int i,j,k = 0;
	s = new char[100];
	ps = new char[100];
	gets_s(s,100);
	gets_s(ps,100);
	for ( i = 0; i <= strlen(s) - strlen(ps); i++) {
		j = 0;
		while (j < strlen(ps) && s[i + j] == ps[j]) {
			j++;
		}
		if (j == strlen(ps)) {
			printf("%d", i);
			k = 1;
			break;
		}

	}
	if (k == 0) puts("NO");
	delete s;
	delete ps;
	return 0;
}