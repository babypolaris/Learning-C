#include <stdio.h>

main() {
    puts("Hello there");
    puts("What is your name?");
    pause();
    puts("Nice to meet you");
    return(0);
}

pause() {
    int move_on;
    printf("Press enter to continue...");
    move_on=getchar();
    return(0);
}
