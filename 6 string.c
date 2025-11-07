#include <stdio.h>
#include <ctype.h> // para tolower()

void toMinuscula(char str[]) {
for (int i = 0; str[i] != '\0'; i++) {
str[i] = tolower(str[i]);
}
}
int main() {
char texto[100];
printf("Digite uma string: ");
fgets(texto, sizeof(texto), stdin);
toMinuscula(texto);
printf("String em minúsculas: %s", texto);
return 0;
}