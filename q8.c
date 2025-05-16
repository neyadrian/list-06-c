/*Crie um programa que substitua todas as ocorrências de uma letra em uma string por outra letra fornecida pelo usuário.
Dica: Use um laço para percorrer os caracteres da string e faça a substituição conforme necessário.
Exemplo de entrada:
String original: banana
Substituir: a
Por: o
Saída esperada: bonono*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char palavra[50], letra1, letra2;
    int i;
    size_t tamanho;

    printf("Digite a string original: ");
    fgets(palavra, sizeof(palavra), stdin);

    tamanho = strlen(palavra) - 1;

    printf("Substituir: ");
    scanf(" %c", &letra1);

    printf("Por: ");
    scanf(" %c", &letra2);

    for (i = 0; i < tamanho; i++) {
        if (palavra[i] == letra1) {
            palavra[i] = letra2;
        }
    }

    printf("Nova palavra: %s\n", palavra);

    return 0;
}