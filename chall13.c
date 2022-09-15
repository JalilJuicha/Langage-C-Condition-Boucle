#include <stdio.h>
#include <unistd.h>
#include <string.h>

struct infoetudiant {
  
	char numero_matricule[30];
  	char nom[30];
	int  age;
  	char note[20];
};

int main() {
  // Create a structure variable and assign values to it
  struct infoetudiant s1 = {"123456", "JOE", 24,"100"};

  // Modify values
  strcpy(s1.numero_matricule, "789012");

  // Print values
  printf("Le numero de matricule :%s\n Le nom :%s\n L'age :%d\n  la note :%s\n", s1.numero_matricule, s1.nom, s1.age, s1.note);

  return 0;
}

