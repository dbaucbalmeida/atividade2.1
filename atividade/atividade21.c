
#include<stdio.h>
#include<math.h>

main(){
//Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números
int num1,num2,soma,sub,mult;
float div;

//recebendo os numeros

printf("digite o primeiro numero");
scanf("%d",&num1);

printf("digite o segundo nummero");
scanf("%d",&num2);

soma=num1+num2;
sub=num1-num2;
mult=num1*num2;
div=(float)num1/(float)num2;

printf("soma:%d",soma);
printf("\nsub:%d",sub);
printf("\nmult:%d,mult");
printf("\ndivisao:%F",div);

}