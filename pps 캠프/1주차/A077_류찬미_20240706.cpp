#include <iostream>
#include <algorithm>
using namespace std;
int answer[5], a[8], sum;
int main() {
    for (int i = 0; i < 8; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
    {
        int max = -1;
        int index = 0;
        for (int j = 0; j < 8; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                index = j;
            }
        }
        sum += max;
        a[index] = -1;
        answer[i] = index+1;
    }
    sort(answer, answer + 5);
    cout << sum << '\n';
    for (int i = 0; i < 5; i++)
        cout << answer[i] << ' ';
}