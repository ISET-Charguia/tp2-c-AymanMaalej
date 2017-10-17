/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	char x;
printf("donner un char: ");
scanf("%c",&x);
if ((x>='a')&&(x<='z'))
	printf("le caractere est une lettre minuscule");
else
	if( (x>='A')&&(x<='Z') )
		printf("le caractere est une lettre majuscule");
	else
		if ((x>='1')&&(x<='2'))
			printf("le caractere est un chiffre");
		else printf("le caractere est un cractere speciale");
}
