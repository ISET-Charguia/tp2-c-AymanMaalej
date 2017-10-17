/*
 ============================================================================
 Name        : ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int a;
	printf("donner une annee: ");
	scanf("%d", &a);
	if ((a % 400 == 0) || ((a % 4 == 0) && (a % 100 != 0))) {
		printf("l\'annee %d est bissextile", a);
	} else {
		printf("l\'annee %d n\'est pas bissextile",a);
	}
	return 0;
}
