#include <stdio.h>

main() {
    int row, col;
    puts("Multiplication table");
    for(row = 1; row <= 10; row++) {
        for(col = 1; col <= 10; col++) {
            printf("%5d", row * col);
        }
        puts("\n");
    }
}
