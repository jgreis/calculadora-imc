/* Calculadora de Índice de Massa Corporal feita em C */

#include <stdio.h>

int main()
{
    double peso, altura, imc;

    puts("Calculadora de IMC");
    printf("Altura (em metros): ");
    scanf("%lf", &altura);
    printf("Peso (em quilos): ");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    if (imc < 17)
        printf("Seu IMC é de %.2lf. Você está muito abaixo do peso.\n", imc);
    else if (imc < 18.5)
        printf("Seu IMC é de %.2lf. Você está abaixo do peso.\n", imc);
    else if (imc < 25)
        printf("Seu IMC é de %.2lf. Você está no seu peso ideal.\n", imc);
    else if (imc < 30)
        printf("Seu IMC é de %.2lf. Você está acima do peso.\n", imc);
    else if (imc < 35)
        printf("Seu IMC é de %.2lf. Você está com Obesidade I\n", imc);
    else if (imc < 40)
        printf("Seu IMC é de %.2lf. Você está com Obesidade II.\n", imc);
    else
        printf("Seu IMC é de %.2lf. Você está com Obesidade III.\n", imc);

    return 0;
}