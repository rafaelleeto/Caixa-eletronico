int senha, opcao, agencia;
float saldo = 0.0, saque = 0.0, deposito = 0.0;

int main() {
    // Solicita a senha
    printf("Bem-vindo ao caixa eletrônico. Digite sua senha: ");
    scanf("%d", &senha);

    while (senha != 2805) {
        printf("Senha inválida. Tente novamente: ");
        scanf("%d", &senha);
    }

    // Solicita a agência
    printf("Informe a sua agência: ");
    scanf("%d", &agencia);

    while (agencia != 4020) {
        printf("Agência inválida. Tente novamente: ");
        scanf("%d", &agencia);
    }

    // Menu de opções
    do {
        printf("Escolha uma opção:\n1 - Saldo\n2 - Extrato\n3 - Saque\n4 - Depósito\n5- Sair");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Você tem um saldo total de: %.2f\n", saldo);
                break;
            case 2:
                printf("Extrato: %.2f\n", saldo);
                break;
            case 3:
                printf("Informe um valor para sacar: ");
                scanf("%f", &saque);
                if (saque > saldo) {
                    printf("Você não possui essa quantia de dinheiro. Você possui um total de %.2f!\n", saldo);
                } else {
                    saldo -= saque;
                    printf("Saque de %.2f realizado com sucesso.\n", saque);
                }
                break;
            case 4:
                printf("Informe um valor para depositar: ");
                scanf("%f", &deposito);
                saldo += deposito;
                printf("Depósito de %.2f realizado com sucesso.\n", deposito);
                break;
            case 5: 
                return 2;
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao < 1 || opcao > 4);

    return 0;
}