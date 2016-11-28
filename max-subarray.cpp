#include<iostream>
#include<vector>
#include<limits>
#include<tuple>
using namespace std;

tuple<int, int, int> max_cross(vector<int>& vec, int p, int q, int r){
	
	int leftSum = numeric_limits<int>::min();
	int rightSum = numeric_limits<int>::min();
	int Sum;
	int maxleft;
	int maxright;

	Sum = 0;
	for(int i=q; i>=p; i--){
		Sum = Sum + vec[i];
		if(Sum > leftSum){
		 leftSum = Sum;
		 maxleft = i;
		}
	}

	Sum = 0;
	for(int j=q+1; j<=r; j++){
		Sum = Sum + vec[j];
		if(Sum > rightSum){
		 rightSum = Sum;
		 maxright = j;
		}
	}
	return make_tuple(maxleft,maxright,leftSum+rightSum);
}

tuple<int, int, int> max_subarr(vector<int>& vec, int p, int r){
	if(r==p){
		return make_tuple(p, r, vec[p]);
	}
	else{
		int q = p+(r-p)/2;
		int leftlow, lefthigh, leftsum;
		tie(leftlow, lefthigh, leftsum) = max_subarr(vec,p,q);
		int rightlow, righthigh, rightsum;
		tie(rightlow, righthigh, rightsum) = max_subarr(vec,q+1,r);
	 	int crosslow, crosshigh, crosssum;
		tie(crosslow, crosshigh, crosssum) = max_cross(vec,p,q,r);

		if(leftsum > rightsum && leftsum > crosssum){
		 return make_tuple(leftlow, lefthigh, leftsum);
		}
		else if(rightsum > leftsum && rightsum > crosssum){
		 return make_tuple(rightlow, righthigh, rightsum);
		}
		else{
		 return make_tuple(crosslow, crosshigh, crosssum);
		}
	}
}

int main(){

	int  n;

	cout << "Input the number of integers to be subsetted:" << endl;
	cin  >> n;

	vector<int> v(n);

	cout << "Intput desired elements:" << endl;
	for(auto& i : v){
		cin >> i;
	}
	
	int i, j, total;
	cout << "Maximum subarray:" << endl;
	tie(i, j, total) = max_subarr(v,0,v.size()-1);
	cout << "i: " << i << "\n"
	     << "j: " << j << "\n"
	     << "total: " << total << endl;
}
