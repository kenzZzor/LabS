#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int stepen_2 = 1;

    for (int i = 0; i <= n; i++) {
        sum += stepen_2;
        stepen_2 *= 2;
    }

    std::cout << sum;

    return 0;
}
