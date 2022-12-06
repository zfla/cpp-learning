#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int x{};
    
    std::cout << "Enter a number to be doubled: ";
    std::cin >> x;

    std::cout << x << " * 2 = " << doubleNumber(x) << std::endl;

    return 0;
}
