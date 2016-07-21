#include <iostream>

// Compute the sum of 2 ints read from stdin
int main()
{
    // Declare inputs
    int a;
    int b;

    // Read inputs
    std::cin >> a;
    std::cin >> b;

    // Compute output
    const int output = a + b;

    // Print
    std::cout << output;
    return 0;
}
