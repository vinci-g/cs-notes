#include <stdio.h>

int main(void)
{
  int number_shares;
  float commission, rival_commission, value, price_per_share;

  printf("Enter number of shares: ");
  scanf("%d", &number_shares);

  printf("Enter price per share: ");
  scanf("%f", &price_per_share);

  value = number_shares * price_per_share;
  if (value < 2500.00f) {
    commission = 30.0f + 0.017f * value;
  } else if (value < 6250.00f) {
    commission = 56.0f + 0.0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.0f + 0.0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.0f + 0.0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.0f + 0.0011f * value;
  } else
    commission = 255.0f + 0.0009f * value;

  if (number_shares < 2000) {
    rival_commission = 33.0f + (0.03 * number_shares);
  } else if (number_shares >= 2000) {
    rival_commission = 33.0f + (0.03 * number_shares);
  }

  if (commission < 39.0f)
    commission = 39.00f;

  printf("Commission: %.2f\n", commission);
  printf("Rival Commission: %.2f\n", rival_commission);

  return 0;
}

