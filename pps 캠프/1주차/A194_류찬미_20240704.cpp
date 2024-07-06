#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int d = 0;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b >> c;
        d = b + c;
        cout << "Case #" << i + 1 << ": " << b << " + " << c << " = " << d << "\n";
    }
    return 0;
}