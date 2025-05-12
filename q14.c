/*Faça um programa que receba uma frase e calcule quantas vogais (a, e, i, o, u) possui essa palavra.

Entrada: programar em C
Saída: 4*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[100];
    int i, vogais = 0;
    size_t tamanho;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase) - 1;

    for (i = 0; i < tamanho; i++) {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
                vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}