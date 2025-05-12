/*Faça um programa que, dada uma string, diga se ela é um palíndromo ou não.
Lembrete: Um palíndromo é uma palavra ou frase que pode ser lida da mesma forma de trás
para frente, ignorando espaços, acentos e letras maiúsculas/minúsculas.

Exemplo de entrada 1: ovo
Saída esperada 1: É um palíndromo
Exemplo de entrada 2: casa
Saída esperada 2: Não é um palíndromo */

#include <stdio.h>
#include <string.h>

int main() {
    
    char palavra[50], palavra_invertida[50];
    int i;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    size_t tamanho = strlen(palavra);

    for(i = tamanho - 1; i >= 0; i--) {
        palavra_invertida[i] = palavra[i];
    }
    
    if (palavra[50] == palavra_invertida[50]) {
        printf("E um palindromo");
    } else {
        printf("Nao e um palindromo");
    }
    
    return 0;
}