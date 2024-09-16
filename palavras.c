#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    int em_palavra = 0;
    int palavras = 0;
    char frase [1000];

    printf("Digite uma frase \n");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        char c = frase[i];

        if (isspace(c))
        {
            if(em_palavra)
            {
                em_palavra = 0;
            }
        } else {
            if(!em_palavra)
            {
                palavras++;
                em_palavra = 1;
            }
        }
    }
        printf("A quantidade de palavras e: %d \n", palavras);
}