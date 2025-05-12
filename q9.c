/*Desenvolva um programa que leia uma string e informe:
a) O número de caracteres;
b) O número de vogais;
c) O número de consoantes.

Entrada: computador
Saída:
Número de caracteres: 10  
Número de vogais: 4  
Número de consoantes: 6
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char palavra[50];
    int i, vogais = 0, consoantes = 0;
    size_t tamanho;

    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);

    tamanho = strlen(palavra) - 1;

    for (i = 0; i < tamanho; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' ||
            palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U') {
                vogais++;
        } else if ((palavra[i] >= 'a' && palavra[i] <= 'z') || (palavra[i] >= 'A' && palavra[i] <= 'Z')) {
                consoantes++;
        }
    }

    printf("Numero de caractetes: %zu\n", tamanho);
    printf("Numero de vogais: %d\n", vogais);
    printf("Numero de consoantes: %d\n", consoantes);

    return 0;
}