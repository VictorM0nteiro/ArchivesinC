#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(){
        // /*Para ler um caractere de um arquivo usamos a
        // funcao fgetc()*/
        // int fgetc(FILE *fp);

        // /*retorna
        // -Em caso de erro: a constante EOF
        // -Em caso de sucesso: o caractere lido do arquivo*/

        // return 0;
        
        // FILE *f;
        // f = fopen("C:\\Users\\User\\Desktop\\faculdade prog\\arquivosemC\\arquivo.txt","r"); // r pq vou ler no arquivo
        // if(f == NULL){
        //     printf("Erro na abertura do arquivo");
        //     return 1;
        // }
        // char c; // neste for vai ler o arquivo um caractere por vez
        // for( int i = 0; i <= 10; i++){
        //     c = fgetc(f);
        //     printf("%c",c);
        // }
        // printf("\nfim\n");
        // fclose(f);
        // return 0;


        // COMO faco para ler o aquivo ate o fim

        FILE *f;
        f = fopen("C:\\Users\\User\\Desktop\\faculdade prog\\arquivosemC\\arquivo.txt","r"); // r pq vou ler no arquivo
        if(f == NULL){
            printf("Erro na abertura do arquivo");
            return 1;
        }
        char c = fgetc(f);
        while (c != EOF)
        {
            printf("%c",c);
            c = fgetc(f);
        }
        fclose(f);

        printf("\nfim\n");
        return 0;
        
    }