#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cout<<"enter a number:-";
    cin >> n;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "Reverse: " << rev;
    return 0;
}
