#include <iostream>
#include <vector>

// Compute the sum of 2 ints read from stdin
int main()
{
    // Declare inputs
    std::size_t n;

    // Read inputs
    std::cin >> n;

    // Read matrix
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    for(std::size_t i = 0U; i < n; ++i)
    {
        for(std::size_t j = 0U; j < n; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

    // Compute output
    int sum_a = 0;
    int sum_b = 0;

    for(std::size_t i = 0U; i < n; ++i)
    {
        sum_a += matrix[i][i];
        sum_b += matrix[n-i-1U][i];
    }

    const int output = std::abs(sum_a - sum_b);

    // Print
    std::cout << output;

    return 0;
}
