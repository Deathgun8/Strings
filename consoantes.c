#include <stdio.h>
#include <string.h>

int main (void)
{
    char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int contagem [42] = {0};
    char frase [1000];

    printf("Digite uma frase \n");
    fgets(frase, sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        char c = frase [i];

        for(int j = 0; i < 42; j++)
        {
            if(c == consoantes[j])
            {
                contagem[j]++;
                break;
            }
        }
    }

    for (int j = 0; j < 42; j++)
    {
        printf("possui: %d consoante %c \n", contagem[j], consoantes[j]);
    }
}