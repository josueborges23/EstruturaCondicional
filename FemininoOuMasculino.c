#include <stdio.h>
int main()
{
    char genero;
  
    printf("Digite M ou F ");
    scanf("%c", &genero);

    if(genero=='F'){
     printf("Feminino");
    }
    else{
     printf("Masculino");
    }   
}