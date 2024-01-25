#include <stdio.h>

int main(){
    float massa, altura, imc;
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    printf("Digite o seu kg:\n");
    scanf("%f", &massa);

    imc = massa / (altura * altura);
    printf("O seu Indice de Massa Corporal (IMC) é de : %f", imc);

return 0;
}
