3) Faça um programa que receba dois números, calcule e imprima um elevado ao outro (x=pow(base,exp), precisa da biblioteca math.h).


#include <stdio.h>
#include <math.h>

int main(){
int potencia, baseNum, expoNum;
printf("Digite o valor de sua Base: ");
scanf("%d", &baseNum);
printf("Digite o valor do seu Exponencial: ");
scanf("%d", &expoNum);
potencia = pow(baseNum, expoNum);
printf("O resultado da potência é: %d\n", potencia);
}