#include <stdio.h>

int main(){

  float a, b ;
  
  printf("\nMédia de consumo (Km/l):");
  fflush(stdin);
  scanf("%f",&a);
  
  printf("Gasolina no tanque (l):");
  fflush(stdin);
  scanf("%f",&b);

  printf("- Distância percorrida = %.1f Km",a*b);

    
    
    
    return 0;
}