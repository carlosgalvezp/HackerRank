#include <iostream>
#include <algorithm>

int main()
{
    std::size_t left, right;
    std::cin >> left >> right;

    std::size_t max_val = 0U;

    for (std::size_t a = left; a <= right; ++a)
    {
        for (std::size_t b = a + 1U; b <= right; ++b)
        {
            std::size_t xor_val = a ^ b;
            max_val = std::max(xor_val, max_val);
        }
    }

    std::cout << max_val;
    return 0;
}
