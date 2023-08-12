#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>






int main(){


setlocale(LC_ALL,"Portuguese_Brazil");


float a,b,c;
float raizA, raizB;
float raizUnica;


printf("Digite os coeficientes da equação para obter as raízes:\n\n");
printf("[a]=");
scanf("%f",&a);
printf("[b]=");
scanf("%f",&b);
printf("[c]=");
scanf("%f",&c);


float delta = pow(b,2)-4*a*c;                // calcula o delta
printf("o delta é : %0.2f\n\n", delta);


if (a !=0 )
{
  if(delta < 0){
    printf("Não existe raiz");
  }
  if (delta == 0)
  {
    printf("\nRaiz única\n");
    raizUnica = -b/(2*a);                     //calcula a raiz única
    printf("A raiz é %0.2f", raizUnica);
  }
  if(delta > 0)
  {
    printf("Existem duas raízes reais e distintas\n");
   
    float raizDelta = sqrt(delta);


    raizA = (-b + raizDelta)/(2*a);
    raizB = (-b - raizDelta)/(2*a);
   


    printf("As raizes são :\n");
    printf("Raiz a = %0.2f\n", raizA);
    printf("Raiz b = %0.2f\n\n", raizB);




  }
   
} else {
  printf("Não é a equação de segundo grau!");
}










 
return 0;
}
