#include<stdio.h>

main(){
//Escreva um programa que receba um número qualquer e mostre o seu dobro.

float numero,dobro;
 
printf("digitar o numero");
scanf("%f",&numero);

dobro = numero * 2;

printf("o dobro de %.2f e %.2f\n",numero,dobro);
}