#include <stdio.h>
#include <stdbool.h>

int main(){

    //char vetorDeLetras[] = {'a','e','i','o','u'};

    char letraEscolhida;
    printf("Digite uma letra: ");
    scanf("%c",&letraEscolhida);

    letraEscolhida = tolower(letraEscolhida);
    
      switch (letraEscolhida)
      {
        case ('a'):
          printf("\nVogal");
        break;
        case ('e'):
          printf("\nVogal");
        break;
        case ('i'):
          printf("\nVogal");
        break;
        case ('o'):
          printf("\nVogal");
        break;
        case ('u'):
          printf("\nVogal");
        break;
        default:
        printf("\nConsoante");
        break;
      }    

   return 0;
}
