#include <iostream>
int main() 
{
    int x{};
    int y{};

    std::cout << "Enter an integer: ";
    std::cin >> x; 

    std::cout << "Enter another integer: ";
    std::cin >> y;
    
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " + " << y << " = " << x + y << std::endl;

    return 0;
}
