#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int numCasosTestes, contador, i, j, tamanho;
    char texto[1000], caractereTemporario;

    scanf("%d%*c", &numCasosTestes);
    
    for(contador = 0; contador < numCasosTestes; contador++) {
        scanf("%[^\n]%*c", texto);

        tamanho = strlen(texto);
        
        // Primeira passada: desloca letras 3 posições à direita no alfabeto
        for(i = 0; i < tamanho; i++) {
            if (isalpha(texto[i])) {
                texto[i] = texto[i] + 3;
            }
        }

        // Segunda passada: inverte o texto
        for(i = 0, j = tamanho - 1; i < j; i++, j--) {
            caractereTemporario = texto[i]; 
            texto[i] = texto[j];
            texto[j] = caractereTemporario;
        }

        // Terceira passada: desloca caracteres da metade em diante 1 posição à esquerda
        for(i = tamanho / 2; i < tamanho; i++) {
            texto[i] = texto[i] - 1;
        }
        
        printf("%s\n", texto);
    }
    
    return 0;
}
