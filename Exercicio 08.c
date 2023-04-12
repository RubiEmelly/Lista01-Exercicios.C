8)Faça um programa que calcule e imprima a área de um trapézio.


#include <stdio.h>

int main(){
float baseMaior, baseMenor, alturaT;

printf("Digite o valor da Base Maior: ");
scanf("%f", &baseMaior);
printf("Digite o valor da Base Menor: ");
scanf("%f", &baseMenor);
printf("Digite o valor da Altura: ");
scanf("%f", &alturaT);

printf("A área do Trapézio é: %g\n", ((baseMenor + baseMaior)*alturaT)/2);
}