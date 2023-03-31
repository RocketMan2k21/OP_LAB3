#pragma once
#include <string>
class Abonent {
private:
	std::string fullname;
	std::string address;
	std::string num;

public:
	static int counter;
	Abonent()
		: fullname(" "), address(" "), num(" ") {
	};
	Abonent(std::string fullname, std::string address, std::string num)
		: fullname(fullname), address(address), num(num) {
		counter++;
	}
	std::string getName() {
		return fullname;
	}
	std::string getAddress() {
		return address;
	}
	std::string getNum() {
		return num;
	}
};
int get_sum_of_digits(std::string phone_number); 

Abonent getAbonentWithMaxSum(Abonent data[]);

void createAbonents(Abonent abonents[], int MAX_ABONENTS);

	