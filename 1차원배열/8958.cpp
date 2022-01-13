#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    string ox;
    for(int i = 0; i < N; i++)
    {
        cin >> ox;
        
        int temp = 0;
        int sum = 0;
        for(int j = 0; j < ox.size(); j++)
        {
            if(ox[j] == 'O')
            {
                temp++;
                sum += temp;
            }
            else if(ox[j] == 'X')
            {
                temp = 0;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
