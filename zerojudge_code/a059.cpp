#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=0, N;
	cin >> n;
	N=n;
	int a, b;
	while(n){
		n--;
		cin >> a >> b;
		int i=1, total=0;
		while(true){
			if(i*i>=a && i*i<=b){
				total+=(i*i);
			}else if(i*i>b){
				break;
			}
			i++;
		}
		cout << "Case " << N-n << ": " << total << endl;
	}
	return 0;
}
