#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    
    int digit = A * B * C;
    //자릿수 구하기
    int cnt_digit = 0;
    int temp = digit;
    while (temp > 0)
    {
        temp /= 10;
        cnt_digit++;
    }
    //자릿수 크기의 배열을 채우기
    int arr[cnt_digit];
    for(int i = 0; i < cnt_digit; i++)
    {
        arr[i] = digit % 10;
        digit /= 10;
    }
    //개수 세기
    int times;
    for(int i = 0; i < 10; i++)
    {
        times = 0;
        for(int j = 0; j < cnt_digit; j++)
        {
            if (arr[j] == i)
                times++;
        }
        cout << times << "\n";
    }
    return 0;
}

