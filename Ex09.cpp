int main()
{
    int valor1, valor2, valor3, valor4, resultado1;
    
    printf("Digite o valor escolhido. \n");
    scanf("%d", &valor1);
    printf("Digite o valor escolhido. \n");
    scanf("%d", &valor2);
    printf("Digite o valor escolhido. \n");
    scanf("%d", &valor3);
    printf("Digite o valor escolhido. \n");
    scanf("%d", &valor4);
    
    if (valor1 % 2 == 0 && valor1 % 3 == 0 ) {
        printf("%d é divisivel por 2 e 3 \n", valor1);
    } else {
        printf("%d Nao e divisivel. \n", valor1);
    }
    if (valor2 % 2 == 0 && valor2 % 3 == 0 ) {
        printf("%d é divisivel por 2 e 3 \n", valor2);
    } else {
        printf("%d Nao e divisivel. \n", valor2);
    }
    if (valor3 % 2 == 0 && valor3 % 3 == 0 ) {
        printf("%d é divisivel por 2 e 3 \n", valor3);
    } else {
        printf("%d Nao e divisivel. \n", valor3);
    }
    if (valor4 % 2 == 0 && valor4 % 3 == 0 ) {
        printf("%d é divisivel por 2 e 3 \n", valor4);
    } else {
        printf("%d Nao e divisivel. \n", valor4);
    }
    
    

    return 0;
}
