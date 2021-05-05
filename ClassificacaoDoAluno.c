#include <stdio.h>
int main()
{
    int primeiraNota;
  
    printf("Digite a primeira nota do aluno? ");
    scanf("%i", &primeiraNota);


    int segundaNota;
  
    printf("Digite a segunda nota do aluno? ");
    scanf("%i", &segundaNota);

    int media=(primeiraNota+segundaNota)/2;

    if(media==10)
    {
    printf("Aprovado Com Distincao");
    }
    else if(media>=7)
    {
    printf("Aprovado");
    }
    else
    {
    printf("Reprovado");
    }
}