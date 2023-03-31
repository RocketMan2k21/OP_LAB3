#include <iostream>
#include <string>
#include "header.h"
using namespace std;

int Abonent::counter;
int main() {
	const int MAX_ABONENTS = 100; 
	Abonent abonents[MAX_ABONENTS];
	createAbonents(abonents, MAX_ABONENTS);
	getAbonentWithMaxSum(abonents);

}