#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado;

    srand(time(NULL));
    dado = rand() % 20 + 1;
    printf("Valor tirado: %d\n", dado);

    if (dado == 20)
    {
        printf("ACERTO CRÍTICO, DANO MÁXIMO");
    }
    else if (dado == 1) {
        printf("ERRO CRÍTICO! Você acertou você mesmo!");
    }
    else {
        printf("Você acertou o ataque com força %d!\n", dado);
    }
    
    return 0;

}