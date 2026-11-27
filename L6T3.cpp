#include <iostream>
using namespace std;
int drinkCost(int cups, int price) {

	if (price < 0 || cups < 0) return -1;

	return cups * price;
}

int drinkCost(int cups, int price, bool large) {

	if (price < 0 || cups < 0) return -1;

	if (large) price += 2;

	return cups * price;

}

int main() {

	int a, b;

	bool c;

	cin >> a >> b;

	cout << "True\False:";
	cin >> c;

	cout << drinkCost(a, b) << "\n" << drinkCost(a, b, c);

	return 0;
}
