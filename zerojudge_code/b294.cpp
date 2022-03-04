#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	const int cn=n;
	int t, total=0;
	for(int i=1; i<=cn; i++){
		cin >> t;
		total+=(i*t);
	}
	cout << total << endl; 
	return 0;
}
