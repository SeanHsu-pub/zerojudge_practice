#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	while(cin >> n){
		int total=0;
		for(int i=1; i<=n-1; i++){
			total+=(i*i);
		}
		total++;
		cout << total << endl;
	}
	return 0;
}
