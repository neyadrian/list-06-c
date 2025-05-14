/*Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mês e ano para 3 variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se DD, MM e AAAA são numéricos.

Entrada: 25/12/2023
Saída:
Dia: 25  
Mês: 12  
Ano: 2023

Entrada inválida: 25-12-2023
Saída: Formato inválido.
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char data[11];

    printf("Digite a data: ");
    fgets(data, sizeof(data), stdin);

    if (data[2] != '/' || data[5] != '/') {
        printf("Formato invalido.\n");
        
    } else {
        printf("Dia: %c%c\n", data[0], data[1]);
        printf("Mes: %c%c\n", data[3], data[4]);
        printf("Ano: %c%c%c%c\n", data[6], data[7], data[8], data[9]);
    }

    return 0;
}