#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_ALFABETO 26

int main()
{  
  char mensagem[1000];
  char direcao[2];
  int i, pulo;
  
   printf("Digite a mensagem a ser criptografada: ");
   fgets(mensagem, sizeof(mensagem), stdin);
   
  int p = strlen(mensagem);
   
   printf("\nDigite o valor do pulo: ");
   scanf("%d", &pulo);
   getchar();
   
   printf("\nDigite a direcao da codificacao(E ou D): ");
   fgets(direcao, sizeof(direcao), stdin);

   if(direcao[0] == 'D') {
   
   for(i = 0; i != p; i++) {
       
      if(mensagem[i] >= 'a' && mensagem[i] <= 'z') {
        mensagem[i] = 'a' + (mensagem[i] - 'a' + pulo) % TAM_ALFABETO;
        
     } else if(mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
        mensagem[i] = 'A' + (mensagem[i] - 'A' + pulo) % TAM_ALFABETO;
        
     } else if (mensagem[i] >= 33 && mensagem[i] <= 126) {
        // Criptografa os caracteres especiais
        mensagem[i] = 33 + (mensagem[i] - 33 + pulo) % (126 - 33 + 1);
     }
  }
    
    } else if (direcao[0] == 'E') {
        
      for(i = 0; i < p; i++) {
       
        if(mensagem[i] >= 'a' && mensagem[i] <= 'z') {
         mensagem[i] = 'a' + (mensagem[i] - 'a' - pulo + TAM_ALFABETO) % TAM_ALFABETO;
         
       } else if(mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
         mensagem[i] = 'A' + (mensagem[i] - 'A' - pulo + TAM_ALFABETO) % TAM_ALFABETO;
         
       } else if (mensagem[i] >= 33 && mensagem[i] <= 126) {
        // Criptografa os caracteres especiais
        mensagem[i] = 33 + (mensagem[i] - 33 - pulo + (126 - 33 + 1)) % (126 - 33 + 1);
     }
   }
 }
    
      printf("\nMensagem criptografada: %s\n", mensagem);
      
      return 0;
}

