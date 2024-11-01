#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param)
{
    int result = first_param * second_param;
    return result;
}

int main()
{
    int first_number{13}; // Statement
    int second_number{7};

    std::cout << "First number: " << first_number << std::endl;   // 13
    std::cout << "Second number: " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "summary : " << sum << std::endl; // 20

    sum = addNumbers(25, 7);
    std::cout << "summary : " << sum << std::endl; // 32

    sum = addNumbers(0, 10);
    std::cout << "summary : " << sum << std::endl; // 10

    std::cout << "sum : " << addNumbers(120, 130) << std::endl; // 250

    std::cout << "multiply : " << multiplyNumbers(7, 8) << std::endl; // 56

    return 0;
}