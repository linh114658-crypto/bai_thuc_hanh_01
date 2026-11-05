#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 2) {
        cout << "N khong la so nguyen to";
        return 0;
    }
    for (int i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            cout << "N khong la so nguyen to";
            return 0;
        }
    }
    cout << "N la so nguyen to";
    return 0;
}
