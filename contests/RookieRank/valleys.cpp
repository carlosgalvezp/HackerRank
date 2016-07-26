#include <iostream>  // std::cin
#include <vector>
#include <algorithm>  // std::max

int main()
{
    // Read N
    std::size_t n_steps;
    std::cin >> n_steps;

    // Read steps and compute number of mountains
    std::size_t n_valleys= 0U;
    int current_height = 0;

    char step;

    bool on_valley = false;

    for(std::size_t i = 0U; i < n_steps; ++i)
    {
        std::cin >> step;

        if (step == 'U')
        {
            ++current_height;
            if (on_valley && current_height == 0)
            {
                ++n_valleys;
                on_valley = false;
            }
        }
        else
        {
            if (current_height == 0)
            {
                on_valley = true;
            }
            --current_height;
        }
    }

    // Print output
    std::cout << n_valleys;

    return 0;
}
