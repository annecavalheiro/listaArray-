#include <stdio.h>
typedef struct{int x,y;}Ponto;
int main(){
    Ponto p1={2,3},*pp;
    pp=&p1;
    pp->x+=5; pp->y+=5;
    printf("%d %d\n",p1.x,p1.y);
    return 0;
}
