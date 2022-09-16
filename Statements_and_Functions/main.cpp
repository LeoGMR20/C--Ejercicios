#include <iostream>

int addNumbers(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

int main()
{
    int first_number {13};
    int second_number {7};

    std:: cout << "First number: " << first_number << std::endl;
    std:: cout << "Second number: " << second_number << std::endl;

    std:: cout << "Sumatory of the numbers: " << addNumbers(first_number,second_number) << std::endl;
    
    return 0;
}