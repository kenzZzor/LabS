#include <iostream>

int main() {
    int queenX, queenY, targetX, targetY;
    std::cin >> queenX >> queenY >> targetX >> targetY; 
    if (queenX == targetX || queenY == targetY ||
        abs(queenX - targetX) == abs(queenY - targetY)) {
        std::cout << "YES" << std::endl; 
    }
    else {
        std::cout << "NO" << std::endl; 
    }

    return 0;
}
