#include <stdio.h>

int main() {
    char str[200], result[200];
    fgets(str, sizeof(str), stdin);

    int j = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            result[j] = str[i];
       j++; 
            }
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}