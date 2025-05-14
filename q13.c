/*Faça um programa que receba do usuário uma string. O programa imprime a string sem suas vogais.      

Entrada: Ola turma
Saída: L trm */

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[50];
    int i;
    size_t tamanho;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase) - 1;
    
    for(i = 0; i < tamanho; i++) {
        if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u'
           && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U') {
            printf("%c", frase[i]);
           }
    }

    return 0;
}