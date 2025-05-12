/*Faça um programa que receba uma palavra e a imprima de trás para frente.
Dica: Percorra a string do final para o início utilizando um laço for e exiba os caracteres na ordem inversa.
Exemplo de entrada: casa
Saída esperada: asac
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    size_t tamanho = strlen(palavra);

    for(i = tamanho - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    return 0;
}