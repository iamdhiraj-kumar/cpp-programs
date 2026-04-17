#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout<<"enter any integer no.:-";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    cout << "Factorial: " << fact;

    return 0;
}
