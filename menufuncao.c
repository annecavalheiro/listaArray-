#include <stdio.h>

int menu(){
    int op;
    do{
        printf("1-Adicao 2-Subtracao 3-Multiplicacao 4-Divisao 5-Sair: ");
        scanf("%d",&op);
    }while(op<1 || op>5);
    return op;
}

float ad(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mult(float a,float b){return a*b;}
float divi(float a,float b){return b==0?(printf("Erro!\n"),0):a/b;}

int main(){
    int op;
    float x,y,r;
    do{
        op=menu();
        if(op==5) break;
        printf("Digite dois numeros: ");
        scanf("%f %f",&x,&y);
        if(op==1) r=ad(x,y);
        else if(op==2) r=sub(x,y);
        else if(op==3) r=mult(x,y);
        else r=divi(x,y);
        if(!(op==4 && y==0)) printf("Resultado: %.2f\n",r);
    }while(op!=5);
}
