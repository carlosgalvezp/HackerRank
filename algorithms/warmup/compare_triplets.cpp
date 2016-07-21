#include <iostream>
#include <vector>

const std::size_t ARRAY_SIZE = 3U;

int main()
{
    // Declare inputs
    std::vector<int> a(ARRAY_SIZE);
    std::vector<int> b(ARRAY_SIZE);

    // Read inputs
    for(std::size_t i = 0U; i < ARRAY_SIZE; ++i)
    {
        std::cin >> a[i];
    }

    for(std::size_t i = 0U; i < ARRAY_SIZE; ++i)
    {
        std::cin >> b[i];
    }

    // Compute outputs
    std::size_t a_result = 0U;
    std::size_t b_result = 0U;

    for(std::size_t i = 0U; i < ARRAY_SIZE; ++i)
    {
        if (a[i] > b[i])
        {
            ++a_result;
        }
        else if (b[i] > a[i])
        {
            ++b_result;
        }
    }

    // Print output
    std::cout << a_result << " " << b_result;
    return 0;
}
