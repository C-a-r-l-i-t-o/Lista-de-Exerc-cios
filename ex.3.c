#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float digvalor(){
    float num;
    printf("Digite um numero: \n", num);
    scanf ("%f", &num);

    return num;
}

void expressao(int *num){

    float nm1 = *num - 1;
    float nm2 = *num + 1;
    float nm3 = pow(*num, 2)+ *num -2 ;

}

int main(){

    digvalor;
    float num;


    printf("O valor de x: ");
    scanf("%f", &num);

    expressao ;
    int *num;

    printf("Expressao x - 1 = %d" , num - 1);
    printf("Expressao x + 1 = %d" , num + 1);
    printf("Expressao x² + x - 2 = %d" , pow(num, 2)+ num -2);


    return 0;
}
