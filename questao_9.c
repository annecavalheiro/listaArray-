/*
 Questão 9
 Ler vetor de 5 reais e depois ler um código inteiro:
 0 -> finalizar
 1 -> mostrar vetor na ordem direta
 2 -> mostrar vetor na ordem inversa
 outro -> código inválido
*/
#include <stdio.h>

int main(){
    double v[5];
    int i, codigo;
    for(i=0;i<5;i++){
        printf("Digite v[%d]: ", i);
        if(scanf("%lf",&v[i])!=1) return 0;
    }
    printf("Digite o código (0=fim,1=direta,2=inversa): ");
    if(scanf("%d",&codigo)!=1) return 0;
    if(codigo==0){
        printf("Finalizando programa.\n");
    } else if(codigo==1){
        printf("Vetor na ordem direta:\n");
        for(i=0;i<5;i++) printf("%.2f ", v[i]);
        printf("\n");
    } else if(codigo==2){
        printf("Vetor na ordem inversa:\n");
        for(i=4;i>=0;i--) printf("%.2f ", v[i]);
        printf("\n");
    } else {
        printf("Código inválido.\n");
    }
    return 0;
}
