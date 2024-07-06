#include <iostream>
using namespace std;

string x;
int arr[26] = {0,};
int max1 = 0;
char c = '?';

int main(){
    cin >> x;
    for(char &c : x){
        if('a' <= c)
        c = c - 32;
        arr[c - 'A']++;
    }
    for(int i = 0; i <= 'Z'- 'A'; i++){
        if(arr[i] > max1){
            max1 = arr[i];
            c = i + 'A';
        }else if(arr[i] == max1){
            c = '?';
        }
    }
    cout << c;
}