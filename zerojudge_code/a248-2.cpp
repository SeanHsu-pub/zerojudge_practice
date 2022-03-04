#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, n;
	while(cin >> a >> b >> n){
		cout << a/b << ".";
		for(int i=0; i<n; i++){
			a%=b;
			a*=10;
			cout << a/b;
		}
		cout << endl;
	}
	return 0;
}
