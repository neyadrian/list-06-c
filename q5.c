/*O Código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição
na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes.
Implemente um programa que utilize o Código de César com uma troca de 3 posições. Receba uma string e retorne a string codificada.
Dica: Utilize a tabela ASCII para manipular os deslocamentos das letras. Certifique-se de tratar separadamente letras maiúsculas,
minúsculas e caracteres que não sejam letras (como espaços e pontuações).

Exemplo de entrada: a ligeira raposa
Saída esperada: d oljhlud udsrvd */

#include <stdio.h>
#include <string.h>

int main() {
    
    char frase[80], frase_crip[80];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++) {
        if(frase[i] >= 'a' && frase[i] <= 'z') {

        } else if (frase[i] >= 'A' && frase[i] <= 'Z') {

        } else {

        }
    }

    return 0;
}