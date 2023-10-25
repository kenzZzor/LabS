#include <iostream>

int main() {
    int k;
    std::cin >> k;

    int n = 1;
    while (n * n <= k) {
        if (n * n == k) {
            std::cout << "YES" << std::endl;
            return 0; 
        }
        n++;
    }

    std::cout << "NO" << std::endl;

    return 0;
}

