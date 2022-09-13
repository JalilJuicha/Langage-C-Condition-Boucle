#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool	is_leap_year();


int	main()
{
	int year;

	printf("Saisir une année entre 1800 et 10000 de votre choix :\n");
	scanf("%d",&year);

	is_leap_year(year);




	return 0;
}

bool	is_leap_year(int year){
	if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d est une année bissextile", year);
            else
                printf("%d n est  pas une année bissextile", year);
        }
        else
            printf("%d est une année bissextile", year );
    }
    else
        printf("%d n est pas une année bissextile", year);


}

