#include <stdio.h>
void aumenta(int *x){*x+=10;}
int main(){
    int a=5;
    aumenta(&a);
    printf("%d\n",a);
    return 0;
}
