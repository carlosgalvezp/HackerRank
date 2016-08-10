#include <iostream>  // std::cin
#include <vector>

std::size_t bubbleSort(std::vector<std::size_t>& array);

int main()
{
    // Read input vector
    std::size_t n;
    std::cin >> n;

    std::vector<std::size_t> array(n);

    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cin >> array[i];
    }

    // Sort array
    const std::size_t n_swaps = bubbleSort(array);

    // Output
    std::cout << "Array is sorted in " << n_swaps << " swaps." << std::endl;
    std::cout << "First Element: " << array[0U] << std::endl;
    std::cout << "Last Element: " << array[array.size() - 1U];

    return 0;
}

std::size_t bubbleSort(std::vector<std::size_t> &array)
{
    std::size_t n_total_swaps = 0U;

    // We need to iterate at most array.size() times. This avoids a while() loop
    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::size_t n_swaps = 0U;

        for (std::size_t j = 0U; j < array.size() - 1U; ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
                ++n_swaps;
            }
        }

        if (n_swaps == 0)
        {
            break;
        }

        n_total_swaps += n_swaps;
    }

    return n_total_swaps;
}


