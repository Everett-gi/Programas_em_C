#include <stdio.h>
 
int main() {
 
   char vendedor[100];
   double salarioFixo, totalVendas, salarioFinal;
   
   scanf ("%s %lf %lf", &vendedor, &salarioFixo, &totalVendas);
   
   salarioFinal = salarioFixo + (totalVendas * 0.15);
   
   printf ("TOTAL = R$ %.2lf\n", salarioFinal);
   
   return 0;
}
