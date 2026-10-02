#include <stdio.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int freq[26] = {0};
    char first_repeating = '\0';

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                first_repeating = str[i];
                break;
            }
        }
    }

    if (first_repeating != '\0') {
        printf("%c\n", first_repeating);
    } else {
        printf("None\n");
    }

    return 0;
}