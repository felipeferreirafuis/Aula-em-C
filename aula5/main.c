#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
 {
    char sexo;
    double altura, conta;
    printf("seu sexo eh: ");
    scanf("%c", &sexo);
    printf(" sua altura: ");
    scanf("%lf", &altura);
    if(sexo == 'f' || sexo == 'F'){
      conta = (62.1 * altura) - 44.7;
    }
    else if(sexo == 'm' || sexo == 'M'){
        conta = (72.7 * altura) - 58;
    }

    else{
        printf("letra invalida");
    }
   printf(" o seu peso ideal eh %.2lf", conta);


    return 0;
}
