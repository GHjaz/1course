#include <iostream>
#include <stdio.h>
#include <stdlib.h>
/*int BMsearch(char* str, const char* word)
{
	int N = strlen(str);
	int M = strlen(word);

	int* d = new int[256];
	int i;
	for (i = 0; i < 256; i++)
		d[i] = M;

	for (i = 0; i < M - 1; i++)
		d[(unsigned char)word[i]] = M - i - 1;

	int result;
	for (i = M; i <= N; i += d[(unsigned char)str[i - 1]])
	{
		int j, k;
		for (j = M - 1, k = i - 1; j >= 0 && str[k] == word[j]; k--, j--);
		if (j < 0)
		{
			result = i - M;
			break;
		}
		if (i == N)
		{
			result = -1;
			break;
		}
	}

	delete d;

	return result;
}*/
