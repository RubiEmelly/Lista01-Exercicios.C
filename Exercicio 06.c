6)Faça um programa que calcule e imprima a área de um quadrado.


#include <stdio.h>

int main(){
float ladoQuadrado;

printf("Digite o valor do lado do Quadrado: ");
scanf("%f", &ladoQuadrado);
printf("A área do Quadrado é: %g\n", ladoQuadrado*ladoQuadrado);
}