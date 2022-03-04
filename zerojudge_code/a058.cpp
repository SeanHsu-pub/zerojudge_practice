#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n, t, t0, t1, t2;
	cin >> n;
	t0=0;
	t1=0;
	t2=0;
	while(n){
		cin >> t;
		if(t%3==0){
			t0++;
		}else if(t%3 ==1){
			t1++;
		}else{
			t2++; 
		}
		n--;
	}
	cout << t0 << " " << t1 << " " << t2;
	return 0;
}
