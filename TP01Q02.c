#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


bool isPalindromo(char* palavra){
    //Contador correspondente ao lado direito
    int j;
    bool resp=false;
    j=strlen(palavra)-1;
    //Itera comparando os correspondentes na esquerda e na direita
    for (int i = 0; i < (strlen(palavra)/2)-1; i++){
    //Basta 1 das comparações acusar diferença retorna falso
        if(palavra[i]!=palavra[j]){
            return resp;
        }
        j--;
    }
    //Caso tenha passa no teste retorna verdadeiro
    resp=true;
    return resp;
}

int main(){
    int i;
    char palavra[100];
    //Lê a entrada
    scanf("%s",palavra);
    while (strcmp(palavra,"FIM")!=0){
    //Chama a função que verifica se é palindromo
        if(isPalindromo(palavra)==true){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    //Repete a leitura da entrada
        scanf("%s",palavra);
    }
}

