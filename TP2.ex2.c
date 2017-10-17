/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	int x;
 printf("donner un nmbre positive ou negative : ");
 scanf("%d",&x);
 if (x>0)
	 printf("le valeur absolu de %d est %d",x,x);
 else
	 printf("le valeur absolu de %d est %d",x,-x);
}
