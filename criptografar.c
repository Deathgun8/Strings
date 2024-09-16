#include <stdio.h>
#include<string.h>

int main (void)
{
    char frase [1000];
    char criptografada [1000];

    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; frase [i] != '\0'; i++)
    {
        char c = frase [i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            criptografada[i] = '*'; 
        } else {
            criptografada[i] = c;
        }
    }

    printf("Frase criptografada: %s", criptografada);
}