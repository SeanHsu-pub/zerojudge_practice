#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b;
	while(cin >> a >> b){
		int n=0;
		for(int i=a; i<=b; i++){
			bool is=true;
			if(i%2==0&&i!=2){
				continue;
			}else if(i==2){
				n++;
			}
			for(int j=3; j<=(i/2)+1; j+=2){
				if(i%j==0){
					is=false;
					break;
				}
			}
			if(is){
				n++;
			}
		}
		cout << n << endl;
	}
	return 0;
} 
