#include <iostream>
using namespace std;

int main(){
    int price, result = 0;
    int money[] = {500, 100, 50, 10, 5, 1};
    cin >> price;
    price = 1000 - price;
    
    for(int i =0; i < 6; ++i){
        result += price / money[i];
        price %= money[i];
    }
    cout << result;
}