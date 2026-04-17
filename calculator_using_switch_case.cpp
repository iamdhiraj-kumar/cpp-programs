#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Sum = " << a + b; break;
        case 2: cout << "Difference = " << a - b; break;
        case 3: cout << "Product = " << a * b; break;
        case 4: 
            if (b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Cannot divide by zero";
            break;
        default: cout << "Invalid choice";
    }
    return 0;
}
