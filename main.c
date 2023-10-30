#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "");

  float valorInvestido = 0;
  int periodo = 0;
  float percentualRendimento = 0;

  printf("Digite o valor investido\n");
  scanf("%f", &valorInvestido);

  printf("Digite a quantidade de meses do investimento\n");
  scanf("%d", &periodo);

  printf("Digite o percentual de rendimento ao mes\n");
  scanf("%f", &percentualRendimento);

  int index;
  float percentRate = percentualRendimento / 100;
  float total = valorInvestido;

  for(index = 1; index <= periodo; index += 1) {
    float currYield = total * percentRate;
    total += currYield;
    printf("Depois do mês <%d> terá = R$<%f>\n", index, total);
  }

  printf("\n\nValor do saldo final R$<%f>\n", total);

  float taxPercentage = 0.15;
  float totalYield = total - valorInvestido;
  float tax = totalYield * taxPercentage;
  printf("\nValor Saldo Final - Imposto Retido na Fonte = R$<%f>\n", total - tax);
}