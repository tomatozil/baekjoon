#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int C;
    cin >> C;
    while (C > 0)
    {
        int N;
        cin >> N;
        
        vector<int> grade_arr;
        float avg = 0;
        for(int i = 0; i < N; i++)
        {
            int grade;
            cin >> grade;
            grade_arr.push_back(grade);
            avg += grade;
        }
        avg /= N;
        
        int over_avg = 0;
        for(int i = 0; i < N; i++)
        {
            if(grade_arr[i] > avg)
                over_avg++;
        }
        cout << fixed;
        cout.precision(3);
        cout << (float)over_avg / (float)N * 100 << '%' << '\n';
        
        C--;
    }
    return 0;
}
