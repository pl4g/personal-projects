#include <stdio.h>

int main() {
    double investiment, monthlyInvestiment, fees, months;

    printf("How much do you want to invest initially? \n");
    scanf("%lf", &investiment);

    printf("How much do you want to invest monthly? \n");
    scanf("%lf", &monthlyInvestiment);

    printf("What's the fees percentage for each month? \n");
    scanf("%lf", &fees);

    printf("For how many months do you want to invest in? \n");
    scanf("%lf", &months);

    double total, totalInvested;
    total = investiment;
    totalInvested = investiment;

    for (size_t i = 0; i < months; i++) {
        total += total * (fees / 100);
        total += monthlyInvestiment;
        totalInvested += monthlyInvestiment;
    }

    printf("Initial investiment: %lf \n", investiment);
    printf("Montly fees: %lf \n", fees);
    printf("How many months the investiment has run: %lf \n", months);
    printf("Total earned by the end of the period: %lf \n", total);
    printf("Total invested during the period: %lf \n", totalInvested);

    return 1;
}
