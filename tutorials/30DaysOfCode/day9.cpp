#include <iostream>  // std::cin

std::size_t factorial(const std::size_t n);

int main()
{
    // Read input
    std::size_t n;
    std::cin >> n;

    // Compute factorial
    const std::size_t output = factorial(n);

    // Print
    std::cout << output;

    return 0;
}

std::size_t factorial(const std::size_t n)
{
    if (n <= 1)
    {
        return 1U;
    }
    else
    {
        return n * factorial(n - 1U);
    }
}
