#include "main.h"
/**
*sqtrv2 - fonction pour trouver la racine carre
*@n: nombre
*@i: Le compteur pour tester les valeurs
*Return: La racine carree naturelle de n ou -1 si n en a pas
*/
int sqtrv2(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
/**retourne i si n a une racine carre naturelle*/
return (i);
}
/**Appel recursif avec i incremente*/
return (sqtrv2(n, i + 1));
}
/**
*_sqrt_recursion - Retourne la racine carree naturelle d un nombre
*@n: Le nombre pour lequel on cherche la racine carree
*Return: La racine carree naturelle de n ou -1 si n en a pas
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
/**La racine carree de nombre negatif n est pas definie*/
return (-1);
}
/**Appel de la fonction sqtrv2 avec i initialise a 0*/
return (sqtrv2(n, 0));
}
