#include <stdio.h>

void ler(int m[][3], int i, int j){
    if(i==3) return;
    if(j==3){ ler(m,i+1,0); return; }
    scanf("%d",&m[i][j]);
    ler(m,i,j+1);
}

void mostrar(int m[][3], int i, int j){
    if(i==3) return;
    if(j==3){ printf("\n"); mostrar(m,i+1,0); return; }
    printf("%d ",m[i][j]);
    mostrar(m,i,j+1);
}

int main(){
    int m[3][3];
    printf("Preencha a matriz 3x3:\n");  // mensagem antes de ler
    ler(m,0,0);
    printf("Matriz ficou:\n");           // mensagem antes de mostrar
    mostrar(m,0,0);
}
