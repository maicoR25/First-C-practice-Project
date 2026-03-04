#include <iostream>
#include <cmath>

int main() {
    double triangleSide1;
    double triangleSide2;
    double hypotenuse;

    std::cout << "Please enter the first side: ";    
    std::cin >> triangleSide1;
    std::cout << "Please enter the second side: ";    
    std::cin >> triangleSide2;

    hypotenuse = (sqrt(pow(triangleSide1, 2) + pow(triangleSide2, 2)));
    
    std::cout << "The hypootenuse is: " << hypotenuse;

    return 0;
}