#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a, b, gcd;
	cin >> a >> b;
	if((a==1)||(b==1)){
		cout << 1;
	}else{
	if(a>b){
		for(int i=2; i<=b; i++){
			if((a%i == 0) && (b%i == 0)){
				gcd=i;
			}
		}
		cout << gcd;
	}else if(a<b){
		for(int i=2; i<=a; i++){
			if((a%i == 0) && (b%i == 0)){
				gcd=i;
			}
		}
		cout << gcd;
	}else{
		cout << a;
	}
	}
	return 0;
}
