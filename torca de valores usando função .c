#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a; // guarda valor de 'a' temporariamente
    *a = *b;       // 'a' recebe o valor de 'b'
    *b = temp;     // 'b' recebe o valor guardado
}

int main(){
    int a,b;
    
    printf("Digite dois valores: ");
    scanf("%d %d", & a, &b);
    
    troca(&a, &b); // chama a função passando os endereços
    
    printf("Depois da troca:\n");
    printf("a = %d, b = %d\n",a, b);
    
    return 0;
}
