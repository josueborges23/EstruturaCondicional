#include <stdio.h>
int main()
{
    int salario;
  
    printf("Insira o salario do Funcionario ");
    scanf("%i", &salario);

    int percentualDeAumento;
    if(salario<=280)
    {
    percentualDeAumento=20;
    }
    else if(salario<=700)
    {
    percentualDeAumento=15;
    }
    else if(salario<=1500)
    {
    percentualDeAumento=10;
    }
    else{
    percentualDeAumento=5;
    }

    printf("\nSalario: %i",salario);
    printf("\nPercentual de aumento: %i",percentualDeAumento);
    float aumento=(float)percentualDeAumento/100*salario;
    printf("\nValor Do Aumento: %.0f",aumento);
    printf("\nValor Do Salario com o Aumento: %.0f",salario+aumento);
}