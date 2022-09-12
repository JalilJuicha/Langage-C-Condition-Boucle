#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool	isPremier(int i);

int	main(){

	int i;
	printf("Entrer Un Nombre De Votre Choix : \n");
	scanf("%d",&i);


	if(isPremier(i))
	{
	printf("True");	

	}	
	else {
		printf("False");
	}

}

bool	isPremier(int i){
    if (i != 1)


		{
	for(int j =2 ; j<i ; j++){

		
			if ( i % j != 0)
			{
				return true;
			}	else{	
				return false;}

			
			}
		
		}	
		else{	
				return true;}
		

	return false;

}


        				


