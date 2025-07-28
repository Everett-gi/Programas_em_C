#include <stdio.h>
 
int main() {
 
   double codigoPeca1, quantidadePeca1, valorPeca1;
   double codigoPeca2, quantidadePeca2, valorPeca2, valorASerPago;
    scanf ("%lf%lf%lf", &codigoPeca1,&quantidadePeca1,&valorPeca1);
    scanf ("%lf%lf%lf", &codigoPeca2,&quantidadePeca2,&valorPeca2);
 
 valorASerPago = quantidadePeca1 * valorPeca1 + quantidadePeca2 * valorPeca2;
 
 printf ("VALOR A PAGAR: R$ %.2lf\n", valorASerPago);
    return 0;
}
