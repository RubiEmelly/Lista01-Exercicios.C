2) Faça um programa que receba um número real, calcule e imprima:
-a parte inteira do número;
-a parte fracionária do número;
-arredondamento do número.


#include <stdio.h>
#include <math.h>

int main(){
float numero;
printf("Digite um número real: ");
scanf("%f", &numero);
printf("O valor inteiro desse número é: %d\n", (int) numero);
printf("O valor decimal desse número é: %g\n", numero - ((int) numero));
printf("O valor do arredondamento desse número é: %d\n", (int) round (numero));
}