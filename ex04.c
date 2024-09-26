#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ehPalindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalnum(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalnum(str[fim])) {
            fim--;
        }

        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0; 
        }

        inicio++;
        fim--;
    }

    return 1; 
}

int main() {
    char str[201]; 

    printf("Digite uma string: ");
    fgets(str, 201, stdin); 

    if (ehPalindromo(str)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
