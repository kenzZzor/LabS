#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K; 
    int remainder = K % N; 
    std::cout << remainder << std::endl; 
    return 0;
}
