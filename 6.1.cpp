#include <iostream>
using namespace std;

int main() {
	int i1 = -50;
	unsigned int i2 = -50; // "unsigned" ნოტიფიკატორი გამოიყენება მთელი დადებითი რიცხვებისთვის
	unsigned int i3 = 50; // "unsigned int" მნიშვნელობის დიაპაზონი გაიზრდება
	unsigned i4 = 50; // "unsigned" ნოტიფიკატორი თავის თავში ასახავს "int" ფუნქციასაც
	unsigned int i5 = 50.957; // თუ რიცხვი არის ირაციონალური დადებითი ფუნქცია გამოიტანს მხოლოდ დადებით რიცხვს
	cout << "i1=" << i1 << "\n" << "i2=" << i2 << "\n" << "i3=" << i3 << "\n" << "i4=" << i4 << "\n" << "i5=" << i5 << "\n";

	return 0;
}