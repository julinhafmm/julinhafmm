int main()
{
    float nota1, nota2, nota3, nota4, resultado, exame, notaexame;
    
    printf("Digite sua primeira nota. \n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota. \n");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota. \n");
    scanf("%f", &nota3);
    printf("Digite sua quarta nota. \n");
    scanf("%f", &nota4);
     
    resultado = (nota1 + nota2 + nota3 + nota4) / 4;
    
    if (resultado < 7){
        printf("reprovado!!\nNota: %.2f\n", resultado);
        printf("Qual a nota do Exame?");
        scanf("%f", &exame);
        notaexame = (resultado + exame) / 2;
        if(notaexame >= 5)
        {
            printf("Aprovado!!\nNota: %.2f\n", notaexame);
        }
        else
        {
            printf("Reprovado!!\nNota: %.2f\n", notaexame);
        }
       } else {
           printf("Aprovado!!\nNota: %.2f\n", resultado);
        
    }
    return 0;
}
