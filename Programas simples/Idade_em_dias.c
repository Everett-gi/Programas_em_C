#include <stdio.h>

int main() {
    
    int dias, anos, meses;

    printf("Digite a idade em dias: \n");
    scanf("%i",&dias);

    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;
    
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
  
    return 0;
}
