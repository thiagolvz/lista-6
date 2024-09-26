#include <stdio.h>
#include <string.h>

int main() {
    char str[101];

    printf("Digite uma string: ");
    scanf("%100s", str); 

    int tamanhoComStrlen = strlen(str);

    printf("Tamanho (usando strlen): %d\n", tamanhoComStrlen);

    return 0;
}
