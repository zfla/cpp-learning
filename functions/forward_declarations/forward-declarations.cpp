#include <iostream>

int doMath(int first, int second, int third, int fourth);

int main() 
{
    std::cout << doMath(1, 2, 3, 4) << std::endl;
    return 0;
}

int doMath(int first, int second, int third, int fourth) 
{
    return first + second * third / fourth;
}
