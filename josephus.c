#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  
  int casos_teste, i, salto, numero;
  
   printf("Digite um numero inteiro de casos teste: ");
   scanf("%d", &casos_teste);
   
   if(casos_teste <= 0) {
       
     return 0;
   }
   
   for(i=0; i < casos_teste; i++) {
       
     printf("\nDigite a quantidade de pessoas no circulo: ");
     scanf("%d", &numero);
   
     printf("\nDigite o valor do salto: ");
     scanf("%d", &salto);
      
     if(numero > 1 && salto > 0) {
          
      int j, n=numero, s=numero;
      
      if(numero % salto != 0) {
      
      for(j=0; j < s-1; j++) {
          
        numero = (numero + salto) % s;
  }
  
    } else {
       
      for(j=0; j < s-1; j++) {
          
        numero = (numero + salto) % s;
       
      if(numero = n) {
           
        numero = (numero + 1) % s;
        n = (n + 1) % s;
       }
     }
  }
        printf("\nO numero que restou apos as eliminacoes foi: %d\n", numero);
          
        
      } else {
            printf("\nNumeros invalidos.\n");
        }
       
     }
     
      return 0;
}
