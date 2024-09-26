#include <stdio.h>

int main(void)
{
    int eta;
    char nome;
    printf("inserisci il tuo nome e la tua eta \n");
    scanf("%c:%i", &nome , &eta);
    if (eta>=18) {
        printf("%c sei maggiorenne ", nome);
    }else {
        printf("%c sei minorenne ", nome);
    }
    return 0;
}
