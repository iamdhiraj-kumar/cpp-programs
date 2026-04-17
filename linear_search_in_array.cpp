#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
     cout << "Enter no. of element : ";
    cin >> n;
cout << "Enter array element : ";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Not Found";

    return 0;
}
