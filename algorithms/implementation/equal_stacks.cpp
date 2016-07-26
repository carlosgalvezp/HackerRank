#include <iostream>  // std::cin

void computeTest();

int main()
{
    // Read number of tests
    std::size_t n_tests;
    std::cin >> n_tests;

    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        computeTest();
    }

    return 0;
}
