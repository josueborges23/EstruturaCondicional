#include <stdio.h>


int main(){

    //declaracao de variaveis e constantes
    const int inss = 10;
    const int fgts = 11;
    const int sindicato = 3; 

    float salarioHora, salariomes, salarioBruto;
    int horasTrabalhadas, descontoIr;

    //entrada
    printf("Insira o salario por hora do funcionario");
    scanf("%f", &salarioHora);
    printf("Insira a quantidade de horas trabalhadas ");
    scanf("%i", &horasTrabalhadas);

    //processamento
    //salario bruto e encontro da porcentagem de desc
    salarioBruto = salarioHora * horasTrabalhadas;
    if( salarioBruto <= 900 ) {
        descontoIr = 0;
    } else if( salarioBruto <= 1500 ) {
        descontoIr = 5;
    } else if( salarioBruto <= 2500 ) {
        descontoIr = 10;
    } else {
        descontoIr = 20;
    }
    //descontos
    float valorDescontoDoIR = salarioBruto * descontoIr / 100;
    float valorDescontoDoINSS = salarioBruto * inss / 100;
    float valorDoFGTS = salarioBruto *  fgts / 100;
    //salario liquido
    float totalDescontos = valorDescontoDoINSS + valorDescontoDoIR;
    float salarioLiquido = salarioBruto - totalDescontos;

    //saída
    printf("\nSalario Burto (%i * %.2f): R$ %.2f", horasTrabalhadas, salarioHora, salarioBruto);
    printf("\n(-)IR: (%i%%): R$ %.2f", descontoIr, valorDescontoDoIR);
    printf("\n(-)INSS: (%i%%): R$ %.2f",inss, valorDescontoDoINSS);   
    printf("\nFGTS: (%i%%): R$ %.2f",fgts, valorDescontoDoINSS);
    printf("\nTotal De Descontos: R$%.2f", totalDescontos);
    printf("\nSaldo Liquido: R$%.2f", salarioLiquido);
}