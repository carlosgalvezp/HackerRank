#include <iostream>

int main()
{
    // Declare inputs
    int x1;
    int v1;
    int x2;
    int v2;

    // Read inputs
    std::cin >> x1;
    std::cin >> v1;
    std::cin >> x2;
    std::cin >> v2;

    // Compute crossing time considering a linear intersection problem
    int t = -1;

    if ((v1 != v2) && ((x2 - x1) % (v1 - v2) == 0))
    {
        t = (x2 - x1) / (v1 - v2);
    }
    else
    {
        if (x2 == x1)
        {
            t = 0;
        }
    }

    // If time > 0, then they do cross
    if (t >= 0)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}
