#include <iostream>
#include <unordered_set>

const std::size_t n_tests = 5U;
const std::size_t n_min = 3U;
const std::size_t n_max = 200U;
const int a_i_max = 1E3;

int randi(int a, int b);
void printTest(const std::size_t n_students);

int main()
{
    std::cout << n_tests << std::endl;

    std::unordered_set<std::size_t> n_used;

    for (std::size_t i = 0U; i < n_tests; ++i)
    {
        // Get n at random
        std::size_t n;
        do
        {
            n = randi(n_min, n_max);
        }
        while (n_used.find(n) != n_used.end());

        printTest(n);

        n_used.insert(n);
    }
    return 0;
}

int randi(int a, int b)
{
    return a + (std::rand() % (b - a + 1));
}

void printTest(const std::size_t n_students)
{
    // Print n and k
    std::cout << n_students << " " << randi(1U, n_students) << std::endl;

    // Print compulsory arrival times
    std::cout << 0U << " " << randi(0U, a_i_max) << " " << -randi(0U, n_max)
              << " ";

    // Print random other times
    for (std::size_t i = 3U; i < n_students; ++i)
    {
        std::cout << randi(-a_i_max, a_i_max) << " ";
    }

    std::cout << std::endl;
}
