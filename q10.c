/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25,
imprime o nome da pessoa e a palavra “ACEITA”, caso contrário imprimir “NAO ACEITA”.

Entrada:
Nome: Carla  
Sexo: F  
Idade: 22

Saída: Carla ACEITA

Entrada:
Nome: Júlia  
Sexo: F  
Idade: 30
Saída: NAO ACEITA
*/

#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[50], sexo;
    int idade;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((sexo == 'F' || sexo == 'f') && idade < 25) {
        printf("%sACEITA\n", nome);
    } else {
        printf("NAO ACEITA\n");
    }
    
    return 0;   
}