/*Faça um programa que leia uma string e a imprima na tela.
Objetivo: Trabalhar com leitura e exibição de strings, introduzindo o uso da
biblioteca &lt;stdio.h&gt; para manipulação básica de strings.

Entrada: Olá, mundo!
Saída: Você digitou: Olá, mundo!*/

#include <stdio.h>

int main() {
    
    char hello[20];

    fgets(hello, sizeof(hello), stdin);

    printf("Você digitou: %s\n", hello);

    return 0;
}