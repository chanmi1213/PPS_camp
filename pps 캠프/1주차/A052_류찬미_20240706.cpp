#include <iostream>
#include <string>
using namespace std;

int main(){
    int count, total = 0;
    int num;
    string str;
 
    cin >> num;
    for(int i = 0 ; i < num; i++){
        count = 0; 
        total = 0;
        cin >> str;
        for(int j = 0 ; j < str.size(); j++){
            if(str[j] == 'O'){
                total += ++count;
            }
            else{
                count = 0;
                continue;
            }
        }
        cout << total << endl;
    }
    return 0;
}