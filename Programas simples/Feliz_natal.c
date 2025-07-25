#include <stdio.h>

int main() {
         //indice se refere ao tamanho da sua felicidade pelo natal
     int Indice, i;

     printf("Qual o numero que representa o seu animo pelo natal: \n");     
     scanf("%i",&Indice);

      //identifica se o usuario está animado para o natal ou não
      if(Indice >= 1){ 
       printf("Feliz nat");
         for (i = 0; i < Indice; i++) {
              printf("a");             
        } printf("l!\n");
     } else{ 
       printf("Poxa que pena :(");
 }
    
    return 0;
}
