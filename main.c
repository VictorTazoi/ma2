#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char codigo[30];
    float valor_compra;
    float valor_venda;
    float lucro;
}Ativo;


int menuAcao = 0; //Variável de controle das opções do menu inicial

int total = 3;

//CADASTRAR
int cadastrarAtivo(){
    system("cls");
    printf("CADASTRO DE ATIVO\n");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");;
}

//LISTAR
void listarAtivos(Ativo ativos[], int total){
    system("cls");
    printf("LISTAR ATIVOS\n");

    float lucro = 0;
    printf("===Lista de Ativos:===\n");
    printf("Codigo\t Valor de Compra\t\t Valor de Venda\t\t Lucro\n");
    for (int i = 0; i< total; i++) {
        ativos[i].lucro = ativos[i].valor_venda - ativos[i].valor_compra;
        printf("%s \t\t %f \t\t %f \t\t %f\n",ativos[i].codigo,ativos[i].valor_compra,ativos[i].valor_venda,ativos[i].lucro);
    }

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}

//BUSCAR
int buscarAtivo(){
    system("cls");
    printf("BUSCAR UM ATIVO\n");
    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}

//ATUALIZAR
int atualizarAtivo(){
    system("cls");
    printf("ATUALIZAR UM ATIVO\n");

    printf("\nBloco de código da função aqui");

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}

//EXCLUIR
int excluirAtivo(Ativo ativos[],int total){
    system("cls");
    printf("EXCLUIR UM ATIVO\n");

    char cod;
    int k = 0;
    printf("Qual o código do ativo a ser removido?\n");
    scanf("%s",&cod);
    for(int i = 0;i<total;i++){
        if(strcmp(ativos[i].codigo,cod) == 0){
            k++;
        }
        ativos[i] = ativos[k];
        k++;
    }
    return total -= 1;

    printf("\n\nPressione 0 para VOLTAR: ");
    scanf("%i", &menuAcao);
    printf("\n\n");
}

int main()
{
    setlocale(LC_ALL,"");


    Ativo ativos[total];

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
            listarAtivos(ativos, total);
        }else if(menuAcao == 3){ // Buscar Ativo
            buscarAtivo();
        }else if(menuAcao == 4){ // Atualizar Ativo
            atualizarAtivo();
        }else if(menuAcao == 5){ // Excluir Ativo
            excluirAtivo(ativos, total);
        }

        if((menuAcao < 0) || (menuAcao > 5)){
                menuAcao = 0;
        }
    }while(menuAcao == 0);



    return 0;
}
