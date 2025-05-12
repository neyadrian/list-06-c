/*Escreva um programa que substitui as ocorrências de um caractere ‘0’ em uma string por outro caractere ‘1’.

Entrada: 1201041
Saída: 1211141*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[50];
    int i;
    size_t tamanho;

    printf("Digite: ");
    fgets(str, sizeof(str), stdin);

    tamanho = strlen(str) - 1;

    for (i = 0; i < tamanho; i++) {
        if (str[i] == '0') {
            str[i] = '1';
        }
    }

    printf("Novo numero: %s\n", str);

    return 0;
}