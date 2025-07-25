#include <stdio.h>
#define consumoMedioDoVeiculoPorK 12

int main() {
 
        double tempo, velocidadeMedia;
        double distancia, litros;

    printf("Digite o tempo médio gasto em horas e a velidade média da viagem: \n");
    scanf("%lf%lf",&tempo, &velocidadeMedia);
    
    distancia = tempo * velocidadeMedia;
    litros = distancia / consumoMedioDoVeiculoPorKM;
    
    printf("A quantidade em litros de combustivel gasto durante a viajem foi de %.3lf litros\n",litros);
    
    return 0;
}
