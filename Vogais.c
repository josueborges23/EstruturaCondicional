#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){

	char letter; 
	
    printf("Enter a letter\n");
	scanf("%c", &letter);
	fflush(stdin);
	
    letter = tolower(letter);

 /**
     * if ( (letter != 'a') && (letter != 'e') &&
	   (letter != 'i') && (letter != 'o') &&
	   (letter !=  'u') ) {
		 printf("It's a consonant");
	} else { 
		printf("It's a vowel")
	}

    */
   /**
    * if ( (letter == 'a') || (letter == 'e') ||
	   (letter == 'i') || (letter == 'o') ||
	   (letter ==  'u') ) {
		 printf("It's a vowel");
	} else { 
		printf("It's a consonant")
	}

   */

    if(letter == 'a')
    {
        printf("It's a vowel");
    }
    else if(letter == 'e')
    {
        printf("It's a vowel");
    } else if(letter == 'i')
    {
        printf("It's a vowel");
    } else  if(letter == 'o')
    {
        printf("It's a vowel");
    }
    else if(letter == 'u')
    {
        printf("It's a vowel");
    }
    else
    {
        printf("It's a consoant");
    }  
    

    //if aninhados - quando temos um if dentro do outro. 
    
    /*if ( letter != 'a')
    {  
        printf("No circuito! \n");
        if (letter != 'e')
        {
            printf("No circuito! \n");
	        if  (letter != 'i') 
            {                
                printf("No circuito! \n");
                if (letter != 'o')
                {
                    printf("No circuito! \n");
                    if (letter !=  'u') 
                    {
                        printf("No circuito! \n");
                        printf("It's a consonant");
                    } else
                    {
                        printf("Curto circuito! \n");
                        printf("It's a vowel");
                    }
                } else 
                {
                    printf("Curto circuito! \n");
                    printf("It's a vowel");
                }
            } else
            {
                printf("Curto circuito! \n");
                printf("It's a vowel");
            }
        } else
        {
            printf("Curto circuito! \n");
            printf("It's a vowel");
        }
    } else 
    {
        printf("Curto circuito! \n");
        printf("It's a vowel");
    }*/
   
    return 0;
}

/**
 * Mercado Livre (Gestor de Distribuidora)
 * 
 * Encher um caminhão com o máximo de pacotes para a mesma região que já estejam com o pagamento confirmado e tenham 
 * valores menores que 2 mil reais. 
 * 
 * 99% ()
 * //10000        //9900           //6000
 * pagto == 1 && valor < 2000 && regiao == destino
 * 
 * //10000            //2000           //1100  
 * regiao == destino && valor < 2000 & pagto == 1
 * 
 * 10 mil produtos
 * 5 mil salvador
 * 2 mil lauro de freitas
 * 2 mil camaçari 
 * 1 mil dias d'avila
 * 
 * 
 * 
*/