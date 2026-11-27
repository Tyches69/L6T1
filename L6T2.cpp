#include <iostream>

using namespace std;

bool redeemPoints(int& points, int cost) {

	if (points >= cost && cost > 0) {
		points -= cost;

		return 1;
	}

	return 0;

}

int main() {

	int a, b;

	cin >> a >> b;

	if (a < 0) {
		cout << "Error";
		return 1;
	}

	if (redeemPoints(a, b)) {
		cout << a;
	}
	else {
		cout << "Failed";
	}

	return 0;
}
