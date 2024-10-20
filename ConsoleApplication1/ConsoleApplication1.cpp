#include <iostream>
#include <cmath> // для sin() и log()

using namespace std;

int main() {
    double x, y;
    cout << "x: ";
    cin >> x;

    if (x < 0) {
        y = sin(pow(x, 2)); // sin(x^2)
    }
    else {
        y = log(x + 1); // ln(x + 1)
    }

    cout << "y: " << y << endl;

    return 0;
}
