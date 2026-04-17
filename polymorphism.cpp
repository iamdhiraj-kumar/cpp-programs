#include <iostream>
using namespace std;
class Shape {
public:
    void area(int l, int b) {
        cout << "Area of Rectangle: " << l * b << endl;
    }

    void area(float base, float height) {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};
int main() {
    Shape s;
    s.area(10, 5);        // Rectangle
    s.area(6.0f, 4.0f);  // Triangle

    
    return 0;
}
