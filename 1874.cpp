#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

vector<int> challenge;
stack<int> tmp;
vector<char> answer;

int main() {

    int length;
    cin >> length;
    for(int i = 0; i < length; i++) {
        int n;
        cin >> n;
        challenge.push_back(n);
    }

    int prev = 0;
    int j = 1;
    for(int i = 0; i < length; i++) {
        if (challenge[i] > prev) {
            while (j <= challenge[i]) {
                tmp.push(j);
                answer.push_back('+');
                j++;
            }
            tmp.pop();
            answer.push_back('-');
        } else {
            if (tmp.top() != challenge[i]) {
                cout << "NO" << "\n";
                return 0;
            }
            tmp.pop();
            answer.push_back('-');
        }
        prev = challenge[i];
    }

    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }
}
// 아 너무 오래걸렸다. 풀었으니까 괜챦아,,
