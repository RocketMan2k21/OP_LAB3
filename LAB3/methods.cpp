#include "header.h"

#include <string>
#include <iostream>

using namespace std;


int get_sum_of_digits(string phone_number) {
	int sum = 0;
	for (int i = 0; i < phone_number.length(); i++) {
		if (isdigit(phone_number[i])) {
			sum += phone_number[i] - '0';
		}
	}
	return sum;
}

Abonent getAbonentWithMaxSum(Abonent data[])
{
	Abonent bestAbonent;
	int bestSum = 0;
	for (int i = 0; i < Abonent::counter; i++) {
		string num = data[i].getNum();
		int sum = get_sum_of_digits(num);
		if (sum > bestSum) {
			bestSum = sum;
			bestAbonent = data[i];
		}
	}
	cout << "Sum: " << bestSum << endl;
	cout << "Fullname: " << bestAbonent.getName() << "\n";
	cout << "Address: " << bestAbonent.getAddress() << "\n";
	cout << "Phone number: " << bestAbonent.getNum() << "\n\n";
	return bestAbonent;
}

void createAbonents(Abonent abonents[], int MAX_ABONENTS) {

	int count = 0;

	while (count < MAX_ABONENTS) {

		string fullname, address, num;
		cout << "Enter the fullname of the Abonent (or type 'quit' to exit): ";
		getline(cin, fullname);
		if (fullname == "quit") break;
		cout << "Enter the address of the Abonent: ";
		getline(cin, address);
		cout << "Enter the phone number of the Abonent: ";
		getline(cin, num);


		Abonent ab(fullname, address, num);
		abonents[count] = ab;
		count++;
	}

	cout << "\nList of Abonents:\n";
	for (int i = 0; i < count; i++) {
		cout << "Abonent " << i + 1 << ":\n";
		cout << "Fullname: " << abonents[i].getName() << "\n";
		cout << "Address: " << abonents[i].getAddress() << "\n";
		cout << "Phone number: " << abonents[i].getNum() << "\n\n";
	}

}