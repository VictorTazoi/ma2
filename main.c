#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int tam = 30;

typedef struct{
    int codigo[tam];
    float valorCompra[tam];
    float valorVenda[tam];
    float lucro[tam];
}Ativo;

int menuAcao = 0; //Variável de controle das opções do menu inicial

int cadastrarAtivo(){
    system("cls");
    printf("CADASTRO DE ATIVO\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");;
}
void listarAtivos(){
    system("cls");
    printf("LISTAR ATIVOS\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}
int buscarAtivo(){
    system("cls");
    printf("BUSCAR UM ATIVO\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}
int atualizarAtivo(){
    system("cls");
    printf("ATUALIZAR UM ATIVO\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}
int excluirAtivo(){
    system("cls");
    printf("EXCLUIR UM ATIVO\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL,"");

    do{
        system("cls");
        printf("GESTÃO DE INVESTIMENTOS");

        printf("\n\n1 - Cadastrar um Ativo");
        printf("\n2 - Listar Ativos");
        printf("\n3 - Buscar Ativos");
        printf("\n4 - Atualizar um Ativo");
        printf("\n5 - Excluir um Ativo");

        printf("\n\nDigite o número da opção desejada:");
        scanf("%i", &menuAcao);

        if(menuAcao == 1){ //Cadastrar Ativo
            cadastrarAtivo();
        }else if(menuAcao == 2){ // Listar Ativo
            listarAtivos();
        }else if(menuAcao == 3){ // Buscar Ativo
            buscarAtivo();
        }else if(menuAcao == 4){ // Atualizar Ativo
            atualizarAtivo();
        }else if(menuAcao == 5){ // Excluir Ativo
            excluirAtivo();
        }

        if((menuAcao < 0) || (menuAcao > 5)){
                menuAcao = 0;
        }
    }while(menuAcao == 0);



    return 0;
}
