#include <iostream>

int main()
{
    // Declare inputs
    std::size_t n_numbers;
    int number_i;

    // Declare outputs
    int result = 0;

    // Read array size
    std::cin >> n_numbers;

    for(std::size_t i = 0U; i < n_numbers; ++i)
    {
        std::cin >> number_i;
        result += number_i;
    }

    // Print output
    std::cout << result;

    return 0;
}
