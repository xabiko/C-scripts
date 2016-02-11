#include<iostream>
using namespace std;

void fun(int &y) {
	y=20;
}

int main() {
	int x=10;
	fun(x);
	cout << "The New value of x is "<< x << endl;
	return 0;
}
