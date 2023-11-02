#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "");

  double valorInvestido = 0;
  int periodo = 0;
  double percentualRendimento = 0;

  printf("Digite o valor investido: ");
  scanf("%lf", &valorInvestido);

  printf("Digite a quantidade de meses do investimento: ");
  scanf("%d", &periodo);

  printf("Digite o percentual de rendimento ao mes: ");
  scanf("%lf", &percentualRendimento);

  printf("\n");

  double percentRate = percentualRendimento / 100;
  double total = valorInvestido;
  double totalYield;
  double currYield;

  for (int index = 1; index <= periodo; index += 1)
  {
    currYield = total * percentRate;
    totalYield += currYield;
    total += currYield;
    printf("Depois do mês %d terá = R$%.2lf\n", index, total);
  }

  printf("\nValor do saldo final R$%.2lf\n", total);

  double taxPercentage = 0.15;
  double tax = totalYield * taxPercentage;

  printf("Valor Saldo Final - Imposto Retido na Fonte = R$%.2lf\n", total - tax);
}