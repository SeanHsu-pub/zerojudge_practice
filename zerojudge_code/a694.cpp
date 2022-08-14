#include<iostream>
using namespace std;
int main(){
	int n, m;
	while(cin >> n >> m){
		const int cn=n;
	int s[cn][cn]={};
	for(int i=0; i<cn; i++){
		for(int j=0; j<cn; j++){
			cin >> s[i][j];
		}
	}
	int x1, y1, x2, y2;
	for(int k=0; k<m; k++){
		int sum=0;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i=x1-1; i<x2; i++){
			for(int j=y1-1; j<y2; j++){
				sum+=s[i][j];
			}
		}
		cout << sum << endl;
	}
	}
	
	
	
	return 0;
}
