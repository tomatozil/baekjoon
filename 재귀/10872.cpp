#include <iostream>
using namespace std;

int factorial(int n, int q)
{
    if(n == 0 || n == 1)
        return q;
    q *= n;
    return factorial(n - 1, q);
}

int main()
{
    int N;
    cin >> N;
    
    int answer;
    answer = factorial(N, 1);
    cout << answer;
    
    return 0;
}
