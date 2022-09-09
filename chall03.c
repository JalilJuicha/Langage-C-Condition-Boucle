#include <stdio.h>
#include <stdlib.h>

int main()
{
    int VA;
    int VB;
    int addition;

    printf("Entrer le 1er nombre :\n");
    scanf("%d",&VA);

    printf("Entrer le deuxieme nombre :\n");
    scanf("%d",&VB);

    if (VA != VB) {
        addition = VA+VB;
    }
    else {
        addition = (VA+VB)*3;
    }


    printf("La somme de vos deux nombres est : %d",addition);


    return 0;
}
