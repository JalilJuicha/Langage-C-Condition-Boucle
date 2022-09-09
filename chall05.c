#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
    for (i=1; i<=100; i++){
        if ((i %3 == 0) && (i %5 == 0)){
            printf("FIZZ BUZZ \n");
        }else if (i %3 == 0){
            printf("FIZZ \n");
        }
        else if (i %5 ==0 ){
            printf("BIZZ \n");
        }
        else
        printf("%d\n",i);

    }
    return 0;
}
