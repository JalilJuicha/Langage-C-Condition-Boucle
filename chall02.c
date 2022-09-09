 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char CA;

    printf("Entrer un caractere de votre choix :");
    scanf("%c", &CA);

        switch (CA)
        {

        case 'a':
            printf("le caractere saisie est un voyelle");
            break;
        case 'e':
            printf("le caractere saisie est un voyelle");
            break;
        case 'i':
            printf("le caractere saisie est un voyelle");
            break;
        case 'o':
            printf("le caractere saisie est un voyelle");
            break;
        case 'u':
            printf("le caractere saisie est un voyelle");
            break;
        case 'y':
            printf("le caractere saisie est un voyelle");
            break;
        case 'A':
            printf("le caractere saisie est un voyelle");
            break;
        case 'E':
            printf("le caractere saisie est un voyelle");
            break;
        case 'I':
            printf("le caractere saisie est un voyelle");
            break;
        case 'O':
            printf("le caractere saisie est un voyelle");
            break;
        case 'U':
            printf("le caractere saisie est un voyelle");
            break;
        case 'Y':
            printf("le caractere saisie est un voyelle");
            break;

        // operator doesn't match any case
        default:
            printf("Le caractere saisie n est pas un voyelle");


        }

    return 0;
}

