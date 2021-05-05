/**
 * 8. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. 
 * O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas
 * seguintes situações:
        a. Se o usuário informar o valor de A igual a zero, a equação não é do segundo
        grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
        
        b. Se o delta calculado for negativo, a equação não possui raízes reais. Informe
        ao usuário e encerre o programa;
        
        c. Se o delta calculado for igual a zero a equação possui apenas uma raiz real;
        informe ao usuário;

        d. Se o delta for positivo, a equação possui duas raiz reais; informe-as ao
        usuário;
*/
#include <stdio.h>
#include <math.h>

/**
 * Definição dos tipos de dados de variáveis: verificar com exemplos qual o tipo de dado melhor se encaixa para uma variável
 * Sempre criar uma variável para armazenar o resultado de uma expressão aritmética. 
 *        Ex: delta = b * b - 4 * a * c; 
 * Sempre dar espaço entre os simbolos em qualquer expressão:
 *      Ex:
 *          if(valorA!=0) // modo feio 
 *          if( valorA != 0 ) //modo bonito e legível
 * Sempre usar um print com os caracteres de tabulação:
 *     Ex:
 *          printf("A equacao possui duas raizes reais\nRaizes X1= %.2f e X2 = %.2f", x1, x2);
*/
int main()
{
    float valorA;
  
    printf("Digite o valor de a: ");
    scanf("%f", &valorA);

    if( valorA != 0 )
    {
        float valorB, valorC, delta;

        printf("Digite o valor de b: ");
        scanf("%f", &valorB);

        printf("Digite o valor de c: ");
        scanf("%f", &valorC);

        delta = pow( valorB, 2 ) - 4 * valorA * valorC;    
    
        if( delta < 0 )
        {
            printf("Delta Negativo, equação não possui raizes reais\n");
        }
        else if( delta == 0 )
        {
            float x = (-1 * valorB) / (2 * valorA); 
            printf("A equacao possui apenas uma raiz\n Raiz X = %f", x);
        }        
        else
        {
            float x1, x2, raizDelta;
            
            raizDelta = sqrt( delta );
            x1 = (-valorB - raizDelta) / (2 * valorA);
            x2 = (-valorB + raizDelta) / (2 * valorA);            

            printf("A equacao possui duas raizes reais\nRaizes X1= %.2f e X2 = %.2f", x1, x2);
        }   
    }
    else
    {
        printf("A equação não é do segundo grau\n");
    }
}
