#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>
using namespace std;
int main(int argc, char const **argv[])
{
setlocale(LC_ALL, "portuguese");

    int contador;

    printf  ("\nDigite um valor: ");
    scanf ("%d", &contador);
    printf ("\n");
    for (contador; contador >= 1; contador--) 
    {
        printf ("%d . ", contador);
    }
        printf ("Fim \n\n");
return EXIT_SUCCESS;
}   
