#include <iostream>
using namespace std;

int main() {
	
	int i;

	cin >> i;

	if ( i > 5 ) // "if" ფუნქციის გამოყენებით იმართება პროცესის ჭეშმარიტი დებულება. "()"_ში იწერება მოქმედება(ები) რომლის ჭეშმარიტების შემთხვევაშიც განხორციელდება ფუნქცია.
	{
		cout << "i მეტია ხუთზე\n";
	}
	else if ( i == 5 ) { // "else if" გამოიყენება პირველი ჭეშმარიტი დებულების არ დამტიკცების შემთხვევაში შემდგომი დებულების შემოსატანად
		cout << "i ტოლია ხუთის\n";
	}
	else { // "else" ფუნქციის გამოყენებით იმართება პროცესის მცდარი დებულება
		cout << "i ნაკლებია ხუთზე\n";
	}

	return 0;
}

/*

ფუნქციებში შესაძლებელია "{}"_ის გამოტოვება, თუ მასში შეტანილი ფუნქციის რაოდენობა არის ერთის ტოლი. მაგალითად:

	if ( i > 5 ) 
		cout << "i მეტია ხუთზე\n";

	else if ( i == 5 )
		cout << "i ტოლია ხუთის\n";
	else
		cout << "i ნაკლებია ხუთზე\n";

ასევე შესაძლებელია ფუნქციების ერთხაზოვანი ჩაწერაც. მაგალითად:

	if ( i > 5 ) cout << "i მეტია ხუთზე\n";

	else if ( i == 5 ) cout << "i ტოლია ხუთის\n";

	else cout << "i ნაკლებია ხუთზე\n";

*/