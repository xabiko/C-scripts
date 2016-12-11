#include<iostream>
#include<vector>

using namespace std;

void insertion_sort(vector<int>& vector){

	for(int j=1; j<=vector.size()-1; j+=1){

		auto key = vector[j];
		int i   = j - 1;
		while(i>=0 && vector[i]>key){
			vector[i+1] = vector[i];
			i-=1;
		}

	vector[i+1] = key;
	}
}

int main(){

	int  n;

	cout << "Input the number of integers to be sorted:" << endl;
	cin  >> n;

	vector<int> v(n);

	cout << "Intput desired elements:" << endl;
	for(auto& i : v){
		cin >> i;
	}
	cout << "Ordered elements:" << endl;
	insertion_sort(v);
	for(auto& i : v){
		cout << i << ",";
	}
}
