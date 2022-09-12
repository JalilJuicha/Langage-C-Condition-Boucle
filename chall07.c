#include <stdio.h>
#include <unistd.h>

int add()

int	main()
{
	int a,b;
	printf("Entrer le 1er nombre : \n");
	scanf("%d",&a);
	
	printf("Entrer le 2eme nombre : \n");
	scanf("%d",&b);
	
	printf("la somme de A+B est : %d",add(a,b));

	return 0;
}

int	add(int a, int b){

	int resultat;
	resultat = a + b;
	return resultat;
}
