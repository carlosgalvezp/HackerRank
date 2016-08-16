#include <iostream>
#include <vector>

bool isPrime(const std::size_t n);

int main()
{
    // Read input
    std::size_t n_tests;
    std::cin >> n_tests;

    std::vector<std::size_t> tests(n_tests);
    for (std::size_t i = 0U; i < tests.size(); ++i)
    {
        std::cin >> tests[i];
    }

    // Compute outputs
    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        std::cout << (isPrime(tests[i]) ? "Prime" : "Not prime") << std::endl;
    }
    return 0;
}

bool isPrime(const std::size_t n)
{
    if (n == 1U)
    {
        return false;
    }

    for (std::size_t i = 2U; i*i < n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
