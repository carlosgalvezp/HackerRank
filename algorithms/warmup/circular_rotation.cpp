#include <iostream>
#include <vector>

// Circularly rotate an array
int main()
{
    // Declare inputs
    std::size_t n, k, q;

    // Read inputs
    std::cin >> n >> k >> q;

    // Read array and place the data in the rotated position
    std::vector<std::size_t> array(n);

    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cin >> array[(i + k) % n];
    }

    // Read queries and print
    std::size_t m_i;
    for (std::size_t i = 0U; i < q; ++i)
    {
        std::cin >> m_i;
        std::cout << array[m_i];
        if (i != (q - 1U))
        {
            std::cout << std::endl;
        }
    }

    return 0;
}
