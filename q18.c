/*Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa deve terminar quando uma idade negativa
for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa mais jovem e da mais velha.

Entradas (idade, nome):
21 Ana  
25 Bruno  
19 Carla  
30 Daniel  
28 Eduardo  
15 Fernanda  
32 Gabriel  
18 Helena  
22 Igor  
-1  
Saída:
Pessoa mais jovem: Fernanda (15 anos)  
Pessoa mais velha: Gabriel (32 anos)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char nome[50], mais_novo[50], mais_velho[50];
    int idade, idade_novo = 100, idade_velho = 0, i = 0;
    
    while (1) {

        printf("Digite idade e nome: ");
        scanf("%d", &idade);
        
        if (idade < 0) {
            break;
        }
        
        scanf("%s", nome);
        i++;

        if (idade < idade_novo) {
            idade_novo = idade;
            strcpy(mais_novo, nome);
        }

        if (idade > idade_velho) {
            idade_velho = idade;
            strcpy(mais_velho, nome);
        }

        if (i == 10) {
            break;
        }
    }

    printf("Pessoa mais jovem: %s (%d anos)\n", mais_novo, idade_novo);
    printf("Pessoa mais velha: %s (%d anos)\n", mais_velho, idade_velho);

    return 0;
}