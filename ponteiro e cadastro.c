#include <stdio.h>
typedef struct{char nome[20];int idade;}Pessoa;
int main(){
    Pessoa p[3];int i;
    for(i=0;i<3;i++){
        scanf("%s %d",p[i].nome,&p[i].idade);
    }
    for(i=0;i<3;i++) printf("%s %d\n",p[i].nome,p[i].idade);
    return 0;
}
