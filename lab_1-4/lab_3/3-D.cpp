#include <iostream>

int main() {
    int N;
    std::cin >> N;

    while (N > 0) {
        int bit = N % 2; 
        std::cout << bit; 
        N /= 2; 
    }
    std::cout << std::endl;

    return 0;
}
