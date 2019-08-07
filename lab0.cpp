#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cout<<"enter number of elements to be inserted\n";
	int n;
	cin>>n;
	cout<<"enter the elements\n";
	vector<int> a;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		a.push_back(ele);
    }
	cout<<"max element:"<<*max_element(a.begin(),a.end());
	return 0;
	}