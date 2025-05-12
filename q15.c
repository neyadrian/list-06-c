/*Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
Entrada: ESTUDO DE C
Saída: estudo de c
*/

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
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            frase[i] = frase[i] + 32;
        }
    }

    printf("Nova frase: %s\n", frase);

    return 0;
}