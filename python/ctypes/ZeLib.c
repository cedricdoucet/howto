#include<stdio.h>
 
/*
Attend un pointeur sur un array de caractères (une chaîne en C) 
et l'affiche.
*/
dit_papa(char * p)
{
    printf("%s\n", p);
}
 
 
/*
Attend deux entiers et les multiple
*/
multiplier(long a, long b)
{
    return a * b;
}
 
/*
Attend un pointeur de pointeur sur un array de char
parce qu'on aime les risques.
*/
jakadi(char ** p)
{
    printf("%s\n", *p);
}
