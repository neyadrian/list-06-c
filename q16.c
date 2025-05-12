/*Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
Entrada: linguagem c
Saída: LINGUAGEM C*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[100];
    int i;
    size_t tamanho;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase) - 1;

    for (i = 0; i < tamanho; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            frase[i] = frase[i] - 32;
        }
    }

    printf("Nova frase: %s\n", frase);

    return 0;
}