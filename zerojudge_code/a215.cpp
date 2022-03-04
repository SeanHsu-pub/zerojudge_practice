#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n=0, m=0;
	while(cin >> n >> m){
		//cin >> n >> m;
		if(m<n){
			cout << 1 << endl;
			continue;
		}
		
		int total=0, i, c=0;
		for( i=n; total<=m; i++){
			c++;
			total+=i;
			//if(total>m){
				//cout << i-n+1 << endl;
			//	break;
			//}
		}
		cout << c <<endl; 
//		if(n!=0){
//			cout << i-n+1 << endl;
//		}else{
//			cout << i-n << endl; 
//		}
		
	}
	return 0;
}
