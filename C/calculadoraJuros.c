#include <stdio.h>

int main() {
    double investimento, investimentoMensal, juros, meses;

    printf("Valor que deseja investir? \n");
    scanf("%lf", &investimento);

    printf("Valor que deseja investir mensalmente? \n");
    scanf("%lf", &investimentoMensal);

    printf("Qual a porcentagem de juros ao mês? \n");
    scanf("%lf", &juros);

    printf("Por quantos meses deseja investir? \n");
    scanf("%lf", &meses);

    double total, totalInvestido;
    total = investimento;
    totalInvestido = investimento;

    for (size_t i = 0; i < meses; i++) {
        total += total * (juros / 100);
        total += investimentoMensal;
        totalInvestido += investimentoMensal;
    }

    printf("Investimento inicial: %lf \n", investimento);
    printf("Juros ao mês: %lf \n", juros);
    printf("Quantidade de meses: %lf \n", meses);
    printf("Total ao fim do período: %lf \n", total);
    printf("Total investido durante o período: %lf \n", totalInvestido);

    return 1;
}