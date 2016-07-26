#include <iostream>  // std::cin
#include <cmath>  // std::round

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

void computeTest()
{
    // Read input
    std::size_t n_students;
    std::size_t cancellation_th;

    std::cin >> n_students;
    std::cin >> cancellation_th;

    // Read arrival times and store number of late students
    std::size_t n_late = 0U;
    bool cancelled = false;

    for (std::size_t i = 0U; i < n_students; ++i)
    {
        int time;
        std::cin >> time;

        if (time > 0)
        {
            ++n_late;
        }

        if ((n_students - n_late) < cancellation_th)
        {
            cancelled = true;
        }
    }

    // Print result
    std::cout << (cancelled ? "YES" : "NO") << std::endl;
}
