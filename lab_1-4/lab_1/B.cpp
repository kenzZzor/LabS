#include <iostream>

int main() {
    int number;
    std::cin >> number;
    int next_number = number + 1;
    int previous_number = number - 1; 
    std::cout << "The next number for the number " << number << " is " << next_number << "." << std::endl;
    std::cout << "The previous number for the number " << number << " is " << previous_number << "." << std::endl;

    return 0;
}
