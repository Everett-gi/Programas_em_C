#include <stdio.h>

int main() {
  
    int x, y;
     while (scanf("%i%i", &x, &y) == 2) {

       printf("Digite as cordenadas X e Y: \n")
        scanf("%i%i",&x,&y);
         
        if (x==0 || y==0){
            break;
      }  if (x>0 && y>0){
            printf("primeiro quadrante\n");
  
      }  else if (x<0 && y>0){
            printf("segundo quadrante\n");
            
      }  else if (x<0 && y<0){
            printf("terceiro quadrante\n");
            
      }  else if (x>0 && y<0){
            printf("quarto quadrante\n");            
    }
  }
    
    return 0;
}
