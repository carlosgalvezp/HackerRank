#include <iostream>  // std::cin
#include <vector>

int main()
{
    // Declare variables
    std::size_t n;
    std::size_t k;

    // Read input
    std::cin >> n;
    std::cin >> k;

    // Declare array
    std::vector<std::size_t> array(n);

    // Read array
    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cin >> array[i];
    }

    // Compute pairs
    std::size_t n_pairs = 0U;

    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        for (std::size_t j = 0U; j < i; ++j)
        {
            if ( (array[i] + array[j]) % k == 0)
            {
                ++n_pairs;
            }
        }
    }

    // Print
    std::cout << n_pairs;
    return 0;
}
