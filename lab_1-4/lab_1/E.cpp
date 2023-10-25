#include <iostream>

int main() {
    int v, t;
    std::cin >> v >> t;
    int position = (t * v) % 109; 
    if (position < 0) {
        position += 109; 
    }

    std::cout << position << std::endl;

    return 0;
}
