#include <iostream>

int main()
{
    int a, b, sum;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    sum = a + b;

    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
    return 0;
}
