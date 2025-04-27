#include <stdio.h>

int main() {
   
    int valor1, valor2, valor3, valor4, direfenca;
    //É possivel utilizar tanto %i quanto %d para escanear uma variavel.
    scanf("%i %i", &valor1, &valor2); 
    scanf("%d %d", &valor3, &valor4);

    diferenca = valor1*valor2 - valor3*valor4;
    printf("Diferença = %d\n", diferenca);

    return 0;
}