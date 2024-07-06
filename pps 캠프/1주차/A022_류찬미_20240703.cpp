#include <iostream>
using namespace std;


int main(){
    int num1;
    int Y = 0;
    int M = 0;
    
    cin >> num1;
    for(int i = 0; i < num1; i++){
        int num2;
        cin >> num2;
        Y += (num2 / 30 + 1) * 10;
        M += (num2 / 60 + 1) * 15;
    }
    if(Y == M){
        cout << "Y M " << Y << "\n";
    }else if(Y > M){
        cout << "M " << M << "\n";
    }else{
        cout << "Y " << Y << "\n";
    }
    return 0;
}