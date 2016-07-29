#include <iostream>  // std::cin
#include <bitset>
#include <algorithm>  // std::max

int main()
{
    // Read input as a bitset
    std::size_t n_i;
    std::cin >> n_i;

    std::bitset<64> n(n_i);

    // Convert to string and count number of consecutive 1's
    const std::string n_s = n.to_string();

    std::size_t max_n_ones = 0U;
    std::size_t n_ones = 0U;

    for (std::size_t i = 0U; i < n_s.size(); ++i)
    {
        if (n_s[i] == '1')
        {
            ++n_ones;
        }
        else
        {
            max_n_ones = std::max(max_n_ones, n_ones);
            n_ones = 0U;
        }
    }
    // In case we never found a 0 at the end of the string
    max_n_ones = std::max(max_n_ones, n_ones);

    // Output
    std::cout << max_n_ones;

    return 0;
}
