# Langage-C-Condition-Boucle
### Challenge 1 : Paire ou Impaire

Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire

### Challenge 2 :

Ecrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction `switch case`.

### Challenge 3 :

Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.

### Challenge 4 : Programme guidé par menu pour convertir l'année

Ecrire un programme C piloté par menu pour convertir une année donnée en,

1. Mois
2. Jours
3. Heures
4. Minutes
5. Secondes

Pour plus de simplicité, n'incluez pas l'année bissextile (sauf si vous êtes courageux pour le faire).
1 an = 365 jours
1 mois = 30 jours

### Challenge 5 :

**Fizz Buzz** est une question d'entretien classique pour les développeurs, qui est posée ou mentionnée si souvent et depuis si longtemps qu'elle en devient presque un cliché !

Bien que ce défi puisse paraître très simpliste à ceux qui ont une certaine expérience du codage, il est conçu pour éliminer 99,5 % des candidats à un poste de programmation qui ne peuvent pas utiliser de manière créative leurs connaissances en codage pour résoudre des problèmes simples.

Vous voulez tenter votre chance ?

Écrivez un programme fizzbuzz.c qui affiche des nombres de 1 à 100.

Mais pour les multiples de 3, imprimez Fizz au lieu du nombre et pour les multiples de 5, imprimez Buzz. Pour les nombres qui sont des multiples à la fois de 3 et de 5, imprimez FizzBuzz.

```c
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
...
98
Fizz
Buzz
```

## Challenge 6 : Recherche d'anagrammes

Dans ce projet, nous allons écrire un programme pour déterminer si deux chaînes de caractères sont des anagrammes ou non.

La chaîne y est un anagramme de la chaîne x si y est un réarrangement de la chaîne x. Cela implique que y et x ont les mêmes lettres avec la même quantité de chaque lettre. Exemple : "code" et "déco" sont des anagrammes !

Les contraintes de ce projet sont les suivantes : Chaque chaîne ne contiendra que des caractères issus des quatre premières lettres de l'alphabet anglais ('a', 'b', 'c', 'd') et des espaces. Toutes les lettres sont en minuscules.

**Algo :**

Nous allons créer deux tableaux de longueur quatre : un pour chaque chaîne de caractères qui représente le compte de chaque caractère. Ces tableaux serviront de compteurs. Dans chaque tableau, le nombre à la position zéro correspond au compte de la lettre 'a', le nombre à la position un correspondra au compte de la lettre 'b' et ce schéma continuera pour les lettres restantes. Nous ne comptons pas le nombre d'espaces. Par exemple, "a bc d" serait une anagramme de "ab cd".

Nous allons ensuite parcourir en boucle les deux chaînes de caractères et mettre à jour leurs compteurs respectifs.

Nous comparons ensuite les deux compteurs pour voir si les deux chaînes sont des anagrammes et, si c'est le cas, nous imprimons "Anagramme". Si ce n'est pas le cas, nous afficherons "Pas d'anagramme !".
