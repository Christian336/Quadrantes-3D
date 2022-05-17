#include <stdio.h>

int main(void) {

float x;
  float y;
  float z;

  printf("Valor de x:\n");
  scanf("%f" , &x);

  printf("Valor de y:\n");
  scanf("%f" , &y);

  printf("Valor de z:\n");
  scanf("%f" , &z);

  if(x==0 && y==0 && z==0)
    printf("Origem\n");

  else if(x==0 && y==0)
    printf("Eixo z\n");

   else if(x==0 && z==0)
    printf("Eixo y\n");

   else if(z==0 && y==0)
    printf("Eixo x\n");

     else if(x==0)
       printf("Eixo yOz\n");

       else if(y==0)
       printf("Eixo xOz\n");

         else if(z==0)
       printf("Eixo xOy\n");

  else if(x>0 && y>0 && z>0)
    printf("Quadrante 1\n");

   else if(x<0 && y>0 && z>0)
    printf("Quadrante 2\n");
   
   else if(x<0 && y<0 && z>0)
    printf("Quadrante 3\n");
   
   else if(x>0 && y<0 && z>0)
    printf("Quadrante 4\n");
   
   else if(x>0 && y>0 && z<0)
    printf("Quadrante 5\n");
   
   else if(x<0 && y>0 && z<0)
    printf("Quadrante 6\n");
   
   else if(x<0 && y<0 && z<0)
    printf("Quadrante 7\n");
   
   else if(x>0 && y<0 && z<0)
    printf("Quadrante 8\n");
  
  return 0;
}