/*
 ============================================================================
 Name        : ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("donner un entier positif inferieur a 999: ");
	scanf("%d",&x);
	if ((x>0)&&(x<=999))
	{
			printf("le nbre de centaine est %d le nombre de dizaine %d et le nombre d\'unite est %d",x/100,((x%100)/10),(x%10));
	}
			else
		{
		printf("nbre eronnee");
}
}
