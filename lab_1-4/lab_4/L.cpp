#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    int heights[N];
    for (int i = 0; i < N; i++) {
        cin >> heights[i]; 
    }

    int PetyaHeight;
    cin >> PetyaHeight; 

    int position = N + 1; 

    for (int i = 0; i < N; i++) {
        if (PetyaHeight > heights[i]) {
            position = i + 1; 
            break;
        }
    }

    cout << position << endl; 

    return 0;
}

