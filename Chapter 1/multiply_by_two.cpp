#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int x{ };
    std::cin >> x;

    std::cout << "Double that is: " << x * 2 << "\n";
    std::cout << "Triple that is: " << x * 3 << "\n";

    return 0;
}