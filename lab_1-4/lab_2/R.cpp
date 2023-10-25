#include <iostream>

int main() {
    int k, m, n;
    std::cin >> k >> m >> n;
    int time_per_cutlet = 2 * m;  
    int total_time = 0;
    while (n > 0) {
        n -= k;  
        total_time += time_per_cutlet;  
    }
    std::cout << total_time << std::endl;
    return 0;
}
