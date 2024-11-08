#include <stdio.h>
#include <stdlib.h>

    int main(){
        // Função fopen(): permite abrir um arquivoi em um determinado
        // modo de leitura e escrita

        // FILE *fopen(char *nome, char *modo);

        // // exemplo:
        // FILE *f;
        // f = fopen("arquivo.txt","w");

        FILE *f;
        f = fopen("H:\\arquivo.txt","w");
        if(f = NULL){
            printf("Erro na abertura!\n");
            system("pause");
            return 1; //encerra do programa
        }


        // -caminho absoluto (endereço completo)
        // -relativo ( realtivo a pasta do programa)
        // exemplo:
        FILE *f;
        // caminho absoluto
        f = fopen("C\\Projetos\\arq.txt","w");
        // caminho relativo
        f = fopen("arquivo.txt","w");
        f = fopen("..\\novo\\arq2.txt","w");
        // .. volta para pasta anterior e entra na pasta novo



        /*o modo de leitura de abertura determina que tipode uso
        ser[a feito do arquivo]*/

        //Leitura do arquivo de texto
        f = fopen("arquivo.txt","r");        
        //Escrita de arquivo de texto
        f = fopen("arquivo.txt","w");
        //Leitura de arquivo binario
        f = fopen("arquivo.txt","rb");
        //Escrita de arquivo binario
        f = fopen("arquivo.txt","wb");      


        ////////Fechar arquivos!!!!!!!!!!!//
        /*Sempre que terminamos de usar um arquivo,
        devemos fech[a-lo. Para realizar essa tarefa, usa-se
        a funcao fclose()*/
        //Forma geral
        int fclose (FILE *f);

        /*o fclose() retorna 0 no caso de sucesso no
        fechamento do arquivo*/



        /////////EXEMPLO COMPLETO

        FILE *f/
        f = fopen("C:\\arquivo.txt","w");
        if(f == NULL){
            printf("Erro na abertura!\n");
            system("pause");
            return 1; //encerra do programa
        }

        /*fechar o arquivo garante que todos os
        aquivos foram realmente gravados*/\
        fclose(f);


        system("pause");
        return 0;
    }