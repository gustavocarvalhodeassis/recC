#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int selectContent;
    printf("---> Selecione <--- \n (1) Cadastro de pedido \n (2) Consulta pedido \n (3) Emitir relatorio \n (4) Sair \n");
    scanf("%d", &selectContent);
    if (selectContent == 1)
    {
        system("cls");
        printf("---> Cadastro de pedido <--- \n");
        char varName, varLocale, varRequest;
        int varValue;
        printf("Nome: ");
        scanf("%s", &varName);
        printf("Endereco: ");
        scanf("%s", &varLocale);
        printf("Pedido: ");
        scanf("%s", &varRequest);
        printf("Valor: ");
        scanf("%d", &varValue);
        printf("\n");
        system("cls");
        printf("---> Resumo do pedido <--- \n");
        printf("\nNome: %s", &varName);
        printf("\nEndereco: %s", &varLocale);
        printf("\nPedido: %s", &varRequest);
        printf("\nValor: %d", varValue);
        printf("\n");
        printf("\n--------------------------\n");
        printf("\n");
        system("pause");
        return(0);
    }
    if (selectContent == 2)
    {
        printf("Consulta pedido \n");
    }
    if (selectContent == 3)
    {
        printf("Emitir relatório \n");
    }
    if (selectContent == 4)
    {
        return(0);
    }
    else
    {                                                                                                               
        printf("Opção invalida");
    }
    
    return(0);
}
