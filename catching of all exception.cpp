#include <iostream>
using namespace std;

int main() {
    try {
        int n;
        cout<<"enter any integer:";
        cin >> n;

        if (n == 0)
            throw n;
        else if (n < 0)
            throw "Negative error";

        cout << "Number: " << n;
    }
    catch (...) {
        cout << "Exception caught!";
    }

    return 0;
}
