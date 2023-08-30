int main()
{
    float nota1, nota2, nota3, nota4, resultado;
    
    printf("Digite sua primeira nota. \n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota. \n");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota. \n");
    scanf("%f", &nota3);
    printf("Digite sua quarta nota. \n");
    scanf("%f", &nota4);
     
    resultado = (nota1 + nota2 + nota3 + nota4) / 4;
    
    if (resultado <= 5.0){
        printf("reprovado.%.2f\n", resultado);
       } else {
           printf("Aprovado. %.2f\n", resultado);
        
    }
    return 0;
}
