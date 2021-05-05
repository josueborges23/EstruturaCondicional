#include <stdio.h>
int main()
{

    /*
    [CaixaEletronico]
    */

    /*
    Faça um Programa para um caixa eletrônico.
    O programa deverá perguntar ao usuário o valor do saque
    */

    int valorSaque;
    
    printf("Digite o valor a sacar:");
    scanf("%i", &valorSaque);

    /*
    O valor mínimo (de saque) é de 10 reais e o máximo de 600 reais.
    O programa não deve se preocupar com a quantidade de notas existentes na máquina)
    */

    //condição composta (formada por duas ou mais condições ligadas por operadores lógicos)
    if( valorSaque >= 10 && valorSaque <= 600 ) 
    {
        /* 
        (o sistema) deve informar quantas notas de cada valor serão
        fornecidas.
        As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais.
        */

        int notasCem, notasCinquenta, notasDez, notasCinco, notasUm;

        int valorRestanteSaque = valorSaque;

        //681
        notasCem = valorRestanteSaque / 100;
        valorRestanteSaque = valorRestanteSaque - notasCem * 100;
        notasCinquenta = valorRestanteSaque / 50;
        valorRestanteSaque = valorRestanteSaque - notasCinquenta * 50;
        notasDez = valorRestanteSaque / 10;
        valorRestanteSaque = valorRestanteSaque - notasDez * 10;
        notasCinco = valorRestanteSaque / 5;
        valorRestanteSaque = valorRestanteSaque - notasCinco * 5;
        notasUm = valorRestanteSaque / 1;
        valorRestanteSaque = valorRestanteSaque - notasUm * 1;

        //681
        /**
        notasCem = valorRestanteSaque / 100;
        valorRestanteSaque = valorRestanteSaque % 100;
        notasCinquenta = valorRestanteSaque / 50;
        valorRestanteSaque = valorRestanteSaque % 50;
        notasDez = valorRestanteSaque / 10;
        valorRestanteSaque = valorRestanteSaque % 10;
        notasCinco = valorRestanteSaque / 5;
        notasUm = valorRestanteSaque % 5;
        */
        /*
        a. Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas
        notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
        b. Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas
        de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
        */

        printf("Notas de cem: %i\n
        Notas De Cinquenta: %i\n
        Notas De Dez: %i\n
        Notas De Cinco: %i\n
        Notas De Um: %i\n",
        notasCem, notasCinquenta, notasDez, notasCinco, notasUm);

        printf("Notas de 100: %i\n", notasCem);
        printf("Notas de 50: %i\n", notasCinquenta);
        printf("Notas de 10: %i\n", notasDez);
        printf("Notas de 5: %i\n", notasCinco);
        printf("Notas de 1: %i\n", notasUm);
    }  
}
