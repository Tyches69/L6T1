#include <iostream>

using namespace std;

int orderTotal(int dishes, int dishPrice, int coupons) {
    int total = dishes * dishPrice - coupons * 5;

    if (total < 0) {
        return 0;
    }

    return total;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < 0 || b < 0 || c < 0) {
        cout << "Error";
        return 1;
    }

    int total = orderTotal(a, b, c);
    cout << total;

    return 0;
}