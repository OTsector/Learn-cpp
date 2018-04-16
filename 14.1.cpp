#include <iostream>
using namespace std;

int main() {
	
	for ( int i = 0; i <= 10; i++ ) {

		if ( i == 5 )
			continue; // "continue" ფუნქცია ნიშნავს: რეაგირება მოახდინოს გაგრძელებით
		if ( i <= 2 || i >= 8 )
			continue;
		cout << i << " ";
	}

	cout << "\n";

// კოდი გამოტოვებს: 0	1	2	5	8	9	10

	return 0;
}