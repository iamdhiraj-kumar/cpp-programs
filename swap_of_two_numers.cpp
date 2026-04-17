#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout<<"enter any two number";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap: " << a <<" "<< b;
    return 0;
}
