#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(const std::vector<int>& elements)
        : elements(elements),
          maximumDifference(0)
    {}

    void computeDifference()
    {
        // Get min
        const int min_val = *std::min_element(elements.begin(), elements.end());

        // Get max
        const int max_val = *std::max_element(elements.begin(), elements.end());

        // Return abs difference
        maximumDifference = std::abs(max_val - min_val);
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
