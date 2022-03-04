#include<bits/stdc++.h>
using namespace std;
int main(void){
	int t;
	cin >> t;
	while(t){
		t--;
		int n, m;
		cin >> n >> m;
		const int cn=n;
		const int cm=m;
		int a[cn][cm]={};
		int b[cn][cm]={};
		int tt;
		for(int i=0; i<cn; i++){
			for(int j=0; j<cm; j++){
				cin >> tt;
				a[i][j]=tt;
				b[cn-i-1][cm-j-1]=tt;
			}
		}
		bool is=true;
		for(int i=0; i<cn; i++){
			for(int j=0; j<cm; j++){
				if(a[i][j]!=b[i][j]){
					is=false;
					break;
				}
			}
		}
		if(is){
			cout << "go forward" << endl;
		}else{
			cout << "keep defending" << endl;
		}
	}
	return 0;
}
