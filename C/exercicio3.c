#include <stdio.h>

int main (){
    int numero;
    char letra;
    float quebrado;
    int* numero1;
    char* letra1;
    float* quebrado1;

    printf("variaveis antes das alteracoes: \n%d\n %f\n %c\n",numero,quebrado,letra);

    numero1=&numero;
    *numero1=10;
    quebrado1=&quebrado;
    *quebrado1=30.5;
    letra1=&letra;
    *letra1='c';
    
    printf("variaveis depois das alteracoes: \n%p\n %p\n %p\n",&numero,&quebrado,&letra);



    








}