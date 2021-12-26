#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 10001

int d(int n) {
    int ret = n;
    while (n > 0) {
        ret = ret + (n%10);
        n = n/10;
    }
    return ret;
}

int main() {
    int not_selfnum[MAX] = {false};
    
    int n = 1;
    while (n < MAX) {
        if (d(n) < MAX) {
            not_selfnum[d(n)] = true;
        }
        n++;
    }
    
    for(int i = 1; i < MAX; i++) {
        if (not_selfnum[i] != true) {
            cout << i << "\n";
        }
    }
}
/* STL <algorithm> 
int d(int n) {
    int ret = n;
    while (n > 0) {
        ret = ret + (n%10);
        n = n/10;
    }
    return ret;
}

int main() {
    vector<int> not_selfnum;
    
    int n = 1;
    while (n < MAX) {
        not_selfnum.push_back(d(n));
        n++;
    }
    
    for(int i = 1; i < MAX; i++) {
        vector<int>::iterator iter = find(not_selfnum.begin(), not_selfnum.end(), i);
        if (iter == not_selfnum.end()) {
            cout << i << " ";
        }
    }
}
*/