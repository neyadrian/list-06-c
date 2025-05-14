/*Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em uma string.
A string e as letras L1 e L2 devem ser fornecidas pelo usuário.

Entrada:
String: banana  
L1: a  
L2: o

Saída: bonono*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char palavra[50], l1, l2;
    int i;
    size_t tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    tamanho = strlen(palavra) - 1;

    printf("Digite a letra L1: ");
    scanf(" %c", &l1);

    printf("Digite a letra L2: ");
    scanf(" %c", &l2);

    for (i = 0; i < tamanho; i++) {
        if (palavra[i] == l1) {
            palavra[i] = l2;
        }
    }

    printf("Nova palavra: %s\n", palavra);

    return 0;
}