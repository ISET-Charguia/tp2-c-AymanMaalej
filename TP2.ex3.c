/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;float s;
	printf("ecrire l'equation sou forme ax+b=0");
	scanf("%dx+%d=0",&a,&b);
	s=-b/(a+0.0);
	printf("la solution est %6.3f",s);
}
