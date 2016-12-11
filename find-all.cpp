#include<string>
#include<vector>
#include<iostream>

using namespace std;

template<class T>
using Value_type = typename T::value_type;

template<typename C, typename V>

vector<Value_type<C>*> find_all(C& c, V v)
{
	vector<Value_type<C>*> res;
	for(auto& x:c)
	    if(x==v)
		res.push_back(&x);
	    return res;
}

int main()
{
	string m{"Mary had a little lamb"};
	for(const auto p:find_all(m,'a'))
	    if(*p!='a')
		cerr << "string bug!\n";
}
