#include <stdio.h>
#define consumoMedioDoVeiculoPorK 12

int main() {
 
        double tempo, velocidadeMedia;
        double distancia, litros;

    printf("Digite o tempo gasto em horas e a velocidade média do carro: \n");
    scanf("%lf%lf",&tempo, &velocidadeMedia);
    
    distancia = tempo * velocidadeMedia;
    litros = distancia / consumoMedioDoVeiculoPorKM;
    
    printf("A quantidade em litros de combustivel gasto durante a viajem foi de %.3lf litros\n",litros);
    
    return 0;
}
