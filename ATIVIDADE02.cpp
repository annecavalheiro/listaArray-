#include <stdio.h>
#include <string.h>
int main() {
char a[200], b[200];
printf("Digite o primeiro nome completo: ");
fgets(a, sizeof(a), stdin);
a[strcspn(a, "\n")] = '\0';
printf("Digite o segundo nome completo: ");
fgets(b, sizeof(b), stdin);
b[strcspn(b, "\n")] = '\0';
if (strcmp(a, b) == 0) printf("Nomes iguais.\n");
else printf("Nomes diferentes.\n");
return 0;
}