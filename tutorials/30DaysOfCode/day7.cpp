#include <iostream>  // std::cin
#include <vector>

int main()
{
    // Declare variables
    std::size_t n;

    // Read inputs
    std::cin >> n;

    // Read array
    std::vector<std::size_t> array(n);

    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cin >> array[i];
    }

    // Print reversed
    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cout << array[array.size() - i - 1U] << " ";
    }

    return 0;
}
