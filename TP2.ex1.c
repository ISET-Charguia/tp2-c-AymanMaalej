/*
 ============================================================================
 Name        : Exercice1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int x;
	printf("ecrire un nombre a tester: ");
	scanf("%d",&x);
	if ((x%3)==0)
	{
printf("%d est divisible par 3",x);
	}
	else
	{
		printf("%d n'est pas divisible par 3",x);
    }
return 0;
}
