#include <iostream>
using namespace std;

int main() {

	int i1, i2, i3;
	i1 = 3;
	i2 = 5;

	cout << i1 << "+"<< i2 << "="; // ტექსტის ვიზუალური გაფორმებისთვის
	i3 = i1 + i2;
	cout << i3 << "\n";

	cout << i1 << "-"<< i2 << "="; 
	i3 = i1 - i2;
	cout << i3 << "\n";

	cout << i1 << "*"<< i2 << "="; 
	i3 = i1 * i2;
	cout << i3 << "\n";

	cout << i1 << "/"<< i2 << "="; 
	i3 = i1/ i2;
	cout << i3 << "\n";

	cout << "\n";
	
	// "i3" ცვლადის გამოყენების გარეშე ბეჭდვისთვის იხილეთ კოდი:

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
