#include <iostream>
#include <string>
using namespace std;

class Box {public:
	string label;
	double volume;
};

void printDetails(const Box &x) {
	cout << x.label <<"\n"<< x.volume <<"\n";
}

int main() {
	Box caja;
	caja.label="acliclas";
	caja.volume=4.2;

	printDetails(caja);
	return 0;
}
