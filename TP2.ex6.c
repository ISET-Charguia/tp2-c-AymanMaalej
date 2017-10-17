/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
float a,b,c,max,min;
printf("donner 3 nbres : a/b/c ");
scanf("%f/%f/%f",&a,&b,&c);
min=a;
if (b<min)
	min=b;
if (c<min)
	min=c;
max=a;
if(b>max)
	max=b;
if(c>max)
	max=c;
printf("le max est %f et le min est %f",max,min);
}
