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

int multiplication(int a, int b)
{
	int res;
	res = a*b;
	return res;
}
int division(int a, int b)
{
	int res;
	res = a/b;
	return res;
}
int exposant(int nb,int exp)
{
	int res = nb;
	for(int i<0;int = exp ;i++)
	{
		res = res*nb;
		
	}
	return res

}