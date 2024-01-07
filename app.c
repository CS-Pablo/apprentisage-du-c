#include <stdio.h>

int main(void)

{
    // Déclaration et affectation d'une variable de type INT (entier)

    int aireDuCarre = 0;
    int aireDuRectangle = 10;

    // Déclaration et affectation d'une variable de type FLOAT  (nombre a virgule)
    float prixDeReservation = 125.99;
    const float PI = 3.14;
    const float TVA = 20;

    /*
    
    %d = nombre entier (int)
    %f = nombre floatant (float)
    %c = caractere
    %s = chaine de caractere (text)
    
    */
    printf("Quelle est l'aire du Carré ?")
    scanf('%d, &aireDuCarre');

    return 0;

    printf("%d\n", aireDuCarre);
    printf("l'aire du rectangle est : %d\n", aireDuRectangle),
    printf('%.2f');
}

