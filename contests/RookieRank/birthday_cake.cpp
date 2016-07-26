#include <iostream>  // std::cin
#include <vector>
#include <algorithm>  // std::max

int main()
{
    // Read N
    std::size_t n_candles;
    std::cin >> n_candles;

    // Read candle height
    std::vector<std::size_t> candle_height(n_candles);

    std::size_t max_height = 0U;
    for(std::size_t i = 0U; i < n_candles; ++i)
    {
        std::cin >> candle_height[i];
        max_height = std::max(max_height, candle_height[i]);
    }

    // Compute output
    std::size_t n_tallest = 0U;

    for(std::size_t i = 0U; i < n_candles; ++i)
    {
        if (candle_height[i] == max_height)
        {
            ++n_tallest;
        }
    }

    std::cout << n_tallest;

    return 0;
}
