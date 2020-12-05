#define MAXNUMLABELS 108864
#include <iostream>

int main()
{
    char **labelArray = (char**)malloc(MAXNUMLABELS);
	for (long long int i = 0; i < MAXNUMLABELS; i++)
	{
		labelArray[i] = (char*)malloc(7);
	}

    free(*labelArray);
    free(labelArray);
}