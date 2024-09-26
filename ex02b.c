#include <stdio.h>

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

    int tamanhoSemStrlen = calculaTamanho(str);

    printf("Tamanho (sem usar strlen): %d\n", tamanhoSemStrlen);

    return 0;
}
