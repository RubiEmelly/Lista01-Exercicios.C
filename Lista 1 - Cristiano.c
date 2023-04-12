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

----------------------------------------------------------------------
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

----------------------------------------------------------------------
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

----------------------------------------------------------------------
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

----------------------------------------------------------------------
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

----------------------------------------------------------------------
6)Faça um programa que calcule e imprima a área de um quadrado.


#include <stdio.h>

int main(){
float ladoQuadrado;

printf("Digite o valor do lado do Quadrado: ");
scanf("%f", &ladoQuadrado);
printf("A área do Quadrado é: %g\n", ladoQuadrado*ladoQuadrado);
}

----------------------------------------------------------------------
7)Faça um programa que calcule e imprima a área de um círculo.


#include <stdio.h>

int main(){
float pi=3.14, raioCirculo;

printf("Digite o valor do raio do Círculo: ");
scanf("%f", &raioCirculo);
printf("A área do Círculo é: %g\n", pi*(raioCirculo*raioCirculo));
}

----------------------------------------------------------------------
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

----------------------------------------------------------------------
9)Faça um programa que calcule e imprima a área de um losango.


#include <stdio.h>

int main(){
    float diagonalMaior, diagonalMenor;
    printf("Digite o valor da Diagonal menor: ");
    scanf("%f",&diagonalMenor);
    printf("Digite o valor da Diagonal maior: ");
    scanf("%f",&diagonalMaior);
    printf("Área do losango é: %g\n", diagonalMaior*diagonalMenor/2 );
}

----------------------------------------------------------------------
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