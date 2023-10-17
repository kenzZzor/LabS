#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    int C_kn = 1;

    for (int i = 1; i <= k; i++) {
        C_kn *= (n - i + 1);
        C_kn /= i;
    }

    std::cout << C_kn << std::endl;

    return 0;
}
