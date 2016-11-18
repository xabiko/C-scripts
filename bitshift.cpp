#include<iostream>
#include<bitset>
using namespace std;

int main(){

	int n;
	cin >> n;
	string binary;

	while(binary!=bitset<8>(0).to_string()){
		
		binary= bitset<8>(n).to_string();
		cout << binary << "\n";
		
		n = n>>1;
		
		//unsigned long decimalshift = bitset<8>(binary).to_ulong();
		
		cout<< n <<"\n";
		
	}
} 
