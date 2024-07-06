#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int max = 0;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        cin >> num1 >> num2;
        sum -= num1;
        sum += num2;
        if(sum > max){
            max = sum;
        }
    }
    cout << max << '\n';

    return 0;
}
