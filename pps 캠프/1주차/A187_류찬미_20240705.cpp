#include <iostream>
using namespace std;

struct Year {
    int year;
};

const char* judLeap(Year y) {
    if (y.year % 400 == 0) {
        return "1";
    } else if (y.year % 100 == 0) {
        return "0";
    } else if (y.year % 4 == 0) {
        return "1";
    } else {
        return "0";
    }
}

void leap() {
    int year;
    cin >> year;
    
    Year y = {year};
    cout << judLeap(y) << endl;
}

int main() {
    leap();
    return 0;
}
