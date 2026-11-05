#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, ucln, bcnn;
    cin >> a >> b;
    x = a;
    y = b;
    while (x != 0 && y != 0) {
        if (x > y) x = x % y;
        else y = y % x;
    }
    ucln = x + y;
    bcnn = a / ucln * b;
    cout << "BCNN = " << bcnn;
    return 0;
}
