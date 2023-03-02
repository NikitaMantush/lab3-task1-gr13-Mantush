#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, len, count = 0;

    printf("Введите строку: ");
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wunused-result"
    fgets(str, sizeof(str), stdin);
    #pragma GCC diagnostic pop


    len = strlen(str);

    // Поиск последнего слова
    for (i = len - 2; i >= 0; i--) {
        if (str[i] == ' ') {
            break;
        }
    }

    // Поиск предпоследнего слова
    for (j = i - 1; j >= 0; j--) {
        if (str[j] == ' ') {
            count++;
            if (count == 1) {
                i = j;
            } else if (count == 2) {
                break;
            }
        }
    }

    // Вывод предпоследнего слова
    for (j = i + 1; j < len; j++) {
        if (str[j] == ' ') {
            break;
        }
        printf("%c", str[j]);
    }

    return 0;
}
