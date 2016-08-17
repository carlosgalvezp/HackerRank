#include <iostream>
#include <vector>
#include <utility>

void processTest(const std::size_t n, const std::size_t k);

int main()
{
    // Read input
    std::size_t n_tests;
    std::cin >> n_tests;

    std::vector<std::pair<std::size_t, std::size_t>> test_cases(n_tests);

    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        std::cin >> test_cases[i].first >> test_cases[i].second;
    }

    // Compute output
    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        processTest(test_cases[i].first, test_cases[i].second);
    }

    return 0;
}

void processTest(const std::size_t n, const std::size_t k)
{
    std::size_t max_val = 0U;
    for (std::size_t a = 1U; a <= n; ++a)
    {
        for (std::size_t b = a + 1U; b <= n; ++b)
        {
            const std::size_t and_val = a & b;

            if (and_val < k && and_val > max_val)
            {
                max_val = and_val;
            }
        }
    }
    std::cout << max_val << std::endl;
}
