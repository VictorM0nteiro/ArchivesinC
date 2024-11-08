#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    // int main(){
    //     /*para se escrever um carctere em um arquivo usamos
    //     a funcao fputc()*/
    //     //Forma geral:
    //     int fputc(char c, FILE *fp);

    //     /*retorn
    //     - em caso de erro a constante EOF
    //     - em caso de sucesso: o proprio carctere */

    //     system("pause");
    //     return 0;


    // }

    int main(){
        FILE *f;
        f = fopen("C:\\Users\\User\\Desktop\\faculdade prog\\arquivosemC\\arquivo.txt","w");
        if(f == NULL){
            printf("Erro na abertura\n");
            return 1;
        }
        char texto[20] = "meu programa em C";
        for(int i = 0; i < strlen(texto);i++){
            fputc(texto[i],f); // a cada caractere escrito
            //fputc(' ', f); // estou escrevendo logo em seguida um espaco
            //fputc('-',  f);
        }
        fclose(f);

        return 0;
    }