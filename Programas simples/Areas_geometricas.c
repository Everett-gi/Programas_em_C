#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {

  double areaTriangulo,areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
  double pontoA, pontoB, pontoC; 
  printf("Digite três valores (A, B e C): \n");
  scanf("%lf%lf%lf",&pontoA,&pontoB,&pontoC);

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
