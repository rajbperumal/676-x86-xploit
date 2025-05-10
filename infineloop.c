#include <stdio.h>

int main() {
    int i = 0;

    for (;;) {
        printf("i = %d\n", i);
        i++;

        if (i >= 5) {
            break;  // Exit the loop when i reaches 5
        }
    }

    printf("Loop ended.\n");
    return 0;
}

