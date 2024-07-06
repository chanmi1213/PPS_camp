#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int square = 0;
    int sum = 0;
    int result = 0;
    for(int i =0; i < 5; i++){
        cin >> num;
        square = num * num;
        sum += square;
    }
    result = sum % 10;
    cout << result;
}