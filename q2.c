/*Crie um programa que calcula o comprimento de uma string (não use a função strlen).

Exemplo de entrada: computador
Saída esperada: 10
*/

#include <stdio.h>

int main() {
    
    char palavra[50];
    int i, cont = 0;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    for (i = 0; palavra[i] != '\0'; i++) {
        cont++;
    }
    
    cont = cont - 1;

    printf("%d", cont);

    return 0;
}