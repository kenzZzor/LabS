#include <iostream>

int main() {
    int N;
    std::cin >> N;

    double sum = 1.0;
    double peremennaya = 1.0;

    for (int i = 1; i <= N; i++) {
        peremennaya /= i;
        sum += peremennaya;
    }

    std::cout << sum << std::endl;

    return 0;
}
