#include<stdio.h>
int main ()
{
//algoritimo para apresentar um cadastro de informaçoes;
//ira conter nome,idade,matricula,endereço,cursos,periodo,diciplinas,mensalidades;
//apresentar no cadastro;

char nome [20];
int idade [4];
int matricula [20];
char endereco [50];
char curso [5];
int periodo [5];
char diciplina [50];
double mensalidade [10];

printf ("nome");
printf ("\ndigite o nome");
scanf ("%s, nome");


printf("idade");
printf("\ndigite idade");
scanf("%i,idade");
fflush(stdin);

printf ("matricula");
printf ("\ndigite a matricula");
scanf ("%i,matricula");
fflush(stdin);

printf ("endereço");
printf("\ndigite o endereço");
scanf("%s,endereco");
fflush(stdin);

printf("curso");
printf("\ndigite o curso");
scanf("%s,curso");
fflush(stdin);

printf("periodo");
printf("\ndigite o periodo");
scanf("%S,periodo");
fflush(stdin);

printf("diciplina");
printf("\ndigite a diciplina");
scanf("%s,diciplina");
fflush(stdin);

printf("mansalidade");
printf("\ndigite a mensalidade");
scanf("%lf,mensalidade");
fflush(stdin);



printf("volte sempre");
scanf("volte sempre");

return;
}

