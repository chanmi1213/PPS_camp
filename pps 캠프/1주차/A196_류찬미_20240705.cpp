#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    int num2;
    int num3[100];
    
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> num3[i];
    }
    
    cin >> num2;
    
    for(int j = 0; j < num; j++) {
        if(num2 == num3[j]) {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}
