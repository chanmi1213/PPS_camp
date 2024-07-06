#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000001];

int main(){
    int x;
    cin >> x;
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for(int i = 2; i <= x; i++){
        arr[i] = arr[i - 1] + 1;
        if(i % 2 == 0){
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
        if(i % 3 == 0){
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
    }
    cout << arr[x] << endl;
    return 0;
}