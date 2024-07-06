#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    int n;
    int arr[10] = {0,0,0,0,0,0,0,0,0,0};

    cin >> x;
    cin >> y;
    cin >> z;

    n = x * y * z;
    while(n> 0)
    {
        arr[n%10] += 1;
        n /= 10;
    }

    for(int i = 0; i<10;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
