#include <iostream>
using namespace std;

int han_number(int N) {
    if (N < 100) return N;
    int cnt = 99;

    for(int i = 100; i <= N; i++) {
        
        // 자리수로 arr 사이즈 정하기 
        int i_copy = i;
        int size = 0;
        while (i_copy > 0) {
            i_copy /= 10;
            size++;
        }
        int arr[size];
        /* (i++ 마다 실행된다는 점이 걸린다 매우 비효율적,,
        그렇지만 for문 들어오기 전에 해버리면 N이 네자리수이고 i가 세자리수일 때 꼬여버림) */
        
        i_copy = i;
        for (int j = 0; j < size; j++) {
            arr[j] = i_copy % 10;
            i_copy /= 10;
        }
        
        bool flag = true; 
        for (int j = 0; j < size - 2; j++) {
            flag = (arr[j] - arr[j + 1]) == (arr[j + 1] - arr[j + 2]);
        }
        if (flag == true) {cnt++;}   
    }
    return cnt;
}

int main() {  
    int N = 1000;
    // cin >> N;
    
    int result = han_number(N);
    printf("%d\n", result);
}