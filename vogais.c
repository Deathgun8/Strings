#include <stdio.h>
#include <string.h>

int main (void)
{
    char vogais[] = "aeiouAEIOU";
    int contagem [10] = {0};
    char frase [1000];

    printf("Digite uma frase \n");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        char c = frase [i];

        for(int j = 0; i < 10; j++)
        {
            if(c == vogais[j])
            {
                contagem[j]++;
                break;
            }
        }
    }

    for (int j = 0; j < 10; j++)
    {
        printf("possui: %d vogal %c \n", contagem[j], vogais[j]);
    }
}