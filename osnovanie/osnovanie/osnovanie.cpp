#include<stdio.h> 
#include<string.h> 
#include<math.h> 
int main() {
	int i = 0, s = 0, h = 0, k, c1, c2;
	char a[100];
	char b[100];
	char l[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','F' };
	gets_s(a);
	scanf_s("%d%d", &c1, &c2);
	for (i = 0; i < strlen(a); i++) {
		if (int(a[i]) < 60) 
			s = s + (int(a[i]) - 48)*pow(c1, strlen(a) - i - 1);
		else
			s = s + (int(a[i]) - 55)*pow(c1, strlen(a) - i - 1);
	}
	do {
		k = s % c2;
		b[h] = l[k];
		s /= c2;
		h++;
	} while (s != 0);
	for (i = h; i >= 0; i--) //вывод в обратном порядке
		printf("%c", b[i]);
	return 0;
}