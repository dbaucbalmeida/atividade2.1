#include<stdio.h> 
 
main(){ 
/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos,  
meses e dias e escreva a idade dessa pessoa expressa apenas em dias.  
Considerar ano com 365 dias e mês com 30 dias.*/ 
 
//anos 
//meses 
//totaldedias 
 
int anos,meses,dias,totaldedias; 
 
printf("digite sua idade em anos"); 
scanf("%d",&anos); 
 
printf("digite sua idade em meses"); 
scanf("%d",&meses); 
 
printf("digite seus dias"); 
scanf("%d",&dias); 
 
totaldedias=anos*365+meses*30+dias; 
 
printf("total de dias vividos:%d",totaldedias); 
 
}