#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    char *last_word = NULL;
    char *second_last_word = NULL;

    // Разделитель слов - пробел
    char *token = strtok(str, " ");

    while (token != NULL) {
        second_last_word = last_word;
        last_word = token;
        token = strtok(NULL, " ");
    }

    if (second_last_word != NULL) {
        printf("Предпоследнее слово: %s\n", second_last_word);
    } else {
        printf("В строке меньше двух слов.\n");
    }

    return 0;
}
