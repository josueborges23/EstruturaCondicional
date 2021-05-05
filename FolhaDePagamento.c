#include <stdio.h>

/**
 * #define é uma diretiva de pré-processamento que define um valor padrão e imutável. 
 * 
 * sintaxe:
 *  #define <nome_const> <valor>
*/

/**
 * #include é uma diretiva de pré-processamento. Que antes do compilar gerar o executável do seu código, ele faz um link 
 * com a implementação da biblioteca utilizada. 
 * 
 * Seu código usa um conjunto de funções básicas que estão disponíveis na linguagem como bibliotecas. 
 * 
 * Em C, as bibliotecas são identificadas por aquivos de cabeçalhos .h
 * 
 * bibliotecas padrão são:
 *      stdio (standard input/output) - biblioteca padrão de entrada e saída
 *           printf (printer formatted)
 *           scanf (scanner formatted)
 *           fprintf (file print formatted)
 *           fscanf (file scan formatted)
 *      stdlib.h
 *      math.h
 *      string.h
 *      limits.h
 *      ctype.h:
 *          tolower
 *          touper
 *      time.h
 *          time
 *          clock   
*/

int main()
{
    /**
     * Declaração de constante
     * const <tipo_dado> <identificador> = <valor>; 
    */
    //const int inss = 10, fgts = 11, sindicato = 3;
    const int inss = 10;
    const int fgts = 11;
    const int sindicato = 3; 

    float salarioHora, salariomes, salarioBruto;
    int horasTrabalhadas, descontoIr;
  
    /**
     * printf - print formatted 
     * 
     *  "Os valores informados foram %i %i e a soma deles foi %i", num1, num2, soma 
     *      
     *      % 
     *      %i - int (ou integer)
     *      %f - float 
     *      %c - char 
     *      %% - %
     * 
     * caracteres de tabulação:
     *  \ - escape
     *  \n - nova linha (enter)
     *  \t - tab
     *  \" - "
     *  \r - recúo
     *  \\ - \
     *  \a - aviso sonoro da placa mãe
     * 
    */
    printf("Insira o salario por hora do funcionario");

    /**
     * scanf - scan formatted 
     * 
     * scanf("string formatada", endereços das variaveis)
     * 
     * % - caractere de valor
     * % 
     *      %i - int (ou integer)
     *      %f - float 
     *      %c - char 
     *      %s - string
     * 
     * &salarioHora = &<nome_variavel> = o endereço da variável
     * 
    */
    scanf("%f", &salarioHora);

    printf("Insira a quantidade de horas trabalhadas ");
    scanf("%i", &horasTrabalhadas);

    // float = float * int
    salarioBruto = salarioHora * horasTrabalhadas;
    
    if( salarioBruto <= 900 )
    {
        descontoIr = 0;
    }
    else if( salarioBruto <= 1500 )
    {
        descontoIr = 5;
    }
    else if( salarioBruto <= 2500 )
    {
        descontoIr = 10;
    }
    else
    {
        descontoIr = 20;
    }

    /**
     * Operadores Aritméticos:
     * 
     *  (  ) - maior nível de precedência
     *  /, * - mesmo nível (esquerda para direito)
     *  +, - - menor nível de precedência (esquerda para direita)
    */

    /**
     * Operador de atribuição. 
     * símbolo  (= - atribuição)
     * variavel = <valor ou resultado de uma expressão>;
    */

   //                         float * int / int 
   //                         float / int
   //                         float 
    float valorDescontoDoIR = salarioBruto * descontoIr / 100;

    /**
     * Divisão de inteiros:
     * 
     * <valor1> / <valor2>. Quando valor1 e valor2 são dois valores inteiros, o resultado da divisão é também
     * valor inteiro. 
     * 
     * Ex: 10 / 100 (os dois são inteiros)
     *     0.1 (0) 
     * 
     *  dividendo / divisor |_ quociente (inteiro) e o resto.
     *  <valor1> / <valor2>. Obtenho o quociente da divisao de dois valores inteiros. 
     *  <valor1> % <valor2>. Obtenho o resto da divisao de dois valores inteiros. 
     *  
    */
    //                        = (int) * (int) / (int)
    //                        = (int) / (int)
    //                        = (int)
    float valorDescontoDoINSS = salarioBruto * inss / 100;

    /**
     * Casting do programador (explicito):
     * 
     *  (novo_tipo) variavel_tipo_antigo
     * 
     * Exemplo: 
     *  (float) fgts (int)
     *  fgts = 11
     *  (float) fgts => 11.00
     * 
     *  salario = 25.38
     *  (int) salario => 25
     * 
     * Casting do programador (implicito)?
     * 
     * Que e a conversao de um tipo para outro feita pelo compilador
     * 
     * 10 / 100.00 
     * (int) / (float) => (float)
     * fgts * 1.0
     * (int) * (float) => (float)
    */
    float valorDoFGTS = salarioBruto *  fgts / 100;
    float totalDescontos = valorDescontoDoINSS + valorDescontoDoIR;
    float salarioLiquido = salarioBruto - totalDescontos;

    printf("\nSalario Burto (%i * %.2f): R$ %.2f", horasTrabalhadas, salarioHora, salarioBruto);
    printf("\n(-)IR: (%i%%): R$ %.2f", descontoIr, valorDescontoDoIR);
    printf("\n(-)INSS: (%i%%): R$ %.2f",inss, valorDescontoDoINSS);   
    printf("\nFGTS: (%i%%): R$ %.2f",fgts, valorDescontoDoINSS);
    printf("\nTotal De Descontos: R$%.2f", totalDescontos);
    printf("\nSaldo Liquido: R$%.2f", salarioLiquido);
}