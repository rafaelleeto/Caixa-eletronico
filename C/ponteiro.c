#include <stdio.h>

int main(){
    int contador ;
    int contador2 ;
    printf("Informe o primeiro digito: ");
    scanf("%d",&contador);
    printf("Informe o primeiro digito: ");
    scanf("%d",&contador2);
    printf("contador1:%p\n",&contador);
    printf("contador2:%p\n",&contador2);
    if (&contador>&contador2){
        printf("\nEndereço de 1 e maior");}
        else{
            printf("\nEndereco 2 e maior");
        }
    return 0;
}