#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> S;
    
    int K;
    cin >> K;
    
    int num;
    while (K--) {
        cin >> num;
        if (num == 0) 
            S.pop();
        else
            S.push(num);
    }

    int answer = 0;
    while (!S.empty()) {
        answer += S.top();
        S.pop();
    }
    cout << answer;
}
/* 위 while문에서, K-- 으로 간단하게 조건문 작성하는거 배움!
원래 밑 while문 부분에 0 to S.size()로 for문 돌렸었는데 그게 문제였다. */ 