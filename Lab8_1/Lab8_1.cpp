#include <iostream>
#include "MathLibrary.h"

int main()
{
    int a, b, c;
    std::cout << "Enter a(double): ";
    std::cin >> a;
    std::cout << "Enter b(double): ";
    std::cin >> b;
    std::cout << "Enter c(double): ";
    std::cin >> c;

    std::cout << "Surface area: " << CalcSurfaceArea(a, b, c) << std::endl;
    std::cout << "Space diagonal length: " << CalcSpaceDiagonalLength(a, b, c) << std::endl;

    // To check calculated: https://g.co/kgs/EbKJ1n

    return 0;
}
