#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//Código de sistema de cadastro

int main() {
    char nome[50];
    int (idade);
    printf("Bem-vindo ao programa de cadastro!\n");
    sleep (3);
    system("cls");

    printf ("Para acessar um cadastro existente digite 0, para criar um novo cadastro digite 1: ");
    int escolha;
    scanf("%d", &escolha);
    if (escolha ==0) {
        printf("%s, %d anos", nome, idade);
    }
    
    if (escolha == 1) {
        printf("Criando um novo cadastro...\n");
        sleep (2);
        system("cls");

    printf("Digite seu nome: ");
    scanf("%s", nome);
    system("cls");

    printf("Ola, %s!\n", nome);
    sleep (1);
    system("cls");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    system("cls");

    printf("Cadastro completo!\n");
    sleep (3);
    system("cls");
    }

//ver dados
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    sleep (3);
 //ver dados

    printf("Deseja editar seus dados? Digite 1 para sim ou 0 para nao: ");
    int editar;
    scanf("%d", &editar);
    if (editar == 1) {
    printf("Digite seu novo nome: ");
    scanf("%s", nome);
    system("cls");

    printf("Digite sua nova idade: ");
    scanf("%d", &idade);
    system("cls");

    printf("Dados atualizados!\n");
    sleep (2);
    system("cls");
    printf("Obrigado por usar o programa de cadastro, %s!\n", nome);
    sleep (2);        
    }

    else{
    system("cls");
    printf("Obrigado por usar o programa de cadastro, %s!\n", nome);
    sleep (2);
    }
    return 0;
}