#include <stdio.h>

void mostrarMenu() {
    printf("--------------------------------\n");
    printf("CODIGO     PRODUTO        PREÇO\n");
    printf("--------------------------------\n");
    printf("1        Cachorro Quente  R$ 4.00\n");
    printf("2        X-Salada         R$ 4.50\n");
    printf("3        X-Bacon          R$ 5.00\n");
    printf("4        Torrada Simples  R$ 2.00\n");
    printf("5        Refrigerante     R$ 1.50\n");
    printf("--------------------------------\n");
}

int main() {
    int codigo, quantidade;
    double total;

  //mostrar o menu para o usuario
  mostrarMenu();

    printf("Digite o código e a quantidade do lanche desejado: \n");
    // Leitura do código e quantidade
    scanf("%i%i", &codigo, &quantidade);
    
    // Cálculo do total baseado no código
    if (codigo == 1) {
        total = quantidade * 4.00;
    } else if (codigo == 2) {
        total = quantidade * 4.50;
    } else if (codigo == 3) {
        total = quantidade * 5.00;
    } else if (codigo == 4) {
        total = quantidade * 2.00;
    } else if (codigo == 5) {
        total = quantidade * 1.50;
    } else {
        printf("Código inválido!\n");
    }
      // Exibindo resultado apenas se o código for válido
        printf("Total: R$ %.2lf\n", total);
    
    return 0;
}
