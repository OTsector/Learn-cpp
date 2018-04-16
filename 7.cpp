#include <iostream>
using namespace std;

int main() {
	
	/*
	ფუნქცია "bool" გამოიყენება ლოგიკური მნიშვნელობებისთვის (ჭეშმარიტი/მცდარი).
	მისი ჭეშმარიტება/მცდარობა აღიქმება ან "true"/"false" ის გამოყენებით
	ან რიცხვების სახით, სადაც 0 აღიქმება როგორც მცდარი და სხვა მნიშვნელობა როგორც შეჭმარიტი დებულება.
	*/
	bool b; // "bool" ფუნქციის მისადაგება "b" ცვლადთან

	b = true; // "b" ცვლადის ჭეშმარიტობის მინიჭებისთვის

		if (b) cout << "შესრულდა\n"; // თუ "b" ჭეშმარიტია მოხდეს დებულება

	b = false;

		if (b)  cout << "არ შესრულდა\n";

	/*
	მაგალითში ნაჩვენებია: რიცხვითი დებულების ჭეშმარიტობის საკითხი
	*/
	bool c; 
	c = 1;

		if (c) cout << "შესრულდა\n";

	c = 0;

		if (c)  cout << "არ შესრულდა\n";

	return 0;
}