#include <iostream>
using namespace std;

int main() {
	
	int j;

	while ( true ) { // "while ( true )" ნიშნავს სადაც არის ჭეშმარიტი. მუდმივობის მინიჭება "true"_ს გამოყენებით
		cin >> j;
		cout << "j არის: " << j << "\n";
		if ( j == 0 ) { // თუ "j" შეესატყვისება "0"_ს მოხდეს:
			break; // "break" შეაჩერებს "while" ფუნქციას
		}
	}

	return 0;
}