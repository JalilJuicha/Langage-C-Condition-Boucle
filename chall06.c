#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j,s=0;
 char mot1[4],mot2[4];

 printf("Entrer le 1er mot : ");
 gets(mot1);

 printf("Entrer le  2eme mot : ");
 gets(mot2);

 for (i=0;i<4;i++){
     for(j=0;j<4;j++){
            if(mot1[i]==mot2[j]){
                s++;
            break;
            }
     }
 }
 if(s==4){
    printf("Anagramme");
 }else{
 printf("Pas Un Anagramme");
 }

    return 0;
}
