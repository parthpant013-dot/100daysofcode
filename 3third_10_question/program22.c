// Write a program to find profit or loss percentage given cost price and selling price

#include <stdio.h>

int main() {
    int sp, cp;
    float profit, loss, lossp, profitp;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%d %d", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        profitp = (profit / cp) * 100;
        printf("Profit %.0f%%\n", profitp);
    }
    else if (sp < cp) {
        loss = cp - sp;
        lossp = (loss / cp) * 100;
        printf("Loss %.0f%%\n", lossp);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
