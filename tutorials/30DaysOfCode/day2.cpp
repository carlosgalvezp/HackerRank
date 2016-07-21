#include <iostream>  // std::cin
#include <cmath>  // std::round

int main()
{
    // Declare variables
    double meal_cost;
    double tip_percent;
    double tax_percent;

    // Read inputs
    std::cin >> meal_cost;
    std::cin >> tip_percent;
    std::cin >> tax_percent;

    // Compute cost
    const double cost = meal_cost * (1. + 0.01*(tip_percent + tax_percent));

    // Output
    std::cout << "The total meal cost is " << std::round(cost) << " dollars.";
    return 0;
}
