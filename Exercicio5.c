#include <stdio.h>

int main() {

    int i;
    char c;
    FILE *csv;

    struct dados 
    {
        char nome[30];
        char CPF[11];
        char telefone[11];
        char email[30];
    };
    struct dados informacoes [6];
 
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d nome completo: \n\n", i+1);
        scanf("%30[^\n]", &informacoes[i].nome);
        
            c = getc(stdin); // Realiza a adequação do \n para o próximo dado inserido
            if (c != '\n')
            ungetc(c, stdin);

            printf("Digite o %d CPF\n\n", i+1);
            scanf("%11[^\n]", &informacoes[i].CPF);
             
            c = getc(stdin); // Realiza a adequação do \n para o próximo dado inserido 
            if (c != '\n')
                ungetc(c, stdin);

            printf("Digite o %d numero de telefone\n\n", i+1);
            scanf("%11[^\n]", &informacoes[i].telefone);
            
            c = getc(stdin); // Realiza a adequação do \n para o próximo dado inserido 
            if (c != '\n')
                ungetc(c, stdin);

            printf("Digite o %d email\n\n", i+1);
            scanf("%30[^\n]", &informacoes[i].email);
            
            c = getc(stdin); // Realiza a adequação do \n para o próximo dado inserido 
            if (c != '\n')
                ungetc(c, stdin);
    }
    csv = fopen("numero-ru.csv","w+"); // abre o arquivo  para escrita

    if(csv){
        
        for (i = 0; i < 6; i++) //Apresenta na tela os dados digitados
        {
            fprintf(csv, "Nome;%s", i+1, informacoes[i].nome);
            fprintf(csv, "CPF;%s", i+1, informacoes[i].CPF);
            fprintf(csv, "Telefone;%s", i+1, informacoes[i].telefone);
            fprintf(csv, "Email;%s", i+1, informacoes[i].email);
        }

        fclose(csv); //Fecha o arquivo que anteriormente foi aberto para escrita
    } else 
    {
        printf("Erro ao abrir o arquivo. Encerrando o programa\n");
    }

    return 0;
}
