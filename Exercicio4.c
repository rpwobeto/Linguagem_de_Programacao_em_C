#include <stdio.h>
#include <ltdl.h>

int multiplicador(int a, int b) // Construção da função recursiva
{
    if(a == 0 || b == 0)
    {
      return 0;
    } 
    else if(b == 1) 
    {
      return a;
    }

    return a + multiplicador(a, --b);
}
int main() 
{
    int x, y, resultado;

    printf("Digite dois numeros para serem multiplicados"); //Entrada dos valores  
 
    printf("\nPrimeiro valor digitado: "); //Primeiro valor a ser digitado
    scanf("%d", &x);
    
    printf("Segundo valor digitado: "); //Segundo valor a ser digitado
    scanf("%d", &y);

    resultado = multiplicador(x, y); //Execução da função recursiva e armazenamento dos valores

    printf("Resultado da multiplicacao: %d", resultado); // Apresenta o valor da multiplicação

    return 0;
}
