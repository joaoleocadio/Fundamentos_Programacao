int numero() 
{
    int num = 0;
    
    while (num <= 0) {
        puts("Introduza um numero: ");
        scanf("%d", &num);
    }  
    return num;
}

void linha() {
    puts("**************");
}

void imprimirAsteriscos(int num) {
    puts("### Asteriscos ###");
    for (int i = 0; i < num; i++) 
    {
        printf("*");
    }
    puts("\n");
}

