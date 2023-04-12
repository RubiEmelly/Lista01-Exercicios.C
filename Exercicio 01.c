1) Faça um programa que receba o valor de um depósito e o valor da taxa de juros. Calcule e imprima o valor do rendimento e o valor total depois
do rendimento.

#include <stdio.h>

int main(){
int tempo;
float deposito, taxaJuros, rendimento, total;
printf("Digite o valor do seu depósito: ");
scanf("%f", &deposito);
printf("Digite o valor da Taxa de Juros: ");
scanf("%f", &taxaJuros);
printf("Digite quantos meses você quer aplicar: ");
scanf("%d", &tempo);

rendimento = deposito*taxaJuros*tempo;
total = deposito + rendimento;

printf("O valor do seu rendimento é: %g\n", rendimento);
printf("O valor total do seu lucro é: %g\n", total);
}