#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
   
  double pontoA, pontoB, PontoC; 
  printf("Digite três valores (A, B e C): ");
  scanf("%lf%lf%lf",&pontoA,&pontoB,&pontoC);
  
  double areaTriangulo,areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
  scanf("%lf%lf%lf%lf%lf", &areaTriangulo ,&areaCirculo ,&areaTrapezio ,&areaQuadrado ,&areaRetangulo);
   areaTriangulo = 0.5 * pontoA * pontoC;
   areaCirculo = PI * pow(pontoC, 2);
   areaTrapezio = 0.5 * (pontoA+pontoB) * pontoC;
   areaQuadrado = pow(pontoB, 2);
   areaRetangulo = pontoA * pontoB;
   
   printf("a) TRIANGULO: %.3lf\n",areaTriangulo);
   printf("b) CIRCULO: %.3lf\n",areaCirculo);
   printf("c) TRAPEZIO: %.3lf\n",areaTrapezio);
   printf("d) QUADRADO: %.3lf\n",areaQuadrado);
   printf("e) RETANGULO: %.3lf\n",areaRetangulo);
    return 0;
}
