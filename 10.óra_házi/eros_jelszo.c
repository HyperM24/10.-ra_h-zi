#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LENGTH 12
#define NUM_LOWER 26
#define NUM_UPPER 26
#define NUM_DIGIT 10
#define NUM_SPECIAL 4

char spec_kar[] = {'.', ',', ';', '\''};

char generate_Lower() {
    return 'a' + rand() % NUM_LOWER;
}

char generate_Upper() {
    return 'A' + rand() % NUM_UPPER;
}

char generate_Digit() {
    return '0' + rand() % NUM_DIGIT;
}

char generate_Special() {
    return spec_kar[rand() % NUM_SPECIAL];
}

int main() {
    srand(time(NULL));

    char jelszo[MAX_LENGTH + 1];
    int hossz = 0;

    jelszo[hossz++] = generate_Lower();
    jelszo[hossz++] = generate_Upper();
    jelszo[hossz++] = generate_Digit();
    jelszo[hossz++] = generate_Special();

    while (hossz < MAX_LENGTH) {
        char kov_char;
        switch (rand() % 4) {
            case 0:
                kov_char = generate_Lower();
                break;
            case 1:
                kov_char = generate_Upper();
                break;
            case 2:
                kov_char = generate_Digit();
                break;
            case 3:
                kov_char = generate_Special();
                break;
        }

        if (kov_char != jelszo[hossz - 1] && kov_char != jelszo[hossz - 2] &&
            kov_char != jelszo[hossz - 3] && kov_char != jelszo[hossz - 4]) {
            jelszo[hossz++] = kov_char;
        }
    }

    for (int i = 0; i < hossz - 1; i++) {
        int j = i + rand() % (hossz - i);
        char temp = jelszo[i];
        jelszo[i] = jelszo[j];
        jelszo[j] = temp;
    }

    jelszo[hossz] = '\0';

    printf("%s\n", jelszo);

    return 0;
}
