#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int     divededby();
bool    isPremier();

int	main()
{
	int n, a, i;
	printf("Entrer le 1er nombre : \n");
	scanf("%d",&n);

	printf("Entrer le 2eme nombre : \n");
	scanf("%d",&a);

	printf("la Division des deux valeurs est :%d \n",divededby(n,a));
	i=divededby(n,a);
	
	if(isPremier(i))
	{
	printf("True\n");	

	}	
	else {
		printf("False\n");
	}

}



int divededby(int n, int a){

	int division;
	division = n/a;
	return division;
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
