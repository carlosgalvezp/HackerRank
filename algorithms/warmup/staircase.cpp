#include <iostream>

// Prints a staircase with  # and spaces
int main()
{
    // Declare inputs
    std::size_t n;

    // Read inputs
    std::cin >> n;

    // Print output
    for (std::size_t i = 0U; i < n; ++i)
    {
        for (std::size_t j = 0U; j < n; ++j)
        {
            if (j >= (n - i - 1U))
            {
                std::cout << "#";
            }
            else
            {
                std::cout << " ";
            }
        }
        if (i != n - 1U)
        {
            std::cout << std::endl;
        }
    }

    return 0;
}
