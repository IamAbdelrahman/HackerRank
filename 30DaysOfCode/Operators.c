/*
 * Complete the 'solve' function below.
 *
 * The function accepts following parameters:
 *  1. DOUBLE meal_cost
 *  2. INTEGER tip_percent
 *  3. INTEGER tax_percent
 */

void solve(double meal_cost, int tip_percent, int tax_percent) {
  double total_cost = 0.0;
  float tip = 0.0, tax = 0.0;
  tip = meal_cost * tip_percent / 100.0;
  tax = tax_percent * meal_cost / 100.0 ;
  total_cost = meal_cost + tip + tax;
  if ((int)total_cost > total_cost - 0.5) {
    printf("%d\n", (int)floor(total_cost));
  }
  else if ((int) total_cost < total_cost - 0.5) {
    printf("%d\n", (int) ceil(total_cost));
  }
}