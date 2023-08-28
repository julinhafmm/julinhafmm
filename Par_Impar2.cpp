int main()
{
    int numero, par, impar, resultado;
    
    printf("Escreva o número escolhido \n");
    scanf("%d", &numero);
    
    resultado = numero % 2;


    if (resultado == 1) {
        printf("Seu resultado e impar. \n");
        impar = (numero - 3);
        printf("Seu resultado é %d \n", impar);
    } else {
     
        printf("Seu resultado e par. \n");
            par = (numero * 2);
            printf("Seu resultado e %d \n", par);
        
    } 
    printf("obrigada por rodar meu codigo");
  

    return 0;
}
