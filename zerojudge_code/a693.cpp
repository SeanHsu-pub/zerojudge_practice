#include<bits/stdc++.h>
using namespace std;
int main(){
	//ios::sync_with_studio(false);
	//cin.tie(0);
	int n, m;
	while(cin >> n >> m){
	//const int cn=n;
	int s[n]={};
	for(int i=1; i<=n; i++){
		int t=0;
		cin >> t;
		s[i]=s[i-1]+t;
	}
	int x1, x2;
	for(int k=0; k<m; k++){
		int sum=0;
		cin >> x1 >> x2;
		cout << s[x2]-s[x1-1] << "\n";
	}
	}
	return 0;
}
