#include <iostream>
using namespace std;

struct Func {
    int x;
    int y;
};

void judFunc(Func f) {
    if (f.x > 0 && f.y > 0) {
        cout << "1\n";
    } else if (f.x < 0 && f.y > 0) {
        cout << "2\n";
    } else if (f.x < 0 && f.y < 0) {
        cout << "3\n";
    } else if (f.x > 0 && f.y < 0) {
        cout << "4\n";
    }
}

void result() {
    int x, y;
    cin >> x >> y;
    
    Func f = {x, y};
    judFunc(f);
}

int main() {
    result();
    return 0;
}
