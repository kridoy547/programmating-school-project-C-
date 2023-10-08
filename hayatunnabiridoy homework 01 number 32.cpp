#include<iostream>

int main() {
  // number of pairs of children's socks that grandma knits per week
  int n_socks_children = 3;
  // Number of pairs of women's socks that grandmother knits per week
  int n_socks_women = 1;
  // Number of pairs of men's socks that grandmother knits per week
  int n_socks_men = 1;
  // Price of one pair of socks
  int price_socks = 100;
  // Number of weeks in a month
  int n_weeks = 4;

  // The number of socks that grandma knits in a month
  int n_socks_total = n_socks_children * n_weeks + n_socks_women + n_socks_men;

  // Grandmother's profit for the month
  int profit = n_socks_total * price_socks;

  // Grandma's profit withdrawal
  std::cout << "Granny's profit for the month: " << profit << std::endl;

  return 0;
}