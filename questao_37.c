/*
 Questão 37
 Três vetores: nomes, codigos, preços. Mostrar relatório dos que sofrerão aumento.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char nome[10][101];
    int codigo[10]; double preco[10];
    for(int i=0;i<10;i++){
        printf("Nome %d: ", i+1); scanf("%100s", nome[i]);
        printf("Codigo %d: ", i+1); scanf("%d", &codigo[i]);
        printf("Preco %d: ", i+1); scanf("%lf", &preco[i]);
    }
    printf("Produtos com aumento:\n");
    for(int i=0;i<10;i++){
        int condCod = (codigo[i]%2==0);
        int condPreco = (preco[i] > 1000.0);
        double novo = preco[i];
        if(condCod && condPreco) novo = preco[i]*1.20;
        else if(condCod) novo = preco[i]*1.15;
        else if(condPreco) novo = preco[i]*1.10;
        if(condCod || condPreco) printf("%s %d %.2f -> %.2f\n", nome[i], codigo[i], preco[i], novo);
    }
    return 0;
}
