#include <iostream>

// Compute the sum of 2 ints read from stdin
int main()
{
    // Declare inputs
    std::size_t array_size;
    std::size_t array_i;

    // Read input
    std::cin >> array_size;

    // Compute output
    std::size_t output = 0U;
    for(std::size_t i = 0U; i < array_size; ++i)
    {
        std::cin >> array_i;
        output += array_i;
    }

    // Print output
    std::cout << output;
    return 0;
}
