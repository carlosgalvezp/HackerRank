#include <iostream>  // std::cin
#include <algorithm>  // std::max
#include <limits>

template<std::size_t N>
int computeHourGlassSum(const int (&array)[N][N],
                        const std::size_t i,
                        const std::size_t j);

int main()
{
    // Read inputs
    const std::size_t N = 6U;

    int array[N][N];

    for (std::size_t i = 0U; i < N; ++i)
    {
        for (std::size_t j = 0U; j < N; ++j)
        {
            std::cin >> array[i][j];
        }
    }

    // Compute output
    int max_hourglass_sum = std::numeric_limits<int>::min();
    for (std::size_t i = 1U; i <= 4U; ++i)
    {
        for (std::size_t j = 1U; j <= 4U; ++j)
        {
            max_hourglass_sum = std::max(max_hourglass_sum,
                                         computeHourGlassSum(array, i, j));
        }
    }

    // Print
    std::cout << max_hourglass_sum;
    return 0;
}

template<std::size_t N>
int computeHourGlassSum(const int (&array)[N][N],
                        const std::size_t i,
                        const std::size_t j)
{
    int sum = 0;

    // Add horizontal lines
    for (std::size_t k = j - 1U; k <= j + 1U; ++k)
    {
        sum += array[i - 1U][k];
        sum += array[i + 1U][k];
    }

    // Add center
    sum += array[i][j];

    return sum;
}

