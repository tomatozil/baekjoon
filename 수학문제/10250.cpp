#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int h, w, n;
        cin >> h >> w >> n;
        
        int floor, room;
        if (n % h == 0) {
            floor = h;
            room = n / h;
        } else {
            floor = n % h;
            room = n / h + 1;
        }
        cout << floor * 100 + room << "\n";
    }
}
