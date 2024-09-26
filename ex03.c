#include <stdio.h>
#include <string.h>

int main() {
    char str[101]; 
    int tamanho;

    printf("Digite uma string: ");
    scanf("%100s", str); 

    tamanho = strlen(str);

    printf("String de trás para frente: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
