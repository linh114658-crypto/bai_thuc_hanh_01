#include <iostream>
#include <cmath>
using namespace std;

void ptb1(float b, float c) {
    if (b == 0) {
        if (c == 0) cout << "Vo so nghiem";
        else cout << "Vo nghiem";
    } else {
        cout << "x = " << -c / b;
    }
}

int main() {
    float a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    if (a == 0) {
        ptb1(b, c);
        return 0;
    }
    delta = b * b - 4 * a * c;
    if (delta < 0) {
        cout << "Vo nghiem";
    } else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "x1 = x2 = " << x1;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << ", x2 = " << x2;
    }
    return 0;
}
