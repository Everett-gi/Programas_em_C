#include <stdio.h>
#include <math.h>

int main() {
   
    int IV, L, B, EV, C, i, j;
    int HP, AT, SP, DF;
    char N[100];

    printf("Digite o numero de casos de teste: \n");
    scanf("%i", &C);

    for (i = 1; i <= C; i++) {
        printf("\nCaso %d:\n", i);
        printf("Digite o nome do Pokemon e o nivel (separados por espaco): \n");
        scanf("%s%i", N, &L);

        printf("Digite os valores para cada atributo (BS IV EV):\n");
        for (j = 0; j <= 3; j++) {
            if (j == 0)
                printf("HP: ");
            else if (j == 1)
                printf("AT: ");
            else if (j == 2)
                printf("DF: ");
            else
                printf("SP: ");
                
            scanf("%i%i%i", &B, &IV, &EV);
            
            if (j == 0)
                HP = (IV + B + sqrt(EV)/8 + 50) * L/50 + 10;
            else if (j == 1)
                AT = (IV + B + sqrt(EV)/8) * L/50 + 5;
            else if (j == 2)
                DF = (IV + B + sqrt(EV)/8) * L/50 + 5;
            else 
                SP = (IV + B + sqrt(EV)/8) * L/50 + 5;
        }

        printf("\nResultados:\n");
        printf("Caso #%i: %s nivel %i\n", i, N, L);
        printf("HP: %i\n", HP);
        printf("AT: %i\n", AT);
        printf("DF: %i\n", DF);
        printf("SP: %i\n", SP);
    }
    
    return 0;
}
