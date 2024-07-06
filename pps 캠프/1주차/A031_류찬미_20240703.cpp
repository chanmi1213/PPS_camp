#include <iostream>
using namespace std;

int main(){
    int a ,b;
    cin >> a >> b;
    int num = 0;
    num = (a - 1) + ((b - 1) * a);
    cout << num << "\n"; 
    return 0;
}