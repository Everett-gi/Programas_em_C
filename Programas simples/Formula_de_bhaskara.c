#include <stdio.h>
#include <math.h>

int main() {
  
 double a, b, c;
 double delta, x1, x2;

//leitura dos coeficientes
 scanf("%lf%lf%lf",&a,&b,&c);

//calculo de delta
  delta = pow(b,2) - (4 * a * c);

//verificação da condição
   if (a == 0 || delta < 0){ 
     printf ("Impossivel calcular\n");
  } else {    
      x1 = (-b + sqrt(delta))/(2 * a);
      x2 = (-b - sqrt(delta))/(2 * a);
       
     printf("R1 = %.5lf\n",x1);
     printf("R2 = %.5lf\n",x2); 
     }     
    return 0;
}
