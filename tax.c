#include <stdio.h>

main() {
    float cost, tax, luxury, total;
    luxury = 0.0;
    
    printf("Enter the cost of the item: €");
    scanf("%f", &cost);
    tax = cost * 0.135;
    
    if(cost > 50.0) {
        luxury = cost * 0.065;
    }

    total = cost + tax + luxury;
    printf("Total: €%0.2f\n",total);
}
