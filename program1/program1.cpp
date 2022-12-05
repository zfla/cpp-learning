#include <iostream>

int main()
{
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    int result{ x * 2};
    std::cout << "Double that number is: " << result << std::endl;

    return 0;
}
