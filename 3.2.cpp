#include <iostream>
using namespace std;

int main() {

	int i1, i2;

	cout << "შემოიტანეთ i1: "; // ვიზუალური გაფორმებისთვის
	cin >> i1; // ცვლადის შეტანა "cin" ფუნქციის გამოყენებით

	cout << "შემოიტანეთ i2: ";
	cin >> i2;

	cout << i1 << "+"<< i2 << "=";
	cout <<  i1 + i2 << "\n";

	cout << i1 << "-"<< i2 << "=";
	cout <<  i1 - i2 << "\n";

	cout << i1 << "*"<< i2 << "=";
	cout << i1 * i2 << "\n";

	cout << i1 << "/"<< i2 << "=";
	cout << i1/ i2 << "\n";

	return 0;
}