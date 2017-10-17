/*
 ============================================================================
 Name        : ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x;
	float t;
	printf("ecrire le nbre d\'annees : ");
	scanf("%d",&x);
	if (x>5)
		t=0.095;
		else if ((x<=5)&&(x>3))
			t=0.085;
		else if ((x<=3)&&(x>1))
			t=0.065;
		else if (x<=1)
			t=0.058;
		else printf("valeur refusee");
	printf("%6.3f",t);
}
