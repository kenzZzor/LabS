#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int result = 1; 

    for (int i = 0; i < n; i++) {
        result *= 2;
    }

    std::cout << result << std::endl;

    return 0;
}
