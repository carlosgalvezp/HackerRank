#include <iostream>
#include <iomanip>  // std::setprecision
#include <limits>  // std::numeric_limits


using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int input1;
    double input2;
    string input3;

    // Read and save an integer, double, and String to your variables.
    std::cin >> input1;
    std::cin >> input2;

    // http://stackoverflow.com/questions/5739937/using-getlinecin-s-after-cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, input3);  // cin will get only the first word!

    // Print the sum of both integer variables on a new line.
    std::cout << i + input1 << std::endl;

    // Print the sum of the double variables on a new line.
    std::cout << std::setprecision(1) << std::fixed << d + input2 << std::endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout << s + input3;

    return 0;
}
