#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verificaSenha(char senha[]) {
    int temNumero = 0, temMaiuscula = 0, temMinuscula = 0;
    int tamanho = strlen(senha);

    if (tamanho < 8 || tamanho > 100) {
        return 0; 
    }

    for (int i = 0; i < tamanho; i++) {
        if (isdigit(senha[i])) {
            temNumero = 1;
        }
        if (isupper(senha[i])) {
            temMaiuscula = 1;
        }
        if (islower(senha[i])) {
            temMinuscula = 1;
        }
    }

    if (temNumero && temMaiuscula && temMinuscula) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char senha[101]; 

    printf("Digite a senha: ");
    scanf("%100s", senha); 

    if (verificaSenha(senha)) {
        printf("Senha válida!\n");
    } else {
        printf("Senha inválida. Certifique-se de que tenha:\n");
        printf("- No mínimo 8 caracteres\n");
        printf("- Pelo menos um número\n");
        printf("- Pelo menos uma letra maiúscula\n");
        printf("- Pelo menos uma letra minúscula\n");
        printf("- No máximo 100 caracteres\n");
    }

    return 0;
}
