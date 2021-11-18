#include <iostream>
using namespace std;

int fibonacci(int n, int front, int back)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return back;
    return fibonacci(n - 1, back, front + back);
}

int main()
{
    int n;
    cin >> n;
    
    int answer;
    answer = fibonacci(n, 0, 1);
    cout << answer;
    
    return 0;
}
