#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    if (m > n) {
        cout << -1 << endl;
        return 0;
    }
    int moves = (n + 1) / 2;
    
    
    while (moves % m != 0) {
        moves++;
    }
    
    cout << moves << endl;
    return 0;
}

