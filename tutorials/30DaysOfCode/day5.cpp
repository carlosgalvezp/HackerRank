#include <iostream>  // std::cin

int main()
{
    // Declare variables
    unsigned int n;

    // Read inputs
    std::cin >> n;

    // Print output
    for (std::size_t i = 1U; i <= 10U; ++i)
    {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
    return 0;
}
