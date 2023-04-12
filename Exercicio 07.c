7)Faça um programa que calcule e imprima a área de um círculo.


#include <stdio.h>

int main(){
float pi=3.14, raioCirculo;

printf("Digite o valor do raio do Círculo: ");
scanf("%f", &raioCirculo);
printf("A área do Círculo é: %g\n", pi*(raioCirculo*raioCirculo));
}