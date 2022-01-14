#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> s;
vector<int> opposite;
vector<int> answer;

int main() {
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        int n;
        cin >> n;
        s.push(n);
    }
    while(!s.empty()) {
        opposite.push_back(s.top());
        s.pop();
    }
    // 입력 값을 반대로 담아줬다. 왼 -> 오 로 진행하며 값을 찾는게 편해서

    for(int i = 0; i < N - 1; i++) {
        int cnt = i+1; // opposite[i] 다음 값부터 새기 위한 cnt
        int *receive_laser = &opposite[cnt]; // opposite[i] 다음 값의 포인터
        while (*receive_laser != '\0'){ // opposite이 끝날 때까지
            if (opposite[i] < *receive_laser) { // opposite[i]보다 큰 수
                break ;
            }
            cnt++;
            receive_laser++;
        }
        answer.push_back(N - cnt); 
    }
    answer.push_back(0);
    
    for(int i = N - 1; i >= 0; i--) {
        cout << answer[i] << " ";
    }
}
