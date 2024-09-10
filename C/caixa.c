#include <stdio.h>
    int senha,opcao,agencia;
    float saldo=0.0,saque=0.0,deposito=0.0,limite=500.0;


int main(){
  


    printf("Bem vindo ao caixa eletronico, digite sua senha: ");
    scanf("%d",&senha);
    do{
    if (senha!=2805){
        printf("Senha inválida, tente novamente: ");
        scanf("%d",&senha);
    }} while (senha!=2805);


    printf("Informe a sua agencia: ");
    scanf("%d",&agencia);
    do{
        printf("Agencia errada, digite novamente: \n");
        scanf("%d",&agencia);
        } 
    while (agencia!=4020);

    


    printf("Escolha uma opcao: \n1- saldo \n2-extrato \n3-saque \n4-deposito\n ");
    scanf("%d",&opcao);
    do{
    if (opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4 ){
        printf("opcao invalida, tente novamente:\n ");
        printf("Escolha uma opcao: \n1- saldo \n2-extrato \n3-saque \n4-deposito\n ");
        scanf("%d",&opcao);
    }} while (opcao!=1 && opcao!=2 && opcao!=3 && opcao!=4);

    switch (opcao)
    {
    case 1:
        printf("Você tem um saldo total de : %2.f",saldo);
        break;
    case 2:
        printf("extrato : %2.f",saldo);
        break;
    case 3:
        printf("Informe um valor para sacar : ");
        scanf("%f",&saque);
        saldo=saldo-saque;
        break;
    case 4:
        printf("Informe um valor para depositar : ");
        scanf("%f",&deposito);
        saldo=deposito+saldo;
        break;
            
    }
return 0;
}