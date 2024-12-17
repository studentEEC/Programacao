#include <stdio.h>

char *FirstVogal(char *s) {
    char *vogais = "aeiouAEIOU";
    for (int i = 0; i< strlen(s); i++) {
        for (int j = 0; vogais[j] != '\0'; j++) {
            if (s[i] == vogais[j]) {
                return &s[i];
            }
        }
    }
    return NULL;
}

int main() {
    char word[100];

    printf("Insira uma palavra: ");
    scanf("%99s", word);

    char *vogal = FirstVogal(word);
    if (vogal) {
        printf("A primeira vogal ocorre no endereço: %p\n", (void*)vogal);
        printf("A vogal é: %c\n", *vogal);
    } else {
        printf("Não foram encontradas vogais.\n");
    }

    return 0;
}
