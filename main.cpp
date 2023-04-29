#include "main.h"

int main(){
    Fraction a = create_fraction(1, 2);
    Fraction b = create_fraction(3, 4);
    Fraction c = create_fraction(5, 6);
    Fraction frac2 = multiply_fraction_pair(a, b);
    Fraction frac2 = multiply_fraction_pair(a, c);
    std::cout << frac1.fraction.first << std::endl;
    std::cout << frac1.fraction.second << std::endl;
     std::cout << frac2.fraction.first << std::endl;
    std::cout << frac2.fraction.second << std::endl;
   
}
