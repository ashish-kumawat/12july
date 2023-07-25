#include<stdio.h>

int main() {
    int rows = 5;
    int cols = 4;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= cols; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

