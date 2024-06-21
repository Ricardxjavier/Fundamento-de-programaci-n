#include <stdio.h>
#include <string.h>

void reverseWords(char *str) {
    int length = strlen(str);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (i != length) {
                printf(" ");
            }
            start = i + 1;
        }
    }
}

int main() {
    char input[100];
    printf("Ingrese una cadena de caracteres: ");
    scanf("%[^\n]", input);

    printf("La cadena con las palabras invertidas es:\n");
    reverseWords(input);

    return 0;
}
