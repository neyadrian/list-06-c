/*Escreva um programa que conte o número de palavras em uma string.
Dica: Utilize espaços como delimitadores entre palavras. Considere casos onde podem existir múltiplos espaços consecutivos.
Exemplo de entrada: Esta é uma frase de teste
Saída esperada: A string contém 6 palavras. */

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[100];
    int i, contador = 0, tamanho;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    for(i = 0; i < tamanho; i++) {
        if(frase[i] == ' ') {
            contador++;
        }
    }
    
    printf("A string contém %d palavras.\n", contador + 1);

    return 0;
}