#include <stdio.h>
#include <unistd.h>

int echanger(int a,int b);

int	main(){

	int a,b;

	printf("Entrer la valeur de A:\n");
	scanf("%d",&a);
	
	printf("Entrer la valeur de B: \n");
	scanf("%d",&b);

	printf("La valeur echanger de %d est :%d", a, echanger(a,b));


}

int	echanger( int a, int b){
	int echanger;
	echanger = a = b;
	return echanger;

}


/*
Ce que je conctate , c'est que la valeur finale de A deviennent la valeur initiale de B.
 */
