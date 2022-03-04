#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	
	while(cin >> n){
		vector<int> a;
		while(n){
			int temp;
			temp=n%2;
			n/=2;
			a.push_back(temp);			
		}
		int b[a.size()]={};
		for(int i=0; i<a.size(); i++){
			b[a.size()-i-1]=a[i];
		}
		for(int i=0; i<a.size(); i++){
			cout << b[i]; 
		}
		cout << endl;
	}
	return 0;
}
