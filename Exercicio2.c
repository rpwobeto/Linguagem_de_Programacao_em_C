#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int ru[7], *ptr; // valores inteiros e o ponteiro
    int soma = 0; //soma dos valores inteiros

    // Pede para o usuário para inserir o RU e grava a informação
    printf("Insira seu RU: ");
    for (int i = 0; i < 7; i++){
        scanf("%d", &ru[i]); // lê os valores inteiros
    }

    ptr = &ru; 

    // Soma os números digitados por meio do ponteiro
    for (int i = 0; i < 7; i++){
        soma += *ptr;
        ptr++;
    }

    // Apresenta a soma dos números do RU
    printf("\nA soma dos números inseridos resulta em: %d", soma);

    return 0;
}