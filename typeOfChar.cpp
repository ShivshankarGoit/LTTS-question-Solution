#include <stdio.h>
#include <ctype.h>

int findCharacterType(char ch) {
    if (isupper(ch)) {
        return 1;  // Uppercase letter
    } else if (islower(ch)) {
        return 2;  // Lowercase letter
    } else if (isdigit(ch)) {
        return 3;  // Digit
    } else if (isprint(ch)) {
        return 4;  // Other printable symbol
    } else {
        return 5;  // Non-printable symbol
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    int type = findCharacterType(ch);

    switch (type) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Other printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }

    return 0;
}
