int main()
{
    int valora, valorb, valorc, resultado;
    
    printf("Digite seu primeiro valor");
    scanf("%d", &valora);
    printf("Digite seu segundo valor");
    scanf("%d", &valorb);
    printf("Digite seu terceiro valor");
    scanf("%d", &valorc);
    
    resultado = valora + valorb;
    
    if (resultado == valorc) {
        
        printf("Seu valor C e igual a soma");
    } else if (resultado >= valorc) {
        printf("Seu valor c e maior que a soma de a + b %d \n", resultado);
    } else {
        printf("Seu valor c e menor que a soma de a + b \n");
    }
        
    

    return 0;
}
