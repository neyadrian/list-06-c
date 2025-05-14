/*Faça um programa que, dada uma string, diga se ela é um palíndromo ou não.
Lembrete: Um palíndromo é uma palavra ou frase que pode ser lida da mesma forma de trás
para frente, ignorando espaços, acentos e letras maiúsculas/minúsculas.

Exemplo de entrada 1: ovo
Saída esperada 1: É um palíndromo
Exemplo de entrada 2: casa
Saída esperada 2: Não é um palíndromo */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char palavra[50], palavra_invertida[50];
    int i;
    size_t tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    palavra[strcspn(palavra, "\n")] = '\0';

    tamanho = strlen(palavra);

    for(i = 0; i < tamanho; i++) {
        palavra_invertida[i] = palavra[tamanho - 1 - i];
    }

    palavra_invertida[i] = '\0';
    
    if (strcmp(palavra, palavra_invertida) == 0) {
        printf("E um palindromo\n");
    } else {
        printf("Nao e um palindromo\n");
    }
    
    return 0;
}       