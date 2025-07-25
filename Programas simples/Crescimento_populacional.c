#include <stdio.h>
#include <math.h>

int main() {
    
    int i, testes;  
    printf("Digite o numero de casos de testes: \n");
    scanf("%i", &testes);
    
     for (i = 0; i < testes; i++) {
      int populacaoA, populacaoB, anos = 0;
      double crescimentoPA, crescimentoPB;
         
        printf("\nCaso %d:\n", i+1);
        printf("Digite a populacao da cidade A: \n");
        scanf("%i", &populacaoA);
        printf("Digite a populacao da cidade B: \n");
        scanf("%i", &populacaoB);
        printf("Digite a taxa de crescimento da cidade A (%%): \n");
        scanf("%lf", &crescimentoPA);
        printf("Digite a taxa de crescimento da cidade B (%%): \n");
        scanf("%lf", &crescimentoPB);
         
        while (populacaoA <= populacaoB) {
            populacaoA += (int)(populacaoA * (crescimentoPA / 100));
            populacaoB += (int)(populacaoB * (crescimentoPB / 100));
            anos++;
            if (anos > 100) {
                printf("Resultado: Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("Resultado: %i anos.\n", anos);
        }
    }

    return 0;
}
