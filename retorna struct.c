#include <stdio.h>
typedef struct{int x,y;}Ponto;
Ponto cria(int a,int b){Ponto p={a,b}; return p;}
int main(){
    Ponto p=cria(3,4);
    printf("%d %d\n",p.x,p.y);
    return 0;
}
