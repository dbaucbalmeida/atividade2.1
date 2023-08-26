#include <stdio.h>
#include<math.h>

main() {
float div,reais,dolar;
  //transforme reais em dólar
printf("digite o valor em reais");
scanf("%f",&reais);

printf ("digite valor em dolar");
scanf("%f",&dolar);

//calcular reais em dólar
div=(float)reais/(float)dolar;

//cotacao
printf("\ndiv;%f",div);



}