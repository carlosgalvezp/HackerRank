#include <iostream>  // std::cin
#include <vector>  // std::round
#include <string>

template <class T>
void printArray(const std::vector<T>& array);

int main()
{
    std::vector<int> vInt{1, 2, 3};
    std::vector<std::string> vString{"Hello", "World"};

    printArray<int>(vInt);
    printArray<std::string>(vString);

    return 0;
}

template <class T>
void printArray(const std::vector<T>& array)
{
    for (std::size_t i = 0U; i < array.size(); ++i)
    {
        std::cout << array[i] << std::endl;
    }
}
