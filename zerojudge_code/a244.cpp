#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n){
		n--;
		int a;
		long long int b, c;
		cin >> a >> b >> c;
		if(a==1){
			cout << b+c << endl;
		}else if(a==2){
			cout << b-c << endl;
		}else if(a==3){
			cout << b*c << endl;
		}else{
			cout << b/c << endl;
		}
		
	}
	return 0;
}
