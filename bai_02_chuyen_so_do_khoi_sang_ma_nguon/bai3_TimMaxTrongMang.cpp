#include <iostream>
using namespace std;

int main() {
    int N, a[100], Max;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    Max = a[0];
    for (int i = 1; i < N; i++) {
        if (a[i] > Max) Max = a[i];
    }
    cout << "Max = " << Max;
    return 0;
}
