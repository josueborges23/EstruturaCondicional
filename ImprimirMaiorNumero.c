#include <stdio.h>
int main()
{
    int primeiroNumero;
    int segundoNumero;

    printf("Digite o primeiro numero: ");
    scanf("%i", &primeiroNumero);
    printf("Digite o segundo numero: ");
    scanf("%i", &segundoNumero);

    if(primeiroNumero>segundoNumero){
     printf("Maior numero e o primeiro: \n%i ",primeiroNumero);
    }
    else{
     printf("Maior numero e o segundo: \n%i ",segundoNumero);
    }   
}