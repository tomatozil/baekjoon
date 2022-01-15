#include <iostream>
using namespace std;

int main() {
    int a,b,v;
    cin >> a >> b >> v;
    
    if((v-b) % (a-b) == 0) {
        cout << (v-b) / (a-b);
    } else {
        cout << (v-b) / (a-b) + 1;
    }
}

/* 시간초과 코드
int main() {
    int a,b,v;
    cin >> a >> b >> v;
    int cnt = 1;
    
    while (cnt * (a - b) < v - b) {
        cnt++;
    }
    cout << cnt;
}
*/
