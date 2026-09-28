#include <iostream>
using namespace std;

mystringcopy(char *destination, const char *source)
{
	while(*source!='\0')
	{
		*destination++ = *source++;
	}
	*destination = '\0';
}

main()
{
	char string1[20]="Amir";
	char string2[20];
	char *ptrA, *ptrB;
	ptrA=string1;
	ptrB=string2;
	mystringcopy(ptrB, ptrA);
	cout<<string2;
}

