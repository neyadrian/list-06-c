/*Crie um programa que compare duas strings, informando se elas são iguais ou diferentes.
Objetivo: Praticar a comparação de strings com funções como strcmp() da biblioteca <string.h>.*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char vetor1[50], vetor2[50];

    printf("Digite a primeira palavra: ");
    fgets(vetor1, sizeof(vetor1), stdin);

    printf("Digite a segunda palavra: ");
    fgets(vetor2, sizeof(vetor2), stdin);

    if (strcmp(vetor1, vetor2) == 0) {
        printf("Palavras iguais.\n");
    } else {
        printf("Palavras diferentes.\n");
    }
    
    return 0;
}