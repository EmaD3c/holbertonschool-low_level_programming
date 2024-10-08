#include "main.h"
#include <stdio.h>
/**
*print_diagsums - sum of the two diagonals of a square matrix of integers
*@a:tableau
*@size: taille du tableau
*/
void print_diagsums(int *a, int size)
{
int i, diagonale1 = 0, diagonale2 = 0;
for (i = 0; i < size; i++)
{
/**Addition lelement de la diagonale principale(de haut gauche a bas droite)*/
diagonale1 += a[(i * size) + i];
/**Addition lelement de la diagonale secondaire(de haut droit a bas gauche)*/
diagonale2 += a[(i * size) + ((size - 1) - i)];
}
/**Affiche les sommes des deux diagonales*/
printf("%d, %d\n", diagonale1, diagonale2);
}
