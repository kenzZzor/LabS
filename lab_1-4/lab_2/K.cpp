#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    int x1_new = std::abs(x1 - x2);
    int y1_new = std::abs(y1 - y2);

    if ((x1_new == 1 && y1_new == 2) || (x1_new == 2 && y1_new == 1)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
