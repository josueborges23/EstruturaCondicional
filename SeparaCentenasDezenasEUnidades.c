#include <stdio.h>
int main()
{
    int valor;
  
    printf("Digite um valor ");
    scanf("%i", &valor);

    if(valor>99){
     
     int casa1= valor%10;
     int casa2= (valor/10)%10;    
     printf("%i", casa1); 
     if(casa1==1){
      printf("dezena e"); 
     }
     else{ 
        printf("dezenas e");  
     }
      printf("%i", casa2); 
     if(casa2==1){         
     printf("unidade."); 
     }
     else{
    printf("unidades.");  
     }
    }
    else if(valor<1000)
    {
     int casa1= valor%10;
     int casa2= (valor/10)%10; 
     int casa3= (valor/100)%10; 

     printf("%i", casa1); 
     if(casa1==1){
     printf("centena,"); 
     }
    else{ 
    printf("centenas,");  
     }

     printf("%i", casa2); 
     if(casa2==1){         
     printf("dezena,"); 
     }
     else{
    printf("dezenas,");  
     }
    }

    printf("%i", casa3); 
     if(casa3==1){         
     printf("unidade."); 
     }
     else{
    printf("unidades.");  
     }
    }


    }
}