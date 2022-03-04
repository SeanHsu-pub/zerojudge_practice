#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		int a=0, b=0;
		b=n;
		while(n){
			n--;
			int t;
			cin >> t;
			a+=t;
		}
		if(a>(59*b)){
			cout << "no" << endl;
		}else{
			cout << "yes" << endl;
		}
	}
	return 0;
}
