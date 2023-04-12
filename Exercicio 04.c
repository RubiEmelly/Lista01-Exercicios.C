4)Faça um programa que receba um número inteiro, calcule e imprima:
-a raiz quadrada desse número (x=sqrt (numero), precisa da biblioteca math.h);
-esse número elevado ao quadrado.


#include <stdio.h>
#include <math.h>

int main(){
int num, raiz, potencia;
printf("Digite um número: ");
scanf("%d", &num);
raiz = sqrt(num);
potencia = pow(num, 2);
printf("A raiz quadrada é: %d\n", raiz);
printf("O resultado da potência é: %d\n", potencia);
}