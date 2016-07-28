#include <iostream>  // std::cin
#include <vector>
#include <algorithm>  // std::min_element

int main()
{
    // Read inputs
    std::size_t n_sticks;
    std::cin >> n_sticks;

    std::vector<std::size_t> sticks(n_sticks);

    for (std::size_t i = 0U; i < n_sticks; ++i)
    {
        std::cin >> sticks[i];
    }

    while (sticks.size())
    {
        // Print size
        std::cout << sticks.size() << std::endl;

        // Get minimum
        const std::size_t min_length = *std::min_element(sticks.begin(), sticks.end());

        // Cut sticks
        std::vector<std::size_t> new_sticks;

        for (auto it = sticks.begin(); it != sticks.end(); ++it)
        {
            if (*it >= min_length)
            {
                *it -= min_length;

                if (*it > 0U)
                {
                    new_sticks.push_back(*it);
                }
            }
        }
        sticks = new_sticks;
    }

    return 0;
}
