#include <iostream>
#include <string>
#include <ctime>
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

				clock_t begin = clock();
	printDetails(caja);
				clock_t end = clock();
				double elapsed_secs = double(end - begin);
	cout << elapsed_secs;
	return 0;
}
