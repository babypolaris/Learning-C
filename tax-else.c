#include <stdio.h>

main() {
    float cost, tax, luxury, total;
    
    printf("Enter the cost of the item: €");
    scanf("%f", &cost);
    tax = cost * 0.135;
    
    if(cost > 50.0) {
        luxury = cost * 0.065;
    } else {
        puts("There is no luxury tax on this item");
        luxury = 0.0;
    }

    total = cost + tax + luxury;
    printf("Total: €%0.2f\n",total);
    return(0);
}
