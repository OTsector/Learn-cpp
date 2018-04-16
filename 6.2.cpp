#include <iostream>
using namespace std;

int main() {

	char c = 'A'; // "char" ნოტიფიკატორი გამოიყენება სიმბოლოებთან სამუშაოდ. მასში სიმბოლოს შეტანა ხდება " ' "_ის  გამოყენებით
	cout << "c=" << c << "\n";

	for (char letter = 'A'; letter<= 'Z'; letter++) { // სიმბოლოების გამოტანა A_დან Z_მდე
		cout << letter << " ";
	}
	cout << "\n";

	// ქვემოთ მაგალითში მიესადაგება სომბოლოს რიცხვითი მნიშვნელობა
	for (char letter = 'A'; letter<= 'Z'; letter++) {
		cout << letter << "=" << (int) letter << "\n"; // "(int)" როგორ რიცხვითი მნიშვნელობის გამოტანა
 	}
 	/*
	რადგან A დან Z მდე სიმბოლოების რიცხვითი მნიშვნელობა ზრდადია, სწორედ ამის დამსახურებაა მისი ფუნქციური ზრდადობა არსებულ კოდში
 	*/

	return 0;
}