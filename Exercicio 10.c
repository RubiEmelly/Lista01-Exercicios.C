10)Faça um programa que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.


#include <stdio.h>
int main()
{
    float salario=0.0, impostoRenda=0.05, valorImpostoRenda = 0.0; 
    printf("Digite o salario:");
    scanf("%f", &salario);
    valorImpostoRenda = salario*impostoRenda;
    printf("O valor do imposto de renda e:%g", valorImpostoRenda);
}