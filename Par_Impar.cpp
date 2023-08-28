#include <stdio.h>

int main()
{ 
  //daniel me ajudou
    int numero, par, impar, resultado;
    
    printf("Escreva o número escolhido \n");
    scanf("%d", &numero);
    
    resultado = numero % 2;


    if (resultado ==1) {
        printf("Seu resultado e impar\n");
    } else {
        printf("Seu resultado e par\n");
    }   
    printf("obrigada por rodar meu codigo");
  

    return 0;
}
