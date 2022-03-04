#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a, b;
	while(cin >> a >> b){
		int max;
		/*
		if(a>b){
			max=a/2;
		}else{
			max=b/2;
		}
		int gcd;
		for(int i=2; i<=max; i++){
			if((a%i==0)&&(b%i==0)){
				gcd=i;
			}
		}
		*/
		int min;
		if(a>b){
			max=a;
			min=b;
		}else{
			max=b;
			min=a;
		}
		int t;
		while(true){
			t=max%min;
			if(t==0){
				break;
			}
			max=min;
			min=t;
		}
		cout << min << endl;
	}
	return 0;
}
