#include <iostream>
using namespace std;

int main()
{
    int a;
    int remainder_arr[10];
    for(int i = 0; i < 10; i++)
    {
        cin >> a;
        remainder_arr[i] = a % 42;
    }

    int temp_arr[42] = {0, };

    int cnt = 0;
    for(int i = 0; i < 42; i++)
        for(int j = 0; j < 10; j++)
        {
            if ( i == remainder_arr[j] && temp_arr[i] == 0)
            {
                temp_arr[i] = 1;
                cnt++;
            }
        }
    cout << cnt;
    return 0;
}
