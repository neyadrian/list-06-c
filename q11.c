/* Faça um programa que conte o número de 1’s que aparecem em uma string. 

Entrada: 0011001
Saída: 3 */

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[50];
    int i, cont = 0;
    size_t tamanho;

    printf("Digite: ");
    fgets(str, sizeof(str), stdin);

    tamanho = strlen(str) - 1;

    for (i = 0; i < tamanho; i++) {
        if (str[i] == '1') {
            cont++;
        }
    }

    printf("Total de 1's: %d\n", cont);

    return 0;
}