#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next, i = 1;
    cout<<"enter no. of terms:-";
    cin >> n;

    while (i <= n) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    return 0;
}

