#include <stdio.h>

int senha, opcao, agencia;
float saldo = 0.0, saque = 0.0, deposito = 0.0;

int main() {
    // Verificação da senha
    printf("Bem-vindo ao caixa eletrônico. Digite sua senha: ");
    scanf("%d", &senha);
    while (senha != 2805) {
        printf("Senha inválida, tente novamente: ");
        scanf("%d", &senha);
    }

    // Verificação da agência
    printf("Informe a sua agência: ");
    scanf("%d", &agencia);
    while (agencia != 4020) {
        printf("Agência incorreta, digite novamente: ");
        scanf("%d", &agencia);
    }

    int continuar = 1;
    while (continuar) {
        // Menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1 - Saldo\n");
        printf("2 - Extrato\n");
        printf("3 - Saque\n");
        printf("4 - Depósito\n");
        printf("5 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Você tem um saldo total de: %.2f\n", saldo);
                break;
            case 2:
                printf("Extrato: %.2f\n", saldo);
                break;
            case 3:
                printf("Informe o valor para sacar: ");
                scanf("%f", &saque);
                if (saque > saldo) {
                    printf("Saldo insuficiente para saque.\n");
                } else {
                    saldo -= saque;
                    printf("Saque de %.2f realizado com sucesso.\n", saque);
                }
                break;
            case 4:
                printf("Informe o valor para depositar: ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("Depósito de %.2f realizado com sucesso.\n", deposito);
                break;
            case 5:
                printf("Saindo... Obrigado por usar o caixa eletrônico.\n");
                continuar = 0; // Encerra o loop
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
                break;
        }
    }

    return 0;
}