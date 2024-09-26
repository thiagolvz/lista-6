#include <stdio.h>
#include <string.h>

int calculaTamanho(char str[]) {
    int tamanho = 0;

    while (str[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}

int main() {
    char str[101]; 

    printf("Digite uma string: ");
    scanf("%100s", str); 

    int tamanhoComStrlen = strlen(str);

    int tamanhoSemStrlen = calculaTamanho(str);

    printf("Tamanho (usando strlen): %d\n", tamanhoComStrlen);
    printf("Tamanho (sem usar strlen): %d\n", tamanhoSemStrlen);

    if (tamanhoComStrlen == tamanhoSemStrlen) {
        printf("Os resultados são iguais!\n");
    } else {
        printf("Os resultados são diferentes!\n");
    }

    return 0;
}
