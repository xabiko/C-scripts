#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void merge_(vector<int>& vec, int p, int q, int r){

	int n1 = q-p+1;
	int n2 = r-q;
	int left[n1],right[n2];

	for(int i=0; i<n1; i++){
		left[i] = vec[p+i];
	}
	for(int i=0; i<n2; i++){
		right[i] = vec[q+i+1];
	}
	left[n1]=numeric_limits<int>::max();
	right[n2]=numeric_limits<int>::max();

	int i=0, j=0;
	for(int k=p; k<=r; k++){
		if(left[i]<=right[j]){
		vec[k] = left[i];
		i++;
		}
		else{
		vec[k] = right[j];
		j++;
		}
	}
}

void merge_sort(vector<int>& vec, int p, int r){
	if(p<r){
		int q = p+(r-p)/2;
		merge_sort(vec,p,q);
		merge_sort(vec,q+1,r);
		merge_(vec,p,q,r);
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
	merge_sort(v,0,v.size()-1);
	for(auto& i : v){
		cout << i << ",";
	}
}
