#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double peso, altura, imc;
    printf(" coloque o seu peso: ");
    scanf("%lf", &peso);
    printf(" coloque sua altura: ");
    scanf("%lf", &altura);
    imc = peso/pow(altura,2 );
    if(imc < 18.5 ){
        printf("seu imc eh de magresa :");
    }
    else if( imc >= 18.5 && imc < 25){
        printf(" seu imc eh de peso normal");

    }
    else if(imc >=25 && imc <30 ){
        printf("seu imc eh de sobrepeso");

    }else {
    printf("seu imc eh de sobrepeso");
    }







    return 0;
}
