5) Faça um programa que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e imprima quantos salários mínimos ganha esse funcionário.


#include <stdio.h>

int main()
{
     float salario, salarioMinimo, qtdSalariosMinimo = 0.0; 
    printf("Digite o salario:");
    scanf("%f", &salario);
    printf("Digite o salario mínimo:");
    scanf("%f", &salarioMinimo);
    qtdSalariosMinimo = salario / salarioMinimo;
    printf("O valor do salario mínimo é:%g",qtdSalariosMinimo);
}