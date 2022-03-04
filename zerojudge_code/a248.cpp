#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int a, b, n;
	while(cin >> a >> b >> n){
		long long int ta=a;
		long long int tb=b;
		ta/=tb;
		int t=ta;
		int time=0;
		while(t){
			t/=10;
			time++;
		}
		for(int i=0; i<n; i++){
			a*=10;
			ta*=10;
		}
		a/=b;
		a-=ta;
		for(int i=0; i<n; i++){
			ta/=10;
		}
		int times=0, tt=a;
		while(tt){
			tt/=10;
			times++;
		}
		n=n-times-1;
		cout << ta << "." << a;
		for(int i=0; i<n; i++){
			cout << "0";
		}
		cout << endl;
	}
	return 0;
}
