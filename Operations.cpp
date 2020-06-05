#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}
int factoriel(int fact)
{
	int resultat;
	
	int i;

for (i = 1 ; i < fact ; i--)
{
    resultat=fact * i;
}
return resultat;
}