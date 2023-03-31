
#include <string>

using namespace std;
class Abonent {
private:
	string fullname;
	string address;
	string num;

public:
	static int counter;
	Abonent()
		: fullname(" "), address(" "), num(" ") {
	};
	Abonent(string fullname, string address, string num)
		: fullname(fullname), address(address), num(num) {
		counter++;
	}
	string getName() {
		return fullname;
	}
	string getAddress() {
		return address;
	}
	string getNum() {
		return num;
	}
};