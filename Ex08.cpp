int a, b, c, d, resultado, raiz;

    printf("Digite seu primeiro valor");
    scanf("%i", &a);
    printf("Digite seu segundo valor");
    scanf("%i", &b);
    printf("Digite seu terceiro valor");
    scanf("%i", &c);
    
    d = (b * b) - (4 * a * c);
    raiz = sqrt (d);
    printf("Sua raiz é. %i \n", raiz);
    
    resultado = (-b) + raiz  /(2 * a );
    printf("Seu resultado e. %i \n", resultado);
    return 0;
}
