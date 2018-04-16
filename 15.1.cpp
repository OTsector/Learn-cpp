#include <iostream>
using namespace std;

int main() {
	
	int array[10]; // თუ ცვლადს აქვს "[ ]" ეს ნიშნავს იმას, რომ ცვლადი არის მასივი

	for ( int y = 0; y <= 10; y++ ) { // "y" ცვლადის შექმნა და მნიშვნელობების მინიჭება
		array[ y ] = y; // "y" ცვლადის მნიშვნელობის შეტანა "array[10]" ცვლადში
		cout << array[ y ] << " "; // მასივის გამოტანა
	}

	cout << "\n";

	return 0;
}