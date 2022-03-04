#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(void){
	int n=0;
	vector<int> a;
	a.push_back(2);
	for(int i=3; i<=2147483647; i++){
		bool is=false;
		for(int j=0; j<a.size(); j++){
			if(i%a[j]==0){
				is=true;
			}
		}
		if(is==false){
			a.push_back(i);
		}
	}
	for(vector<int>::iterator it=a.begin(); it!=a.end(); it++){
		cout << *it << endl;
	}
	return 0;
}
