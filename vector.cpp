#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>vec;
	vec.push_back(40);
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(60);
	cout<<"after pushback the values are:"<<vec.size()<<endl;
vec.pop_back();
cout<<vec.back()<<endl;
return 0;
}
