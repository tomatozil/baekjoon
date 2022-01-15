#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int standard = 1;
    int cnt = 1;
    
    while (1) {
        if (standard >= N) {
            cout << cnt;
            return 0;
        }
        standard += 6 * cnt;
        cnt++;
    }
}
