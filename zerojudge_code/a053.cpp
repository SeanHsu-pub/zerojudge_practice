#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n=0;
	while(cin >> n){
		if(n>=0 && n<=10){
			cout << n*6 << endl;
		}else if(n>=11 && n<=20){
			cout << 60+(n-10)*2 << endl;
		}else if(n>=21 && n<=40){
			cout << 80+(n-20) << endl;
		}else{
			cout << 100 << endl;
		}
	}
	return 0;
}
