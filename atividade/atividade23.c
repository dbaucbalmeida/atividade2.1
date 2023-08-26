#include<stdio.h>

 main(){

//Dadas as medidas de uma sala, informe sua área

float comprimento,largura,area;

//solicitar comprimento da sala

printf("digite o comprimento da sala");
scanf("%f",&comprimento);

//solicitar largura da sala

printf("digite largura da sala");
scanf("%f",&largura);

//calcular a area
area=comprimento*largura;

printf("a area da sala e:%f metros quadrados\n",area);

    
}