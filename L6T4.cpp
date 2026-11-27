#include<iostream>

using namespace std;

int max(int a, int b) {

	if (a >= b) return a;
	return b;
}
int serviceBill(int amount, int percent = 10, int minTip = 0){

	if (percent < 0 || percent > 100 || amount < 0 || minTip < 0 || minTip > 100) return -1;

	return max(amount*percent / 100, minTip) + amount;
}

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	cout << serviceBill(a, b, c);
	return 0;
}