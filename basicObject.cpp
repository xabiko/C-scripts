#include<iostream>
using namespace std;

class penumbra{
 private:
	 int 	entero;
 public:
	 void 	setEntero(int n){entero = n;}
	 int 	getEntero(){return entero;}		
};

int main(){
	int n;
	penumbra objeto;
	cin >> n;
	objeto.setEntero(n);
	cout << "Listo: " << objeto.getEntero() << endl;
	return 0;
}
