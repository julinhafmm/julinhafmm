#include <stdio.h>

int main()
{
    int numero1, numero2, resultado;
    
    printf("Digite o primeiro número \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número \n");
    scanf("%d", &numero2);

    
    if (numero1 > numero2) {
        printf("Seu resultado do primeiro número e maior que o segundo\n");
        resultado = numero1 - numero2;
        printf("A diferença entre eles é %d.\n", resultado);
        
    }
    if (numero2 > numero1) {
            printf("Seu segundo número  é maior que o primeiro \n");
            resultado = numero2 - numero1;
            printf("E a diferença deles e %d.\n", resultado);
    } 
    
    if (numero1==numero2){
            printf("Seus numeros são iguais.\n");
    }
    
    return 0;
}
